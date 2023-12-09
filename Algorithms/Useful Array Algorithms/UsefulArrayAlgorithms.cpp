#include<bits/stdc++.h>
using namespace std;


int main(){

    // initializing array
    int a[] = {1, 2, 3, 4, 5, -6};

    // checking if all elements are positive
    all_of(a, a+6, [](int x) {return x>0;})?
        cout<<"All are positive elements":
        cout<<"All are not positive elements";

    
    // checking if any element is negative
    any_of(a, a+6, [](int x){return x<0;})?
        cout<<"\nThere exists a negative number":
        cout<<"\nAll are positive elements";


    // checking if no element is negative
    none_of(a, a+6, [](int x){return x<0;})?
        cout<<"\nNo negative elements":
        cout<<"\nThere are negative elements";

    
    // declaring second array
    int a1[6];

    // using copy_n to copy contents
    copy_n(a, 6, a1);

    // displaying the copied array
    cout<<"\nThe new array after copying is : ";
    for(int i=0;i<6;i++){
        cout<<a1[i]<<" ";
    }

    // initializing array with 0 values
    int arr[] = {0};

    // using iota to assign values
    iota(arr, arr+6, 100);

    // displaying the new array
    cout<<"\nThe new array after assigning the values is : ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}