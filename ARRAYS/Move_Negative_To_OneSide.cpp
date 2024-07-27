// We are given an array and we have to move the negative to the one side of the array

#include<bits/stdc++.h>
using namespace std ;

void moveNeg(vector<int>&temp){

int i = 0 ;
int j = temp.size()-1;
while(i < j){
    if(temp[i] < 0 && temp[j] > 0){
        swap(temp[i],temp[j]) ;
        i++ ;
        j-- ;
    }
    if (temp[i] > 0) i++;
    if(temp[j] < 0) j-- ;
}

}

int main(){

vector<int>temp = {3,-1,5,7,-2,-1,3,9,-7,6} ;

moveNeg(temp);

for(auto i : temp){
    cout <<i << " ";
}
    return 0 ;
}