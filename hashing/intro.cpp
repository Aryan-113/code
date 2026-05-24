#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,1,3};
    int n=5;

    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }

    string s="abdavahv";

    int hash1[26]={0};
    for(int i=0;i<s.size();i++){
        hash1[s[i]-'a']++;
    }
    char c;
    cin>>c;
    //int num;
    //cin>>num;
    cout<<hash1[c-'a']<<endl;
    return 0;
}