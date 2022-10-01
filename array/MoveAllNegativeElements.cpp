#include<bits/stdc++.h> 
using namespace std ;
void MoveAll(vector<int>&arr){
    int n = arr.size() ;
    vector<int>arr1;
        int j=0;
        for(int i=0;i<n;i++){
            int x=arr[i];
           if(x<0) arr1.push_back(x);
           else arr[j++]=x;
        }
      
       for(const auto x:arr1)  arr[j++]=x;
      for(int i : arr) cout << i << " " ;
}
int main(){
    vector<int> arr = {-88,-99,5,-47,4,-55,4,-1,22,3,5,5405} ;
    MoveAll(arr) ;

}