//valid anagram
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool anagram(string s,string t){

    if(s.length()!=t.length()){
        return false;
    }

    unordered_map<int,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }

    //checking on the 2nd string
    for(int i=0;i<t.length();i++){
        if(mpp.find(t[i])!=mpp.end()&&mpp[t[i]]>0){
            cout<<t[i]<<":";
            cout<<mpp[t[i]]<<endl;
            mpp[t[i]]--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
   string s="aacc";
   string t="ccac";
    /*
    unordered_map<int,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }

    //checking on the 2nd string
    for(int i=0;i<t.length();i++){
        if(mpp.find(t[i])!=mpp.end()){
            cout<<t[i]<<":";
            cout<<mpp[t[i]]<<endl;
            mpp[t[i]]--;
        }
        else{
            return false;
        }
    }*/


    bool ans=anagram(s,t);
    if(ans==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
   return 0;
}