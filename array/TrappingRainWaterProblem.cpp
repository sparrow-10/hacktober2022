/*Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. */
#include<bits/stdc++.h>
#include<math.h>
using namespace std ;
void trappingWater(vector<int>& arr ){
    int n = arr.size() ;
      long long ans =0;

        int l[n],r[n];

        l[0]=arr[0];

        for(int i=1;i<n;i++){

            l[i]=max(l[i-1],arr[i]);

        }

        r[n-1]=arr[n-1];

        for(int i=n-2;i>0;i--){

            r[i]=max(r[i+1],arr[i]);

        }

        for(int i=0;i<n;i++){

            ans +=max(0,min(l[i],r[i])-arr[i]);

        }
        cout << ans;
}
int main(){
    vector<int> arr = {1, 5, 8, 10} ;
    
    trappingWater(arr ) ;
}