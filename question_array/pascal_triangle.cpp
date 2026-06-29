#include<iostream>
#include<vector>
using namespace std;
 
//to find particular element in the pascals triangle

int ncr(int n,int r){
   int res=1;

   for(int i=0;i<r;i++){
      res=res*(n-i);
      res=res/(i+1);
   }

   return res;
}

int val(int n,int r){
   //the forrmula is nCr where n is row-1 and r is column -1
   int ans=ncr(n-1,r-1);
   return ans;
}


vector<vector<int>> generate(int num){
   vector<vector<int>> ans;

}

int main(){
   int num;
   cin>>num;
   
   return 0;
}