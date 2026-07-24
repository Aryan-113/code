#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 
string rev_word(string s){
    string t;
    int count=0;
    for(int i=s.length()-1;i>=0;i--){
        if(i>0&&s[i]==' '&&s[i-1]==' '){
            continue;
        }
        if(s[i]!=' '){
            t.push_back(s[i]);
        }
        else if(s[i]==' '){
            reverse(t.begin()+count,t.end());
            t.push_back(' ');
            count=t.length();
        }
        if(i==0){
            reverse(t.begin()+count,t.end());
        }
    }

    return t;
}

int main(){
   string s="  hello world  ";

   string temp=rev_word(s);
   cout<<temp;
    //cout<<s.length();
   return 0;
}