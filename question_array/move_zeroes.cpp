#include<iostream>
#include<vector>
using namespace std;
 
int main(){

    //brute force approach
    //TC O(2N)
    //SC O(N)
//    int arr[10]={1,0,2,3,2,0,0,4,5,1};

//    int temp[10]={0};
//    int a=0;
//    for (int i = 0; i < 10; i++)
//    {
//     if(arr[i]!=0){
//         temp[a]=arr[i];
//         a++;
//     }
//    }

//    for(int val:temp){
//     cout<<val<<" ";
//    }

   //optimal solution
   //two pointer approach

   int nums[10]={1,0,2,3,2,0,0,4,5,1};
   int n=10;

   int j=-1;

   for(int i=0;i<n;i++){

       if(nums[i]==0){
           j=i;
           break;
        }
   }

   //if j==0 then there is no zero present in the array so return the og array
   if(j == -1){   // no zero found, print as is
    for(int val : nums) cout << val << " ";
    return 0;
}

   for(int i=j+1;i<n;i++){
       if(nums[i]!=0){
           swap(nums[i],nums[j]);
           j++;
        }
    }

    for(int val:nums){
    cout<<val<<" ";
   }
   
   
   return 0;
}