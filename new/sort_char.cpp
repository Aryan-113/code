#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    string s = "tree";
    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    vector<vector<char>> bucket(s.size()+1);

    for(auto val:mpp){
        bucket[val.second].push_back(val.first);
    }

    // for(int i=0;i<bucket.size();i++){
    //     for(int j=0;j<bucket[i].size();j++){
    //         cout<<bucket[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    string ans;

    for(int i=s.size();i>=1;i--){
        for(char ch:bucket[i]){
            int j=i;
            while(j>0){
                ans.push_back(ch);
                j--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}