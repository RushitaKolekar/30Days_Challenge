#include<bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr) {

    int n= arr.size();

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
  return -1;
}

int main(){

    vector<int> arr1 = {3,1,3,4,2};

    sort(arr1.begin(), arr1.end());
    cout<<"Duplicate Number: "<<findDuplicate(arr1)<<endl;

    //test case (edge case)
    vector<int> arr2(99999);
    for(int i = 0; i < 99999; i++) {
        arr2[i] = i + 1;
    }
    arr2[99997] = 50000; // Introduce a duplicate
    sort(arr2.begin(), arr2.end()); 
    cout << "Duplicate Number in large array: " << findDuplicate(arr2) << endl;


}