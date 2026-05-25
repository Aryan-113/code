#include<iostream>
#include<vector>
using namespace std;

char to_lowercase(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    if(ch>='A'&&ch<='Z'){
        return ch -'A'+'a';
    }
}

char valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z')){
        return 1;
    }
    else{
        return 0;
    }
}

bool check_pal(string s){
    int st=0;
    int e=s.length()-1;

    while(st<e){
        if(s[st]!=s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}

bool is_palindrome(string s){

    //removing useless charachter that are not alphabet or number like !,&
    string temp="";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }

    //lowercase
    for(int j=0;j<temp.length();j++){
        temp[j]=to_lowercase(s[j]);
    }

    return check_pal(temp);
}

int main(){
   //cout<<lowercase_to_uppercase('a');
   //cout<<lowercase_to_uppercase('B');
   string s="abcbbcba";
   cout<<is_palindrome(s);
   return 0;
}