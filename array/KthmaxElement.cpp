#include<bits/stdc++.h> 
using namespace std ;

void KthmaxVal(vector<int>& arr, int k ){
    priority_queue<int> q ;
    for(int i : arr) q.push(i) ;
    k = k - 1;
    while(k--){
        q.pop() ;
    }
    cout << q.top() ;
}
int main(){
    vector<int> arr = {88,99,5,47,4,55,4,1,22,3,5,5405} ;
    int k = 5 ; 
    KthmaxVal(arr , k ) ;

}