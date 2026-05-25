#include<iostream>
#include<vector>
using namespace std;
 
string change(string s){
    string temp;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

string samestring(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            for(int j=i;j<i+3;j++){
                s[i+j]=s[i];
            }
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');

        }
    }
    return s;
}

int main(){
   string s;
   cout<<"enter string\n";
   getline(cin,s);
   cout<<samestring(s);
   return 0;
}