// we are given an array and we have to find the kth maximum and minimum element out of the array'

#include<bits/stdc++.h>
using namespace std ;

pair<int,int> maximini(vector<int> temp , int k){

// Approach :- We need to sort the array and from there we cam find the desired element

sort(temp.begin(),temp.end());

// Check if the k is in the range or not

if(k > temp.size() || k < 1) return {-1,-1} ;

// two cases are possible if the duplicated are present or duplicated are not present

// case 1:-Duplicates are not present
// We can easiy return the maximum and minimum element by using the index numbers

// case 2 :-If duplicates are present

int maxi , mini ;

if(k == 1) return {temp[0],temp[temp.size()-1]} ;

int cnt = 1 ;

for(int i = temp.size()-2 ; i >= 0 ; i--){
    if(temp[i]!=temp[i+1])   cnt++ ;


    if(cnt == k){
        maxi = temp[i];
        break ;
    }
}

cnt = 1;

for(int i = 1 ; i < temp.size() ; i++){
    if(temp[i]!=temp[i-1]) cnt++ ;

   
    if(cnt == k){
        mini = temp[i];
        break ;
    }
}
return {mini,maxi} ;

}

int main(){

vector<int>temp ;

cout << "enter the size of array" <<endl ;
int size ;
cin >>size ;

cout << "Enter the elements of the array" <<endl ; 
for(int i = 0 ; i < size ; i++){
    int elem ;
    cin >> elem ;

    temp.push_back(elem);
}

int k ;
cout<< " Enter the value of k" << endl ;
cin >> k ;

pair<int,int> ans = maximini(temp,k) ;

cout << "Kth maximum and Kth minimum element is " << ans.first << " "<<ans.second ;


    return 0 ;
}