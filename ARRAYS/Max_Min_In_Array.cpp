// we are given an array and we have to find the maximum and minimum element out of the array

#include<bits/stdc++.h>
using namespace std ;

pair<int,int> maxmin(int arr[]){
    int maxi = INT_MIN ;
    int mini = INT_MAX ;

    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] > maxi) maxi = arr[i] ;
        if(arr[i] < mini) mini = arr[i] ;
    }

    return {mini,maxi};

}


int main(){

int arr[5]={55,48,2,78,95};

pair<int,int>ans = maxmin(arr);

cout << " Minimum and Maximum Element is "<< ans.first <<" "<<ans.second <<endl ;

    return 0 ;
}