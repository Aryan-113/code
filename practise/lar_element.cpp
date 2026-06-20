#include<iostream>
#include<vector>
using namespace std;
 
int largest(vector<int>arr){
    int ans=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>ans){
        ans=arr[i];
        }
    }

    return ans;
}

int sec_largest(vector<int> arr){
    int ans=-1;
    int largest=arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            ans=largest;
            largest=arr[i];
        }

        else if(arr[i]<largest && arr[i]>ans){
            ans=arr[i];
        }
    }

    return ans;
}

int main(){
   vector<int> arr={5,5,5,5,5,5};

   cout<<"the largest element is:"<<largest(arr)<<endl;
   cout<<"the secound largest element is:"<<sec_largest(arr)<<endl;
   return 0;
}