#include<bits/stdc++.h>

int main(){
    int arr[] = {3,5,1,2,4};
    std::sort(std::begin(arr),std::end(arr));
    
    for(int i: arr){
        std::cout<<i<<" ";
    }
}
