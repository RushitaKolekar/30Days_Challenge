#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void mergeSortedArrays(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int i=n-1,j=0;

    while(i>=0 && j<m){
        if(arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        } else {
            break;
        }
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

void printArray(const vector<int> &arr, string name) {

    cout <<endl<< name << ": [";
    for (int num : arr) {
        cout << num << " ";
    }
    cout<<"]";
    cout<<" ";
}

int main(){
    vector<int> arr1 = {3, 1, 2, 4, 5};
    vector<int> arr2 = {6, 7, 8, 9, 10};

    cout << "Before merging 2 sorted array: ";
    printArray(arr1,"arr1");
    printArray(arr2,"arr2");

    mergeSortedArrays(arr1, arr2);

    cout << "\nAfter merging 2 sorted array: ";
    printArray(arr1,"arr1");
    printArray(arr2,"arr2");


    return 0;
}