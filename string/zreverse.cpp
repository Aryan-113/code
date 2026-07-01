#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    string s="yohmrwhite";
    int n=s.size();
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    cout<<s;
   return 0;
}