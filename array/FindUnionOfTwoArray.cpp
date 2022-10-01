#include<bits/stdc++.h> 
using namespace std ;

void Union (vector<int>& arr1, vector<int>& arr2 ){
   vector<int> ans;
    int n = arr1.size() ;
    int m = arr2.size() ;

    map<int, int> ans2;

    for (int i = 0; i < n; i++)
        ans.push_back(arr1[i]);
    for (int i = 0; i < m; i++)
        ans.push_back(arr2[i]);

    for (int i = 0; i < ans.size(); i++)

          ans2[ans[i]]++;

    for(auto i : ans2)cout << i.first << "  " ;

}
int main(){
    vector<int> arr1 = {1, 2 ,3, 4 ,5} ;
    vector<int> arr2 = {1 ,2 ,3} ;
    Union(arr1 , arr2) ;

}