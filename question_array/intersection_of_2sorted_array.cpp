#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int> a={1,2,2,3,3,4,5,6};
   vector<int> b={2,3,3,5,6,6,7};
   vector<int> temp;

   int n1=a.size();
   int n2=b.size();

   int i=0;
   int j=0;

   while(i<n1 && j<n2){
    if(a[i]<b[j]){
        i++;
    }
    else if(a[i]>b[j]){
        j++;
    }
    else{
        temp.push_back(a[i]);
        i++;
        j++;
    }


    //cant use break in optimal solution as it breaks from the entire loop
    // if(a[i]<b[j]){
    //     break;
    // }
   }

   for(int val:temp){
    cout<<val<<" ";
   }

   return 0;
}