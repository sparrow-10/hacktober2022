#include<bits/stdc++.h> 
using namespace std ;
void nextperm(vector<int>& nums){
    int n=nums.size();
        int index=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                index=max(index,i);
            }
        }

        if(index==0)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int x=0;
        for(int i=index+1;i<n;i++)
        {
            if(nums[i]>nums[index-1] && nums[i]<nums[index])
            {
                    x=i;
            }
        }
    if(x!=0)
    {
        swap(nums[x],nums[index-1]);
        sort(nums.begin()+index,nums.end());
    }
    else
    {
        swap(nums[index-1],nums[index]);
                sort(nums.begin()+index,nums.end());
    }
    for(int i : nums) cout << i  << " " ;
}
int main(){
    vector<int> arr = {1,2,3} ;
    nextperm(arr) ;

}