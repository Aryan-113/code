#include<iostream>
#include<vector>
using namespace std;
 

void change(string& s,int start,int e){

    if(start>e){
        return;
    }

    swap(s[start],s[e]);
    return change(s,start+1,e-1);
}

int main(){
   string s="abcdefgh";
   int n=s.length();
   change(s,0,n-1);

   for(char val:s){
    cout<<val<<" ";
   }
   return 0;
}