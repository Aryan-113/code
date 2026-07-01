//replace space with @40 with in-place solution
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    string s="my name is ";
    cout<<s<<endl;

    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;
        }
    }

    int newlen=n+2*count;

    s.resize(newlen);
    int r=s.size();

    int i=n-1;
    int j=r-1;

    while(i>=0){
        if(s[i]==' '){
            s[j]='0';
            s[j-1]='4';
            s[j-2]='@';
            i--;
            j-=3;
        }
        else{
            s[j]=s[i];
            i--;
            j--;
        }
    }

    cout<<s;
   return 0;
}