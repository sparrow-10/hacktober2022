#include<bits/stdc++.h> 
using namespace std ;
void reverse(vector<int>& arr){
    int i = 0 ;
    int j = arr.size() ;
    while(i <= j  ){
        swap(arr[i] , arr[j]) ;
        i++ ;
        j-- ;
    }
    for(int i : arr) cout << i  << " " ;
}
int main(){
    vector<int> arr = {88,99,5,47,4,55,4,1,22,3,5,5405} ;
    reverse(arr) ;

}