// We are given an array and we have to rotate array by 1 position

#include<bits/stdc++.h>
using namespace std ;

void oneRotate(int arr[],int size){
    for(int i = size-1 ; i > 0 ; i--){
        swap(arr[i],arr[i-1]) ;
    }
}

int main(){

int arr[5] = {1,2,3,4,5} ;

oneRotate(arr,5) ;

for(int i = 0 ; i < 5 ; i++){
    cout << arr[i] <<" " ;
}

    return 0 ;
}