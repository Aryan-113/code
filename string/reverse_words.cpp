#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
string rev_word(string s){
    int n=s.size();

    string temp;
    int idx=0;
    int tp=0;
    for(int i=n-1;i>=0;i--){
        temp.push_back(s[i]);
        tp++;
        if(s[i]==' '){
            reverse(temp.begin()+idx,temp.begin()+tp);
            idx=i;
        }
    }

    return temp;
}

int main(){
    string s="  hello world  ";
    // string ans=rev_word(s);

    // cout<<ans;

    int n=s.size();

    string temp;
    int idx=0;
    int tp=0;
    for(int i=n-1;i>=0;i--){
        temp.push_back(s[i]);
        if(s[i]==' '){
            reverse(temp.begin()+idx,temp.begin()+tp);
            cout<<temp<<endl;
            idx=tp+1;
        }
        if(i==0){
            reverse(temp.begin()+idx,temp.begin()+tp+1);
        }
        tp++;
    }
 
    cout<<temp;

   return 0;
}