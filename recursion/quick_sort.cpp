#include<iostream>
#include<vector>
using namespace std;
 
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int i=s;
    int j=e;

    while (i < j) {
        while (arr[i] <= pivot && i <= e){
            i++;
        }
        while (arr[j] > pivot && j >= s){
           j--; 
        }  
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[s], arr[j]);
    return j;
}

void qs(int arr[],int s,int e){
    if(s<e){
        int p_index=partition(arr,s,e);
        qs(arr,s,p_index-1);
        qs(arr,p_index+1,e);
    }
}

int main(){
   int arr[5]={3,1,2,4,3};

   qs(arr,0,4);

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}