#include<iostream>
#include<vector>
using namespace std;
 
void rev(string &s,int k){
    int n=s.size();
    int r=n/(2*k);
    int mos=n%(2*k);
    cout<<mos<<endl;

    int i=0;
    int y=0;
    while(i<r){
        swap(s[y],s[y+1]);
        y+=k;
        i++;
    }

    if(mos<k&&mos!=0){
        int i=n-k-1;
        int j=n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    else if(mos<2*k && mos>=k){
        swap(s[n-k-1],s[n-k]);
    }
}

int main(){
   string s="ab";
   int k=2;
   cout<<s<<endl;
   rev(s,k);
   cout<<s;
   return 0;
}