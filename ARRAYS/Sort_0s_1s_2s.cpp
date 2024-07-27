// We are given an array and we have to sort the given array without using any sorting algorithm

#include<bits/stdc++.h>
using namespace std ;

void sortZeros(vector<int>&temp){

// Approach 1 :- count the number of times each element is occuring and based the occurance we can sort the array

// int zeros = 0 , ones = 0 , twos = 0 ;

// for(auto i : temp){
//     if(i == 0) zeros++ ;
//     else if (i == 1) ones++ ;
//     else twos++ ;
// }

// int currIndex = 0 ; 
// while(zeros > 0){
//     temp[currIndex] = 0 ;
//     currIndex++ ;
//     zeros--;
// }

// while(ones > 0){
//     temp[currIndex] = 1 ;
//     currIndex++ ;
//     ones-- ;
// }

// while(twos > 0) {
//     temp[currIndex] = 2 ;
//     currIndex++;
//     twos-- ;
// }


//  ---------------------------------------- Approach 2 :- Dutch Flag Algorithm ---------------------------

int low =0 , mid = 0 , high = temp.size()-1 ;

while(mid < high){
    if(temp[mid] == 1) mid++ ;

    if(temp[mid] == 0){
        swap(temp[mid],temp[low]) ;
        low++ ;
        mid++ ;
    }

    if(temp[mid] == 2){
        swap(temp[high],temp[mid]) ;
        high-- ;
    }

}

}

int main(){

vector<int>temp = {2,1,1,0,1,2,0,0,1,2} ;

sortZeros(temp);

for(auto i : temp){
    cout << i << " ";
}



    return 0 ;
}