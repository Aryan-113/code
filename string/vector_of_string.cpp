#include<iostream>
#include<vector>
using namespace std;
 
string longestPrefix(vector<string> &strs){

    if(strs.size()==0){
        return {};
    }

    int min=strs[0].size();
    string minstr=strs[0];
    for(int i=1;i<strs.size();i++){
        if(strs[i].size()<min){
            min=strs[i].size();
            minstr=strs[i];
        }
    }

    for(int i=0;i<minstr.size();i++){
        char c=minstr[i];
        for(int j=0;j<strs.size();j++){
            if(strs[j][i]!=c){
                return minstr.substr(0,i);
            }
        }
    }

    return strs[0];
}

int main(){
   vector<string> strs;

//    int min=strs[0].size();
//    string minstr=strs[0];
//     for(int i=1;i<strs.size();i++){
//         if(strs[i].size()<min){
//             min=strs[i].size();
//             minstr=strs[i];
//         }
//     }
//     cout<<min;

//     string temp;
//     int n=strs.size();



    string anss=longestPrefix(strs);
    cout<<anss;
   return 0;
}