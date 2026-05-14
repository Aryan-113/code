#include<iostream>
using namespace std;

void sel_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        bool swapped =false;
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        // if there are no swaps in a round then the array is already sorted therefore no need to go further
        if(swapped==false){
            break;
        }
    }
}

int main(){
    int arr[4]={7,2,14,5};
    int n=4;

    sel_sort(arr,n);

    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}