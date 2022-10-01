/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order. */

#include<bits/stdc++.h>
#include<math.h>
using namespace std ;
void findLongestConseqSubseq(vector<int>& arr)

    {
        int N = arr.size() ;

        //using unordered_map 

        unordered_map<int,int>m;

        for(int i=0;i<N;i++)

        {

            int no=arr[i];

            

            if(m.count(no)==0)

            {

                if(m.count(no-1)==0 and m.count(no+1)==0)

                {

                    m[no]=1;

                }

                else if(m.count(no-1)==1 and m.count(no+1)==1)

                {

                    int len1=m[no-1];

                    int len2=m[no+1];

                    m[no-len1]=1+len1+len2;

                    m[no+len2]=1+len1+len2;

                    m[no]=1;

                }

                else if(m.count(no-1)==0 and m.count(no+1)==1)

                {

                    int len1=m[no+1];

                    m[no+len1]=len1+1;

                    m[no]=len1+1;

                }

                else if(m.count(no-1)==1 and m.count(no+1)==0)

                {

                    int len1=m[no-1];

                    m[no-len1]=len1+1;

                    m[no]=len1+1;

                }

            }

        }

        int highest=0;

        unordered_map<int,int>::iterator it;

        for(it=m.begin();it!=m.end();++it)

        {

            if(it->second > highest)

            {

                highest=it->second;

            }

        }

        cout <<  highest;

    }

int main(){
    vector<int> arr = {1, 5, 8, 10} ;
    findLongestConseqSubseq(arr) ;
}