#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){
            break;
        }
    }
}

int main(){
    int arr[5]={0,53,12,45,112};
    bubble(arr,5);
    for(int val:arr){
        cout<<val<<" "<<endl;
    }
    return 0;
}