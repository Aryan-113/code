//236A boy or girl


#include<iostream>
#include<vector>
#include<set>   
using namespace std;


int main(){

    string s;
    cin>>s;

    set<int> charachter;

    for(int i=0;i<s.length();i++){
        charachter.insert(s[i]);
    }


    if(charachter.size()%2==0){
        cout<<"CHAT WITH HER";
    }
    else{
        cout<<"IGNORE HER";
    }
   return 0;
}