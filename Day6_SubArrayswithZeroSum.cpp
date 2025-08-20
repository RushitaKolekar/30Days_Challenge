#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findSubarraysWithZeroSum(const vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, vector<int>> prefixMap;
    vector<pair<int, int>> result;
    int prefixSum = 0;
    
    prefixMap[0].push_back(-1);
    
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        
        if (prefixMap.find(prefixSum) != prefixMap.end()) {
            for (int start : prefixMap[prefixSum]) {
                result.push_back({start + 1, i});
            }
        }
        prefixMap[prefixSum].push_back(i);
    }
    
    return result;
}

int main() {
    // Test cases
    vector<int> arr1 = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> result1 = findSubarraysWithZeroSum(arr1);
    cout << "Test case 1: ";
    for (auto p : result1) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    
    vector<int> arr2 = {0, 0, 0};
    vector<pair<int, int>> result2 = findSubarraysWithZeroSum(arr2);
    cout << "Test case 2: ";
    for (auto p : result2) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    
   
    
    return 0;
}