//to find the maximum length subarray whose sum is equal to k

#include<iostream>
#include<vector>
using namespace std;
 
int summition(vector<int> arr,int k){
   int maxlen=0;
   for(int i=0;i<arr.size();i++){
      int sum=0;
      for(int j=i;j<arr.size();j++){
         sum+=arr[j];

         if (sum==k)
         {
            int len=j-i+1;
            maxlen=max(maxlen,len);
         }
         
      }
   }

   return maxlen;
}

int main(){
   vector<int> arr={5,4,-3,7,20,10,5};
   cout<<summition(arr,33);
   return 0;
}