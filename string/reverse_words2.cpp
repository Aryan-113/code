#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
   vector<char> s={'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};

   for(char val:s){
    cout<<val;
   }
   cout<<endl;
   int n=s.size();
   int i=0;
   int j=n-1;
   while(i<=j){
    swap(s[i],s[j]);
    i++;
    j--;
   }

   for(char val:s){
    cout<<val;
   }
   cout<<endl;
   int idx=0;
   for(int i=0;i<n;i++){
    if(s[i]==' '){
        reverse(s.begin()+idx,s.begin()+i);
        idx=i+1;
    }
   }
    reverse(s.begin()+idx,s.end());

   for(char val:s){
    cout<<val;
   }
   return 0;
}