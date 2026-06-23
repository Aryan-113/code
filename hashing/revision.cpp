#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int main(){
   int arr[5]={1,2,4,1,2};
   string s="abiabfba";

   int hash[13]={0};

   
   for(int i=0;i<5;i++){
       hash[arr[i]]++;
    }
    
    // int q;
    // cin>>q;
    
    // cout<<"it appears:"<<hash[q]<<" times";

    int hash1[26]={0};

    for(int i=0;i<s.size();i++){
        hash1[s[i]-'a']++;
    }

    char w;
    // cin>>w;
    
    // cout<<"it appears:"<<hash1[w-'a']<<" times";

    //map-based hashing

    int nums[]={1,2,-1,3,-1,4,5};
    int n=7;

    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }

    cout<<mpp[-1]<<endl;

    //finding highest and lowest frequncys
    int maxfreq=0;
    int lowfreq=n;
    int maxelement=-1;
    int lowelement=-1;
    for(auto it:mpp){
        if(it.second>maxfreq){
            maxfreq=it.second;
            maxelement=it.first;
        }

        if(it.second<lowfreq){
            lowfreq=it.second;
            lowelement=it.first;
        }
    }

    cout<<"the highest frequency element:"<< maxelement << " (" << maxfreq << " times)\n";
    cout<<"the lowest frequency element:"<< lowelement << " (" << lowfreq << " times)\n";

   return 0;
}