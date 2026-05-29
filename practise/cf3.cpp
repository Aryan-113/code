#include<iostream>
using namespace std;

char capitalize(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch;
    }
    else{
        int ans=ch-'a'+'A';
        return ans;
    }
}


int main(){
    string s;
    cin>>s;
    
    int ans=capitalize(s[0]);

    s[0]=ans;
    cout<<s;
    
    return 0;
}