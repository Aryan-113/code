#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;

        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }

        for(int i=0;i<s.size();i++){
            bool checked=false;
            if(mpp.find(s[i])!=mpp.end()){
                mpp[s[i]]--;
                checked=true;
            }
            if(checked==false){
                return false;
            }
        }

    return true;
}

int main(){
    string s="bbcc";
    string t="ccbc";

    unordered_map<char,int> mpp;

    for(int i=0;i<t.size();i++){
        mpp[t[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second;
        cout<<endl;
    }

    bool checked=false;
    for(int i=0;i<s.size();i++){
        if(mpp.find(s[i])!=mpp.end()){
            mpp[s[i]]--;
            checked=true;
        }
        else{
            checked=false;
        }
    }
    if(checked==true){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }

    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second;
        cout<<endl;
    }

   return 0;
}