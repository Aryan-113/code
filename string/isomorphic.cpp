#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
bool isomporphic(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }

    unordered_map<char,char> mpp;
    for(int i=0;i<s.length();i++){
        

        if(mpp.find(s[i])==mpp.end()){
            mpp[s[i]]=t[i];
            if(mpp.find(t[i])!=mpp.end()){
                return false;
            }
        }
        else{
            if(mpp[s[i]]!=t[i]){
                return false;
            }
        }
    }

    return true;
}

int main(){
 
    string s="paper";
    string t="title";
    // bool ans=isomporphic(s,t);
    // if(ans){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    unordered_map<char,char> mpp;
    for(int i=0;i<s.length();i++){
        
        if(mpp.find(s[i])==mpp.end()){
            mpp[s[i]]=t[i];
            if(mpp.find(t[i])!=mpp.end()){
                return false;
            }
        }
        else{
            if(mpp[s[i]]!=t[i]){
                return false;
            }
        }
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            cout << it->first << "-->" << it->second << endl;
        }
        cout<<"next iteration:"<<endl;
    }
   return 0;
}