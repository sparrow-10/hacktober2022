/*Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.*/


#include<bits/stdc++.h> 
using namespace std ;

 bool subArrayExists(vector<int>& arr)

    {
        int n = arr.size() ;

        //Your code here

        unordered_map<int,int>mp;

        int sum=0;~

        for(int i=0;i<n;i++){

            sum=sum+arr[i];

            if(sum==0 || mp.find(sum)!=mp.end())

            return true;

            else

            mp[sum]++;

        }

        return false;

        

    }
int main(){
    vector<int> arr = {4 ,2 ,-3 ,1 ,6} ;
    
    if( subArrayExists(arr )  ){
        cout  << " yes " ;
    }
    else{
        cout << "No" ;
    }

}