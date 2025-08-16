#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    long long totalSum = n * (n + 1LL) / 2; 
    long long arrSum = accumulate(arr.begin(), arr.end(), 0LL);
    return static_cast<int>(totalSum - arrSum);
}

int main() {

    // Test Case 1
    vector<int> arr1 = {1, 2, 4, 5};
    cout << "Test Case 1: [1, 2, 4, 5] -> Missing number: " << missingNum(arr1) << endl;

    // Test Case 5
    vector<int> arr2(999999);
    for (int i = 1; i <= 999999; ++i) {
        arr2[i - 1] = i;
    }
    cout << "Test Case 5: [1, 2, 3, ..., 999999] -> Missing number: " << missingNum(arr2) << endl;

    return 0;
}