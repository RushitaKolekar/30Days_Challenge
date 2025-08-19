#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders( vector<int>& arr) {

    int n = arr.size();
    vector<int> leaders;

    if (n == 0) {
        return leaders;
    }
    
    int maxSoFar = INT_MIN;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= maxSoFar) {
            leaders.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    
    //test case1
    vector<int> arr1 = {16, 17, 4, 3, 5, 2};
    vector<int> leaders1 = findLeaders(arr1);

    cout << "Leaders in [16, 17, 4, 3, 5, 2]: ";
    for (int num : leaders1) cout << num << ", ";
    cout << endl;
    
    
    //test case2
    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> leaders2 = findLeaders(arr2);

    cout << "Leaders in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]: ";
    for (int num : leaders2) cout << num << ", ";
    cout << endl;
    
    
    
    return 0;
}