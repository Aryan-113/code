#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
 
bool isWordPattern(string pattern,string s){
    unordered_map<char,string> mpp;
    unordered_set<string> stt;
    int idx=0;
    int n=s.size();
    for(int i=0;i<pattern.size();i++){

        if(idx>n){
            return false;
        }

        string temp;
        if(mpp.find(pattern[i])==mpp.end()){
            for(int j=idx;j<s.size();j++){
                if(s[j]==' '){
                    break;
                }
                temp.push_back(s[j]);
            }
            idx+=temp.length()+1;
            if(temp.empty()) return false;
            if(mpp.find(pattern[i]) == mpp.end()){
                // new pattern character — check word isn't already claimed
                if(stt.find(temp) != stt.end()){
                    return false;
                }
                mpp[pattern[i]] = temp;
                stt.insert(temp);
            }
        }
        else{
            if(mpp[pattern[i]] != temp){
                return false;
            }
        }
    }
    if(idx>n){
        return false;
    }
    return true;

}

int main(){
    string patter="abba";
    string s="dog cat cat dog";
    unordered_map<char,string> mpp;
    mpp['c']="apple";

    for(auto it:mpp){
        cout<<it.first<<" --> "<<it.second<<endl;
    }
    if(mpp.find('apple')!=mpp.end()){
        cout<<"yessss";
    }
   return 0;
}