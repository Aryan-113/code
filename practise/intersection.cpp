//intercection of 2 sorted array

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int> a={1,2};
   vector<int> b={1,2};

   vector<int> temp;

   int i=0;
   int j =0;

   int n1=a.size();
   int n2=b.size();

   while(i<n1&&j<n2){
    if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }

    if(a[i]==b[j]){
        temp.push_back(a[i]);
        i++;
        j++;
    }
   }

   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}