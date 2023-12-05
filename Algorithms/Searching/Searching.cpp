#include<bits/stdc++.h>
using namespace std;

void show(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array : ";
    show(arr, size);

    cout<<"\nLet's sort the array : ";
    sort(arr, arr+size);

    cout<<"\nSorted array : ";
    show(arr, size);

    cout<<"\nLet's search for 5 in the array";
    if(binary_search(arr, arr+size, 5)){
        cout<<"\nElement found in the array.";
    }else{
        cout<<"\nElement not found.";
    }
}
