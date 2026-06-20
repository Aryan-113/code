#include<iostream>
#include<vector>
using namespace std;
 
void one(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

//brute force approach to rotate array by d place
void rotate(int arr[],int n,int d){
    d=d%n;
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }

    //int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
        //j++;
    }
}

//optimum approach to roatate the array by d place
void reverse(int arr[],int s,int e){
    
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

void opt(int arr[],int n,int d){
    d=d%n;

    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
   int arr[7]={1,2,3,4,5,6,7};
   int n=7;
   opt(arr,n,9);

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}