#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10, 20, 5, 23, 5, 20, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr, arr+n);

    cout<<"Given vector : ";
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }

    // sorting vector in descending order
    sort(vect.begin(),vect.end(),greater<int>());

    cout<<"\nVector after sorting : ";

    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }

    // reversing the vector
    reverse(vect.begin(),vect.end());

    cout<<"\nVector after reversing : ";
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }

    // maximum element in the vector
    cout<<"\nMaximum element in the  vector is : ";
    cout<<*max_element(vect.begin(),vect.end());

    // minimum element in the vector 
    cout<<"\nMinimum element in the vector is : ";
    cout<<*min_element(vect.begin(),vect.end());

    // summation of the vector
    cout<<"\nThe summation of the vector elements is : ";
    cout<<accumulate(vect.begin(),vect.end(),0);

    // find the occurences of particular number
    cout<<"\nOccurences of 20 in the vector : ";
    cout<<count(vect.begin(),vect.end(),20);

    // erasing the element in the vector
    cout<<"\nVector after erasing the element : ";
    vect.erase(find(vect.begin(),vect.end(),42));
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }

    // removing duplicates in the vector
    cout<<"\nVector after removing duplicates : ";
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }

    // distance between first to max element
    cout<<"\nThe distance between first to max element : ";
    cout<<distance(vect.begin(),max_element(vect.begin(),vect.end()));

}