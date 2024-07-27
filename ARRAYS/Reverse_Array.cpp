// We are given an array and we have to reverse the given array

#include<bits/stdc++.h>
using namespace std ;

void reverseArr(int arr[]){
    int i = 0 , j = 4 ;
    
    while(i <= j){
        swap(arr[i],arr[j]);
        i++ ;
        j-- ;
    }
}


int main(){

int arr[5] = {1,2,3,4,5};

reverseArr(arr);

for(int i = 0 ; i < 5 ; i++){
    cout << arr[i]<<" ";
}

    return 0 ;
}
