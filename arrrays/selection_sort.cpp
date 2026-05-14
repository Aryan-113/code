
//used when the array or vector is small

#include<iostream>
using namespace std;



int main(){
    int arr[7]={10,43,5,4,6,2,1};
    int n=7;
    for(int i=0;i<n-1;i++){
        int ans=i;
        int min=INT16_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j]; //my mistake was i didnt update the minimum index of the loop therefore it
                //it kept looping and since min=int_max(32000) therefore it always gave last element
                ans=j;
            }
        }
        cout<<"minimun for the "<<i<<" is: "<<arr[ans]<<endl;
        swap(arr[i],arr[ans]);
    }

    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}