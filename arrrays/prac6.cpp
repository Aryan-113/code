#include<iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
int arr[5]={7,4,1,3,2};



    return 0;
}