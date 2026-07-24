#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="abcde";

    for(int i=0;i<s.length();i++){
        
        s.push_back(s[0]);
        //cout<<"before erase:"<<s<<endl;
        s.erase(0,1);
        cout<<"after erase:"<<s<<endl;

    }

    cout<<s<<endl;
    s.erase(0,1);

    cout<<s<<endl;
   return 0;
}