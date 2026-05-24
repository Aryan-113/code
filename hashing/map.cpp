#include<iostream>
using namespace std;
#include<map>

int main(){
    string s;
    cin>>s;

    map<char,int> mpp;

    for(int i=0;i<s.size();i++){
        mpp[s[i] ]++;
    }

    char c;
    cout<<"enter a charachter:\n";
    cin>>c;

    cout<<mpp[c];
    return 0;
}