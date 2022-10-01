#include<bits/stdc++.h> 
using namespace std ;
void maxVal(vector<int>& arr){
    int max  =INT_MIN ;
    for(int i : arr){
        if(i >= max)max = i ;
    }
    cout << max ; 
}
int main(){
    vector<int> arr = {88,99,5,47,4,55,4,1,22,3,5,5405} ;
    maxVal(arr) ;

}