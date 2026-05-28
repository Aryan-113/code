//selection sort
//bubble sort

#include<iostream>
#include<vector>
using namespace std;
 
//selection sort
void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

//bubble sort
vector<int> bubble(vector<int> v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    return v;
}

//insertion sort

int main(){
    int arr[5]={5,10,3,2,4};
    //selection(arr,5);

    // for(int val:arr){
    //     cout<<val<<" ";
    // }

    vector<int> v={5,10,3,2,4};

    vector<int> temp=bubble(v);
    for(int val:temp){
        cout<<val<<" ";
    }
 
   return 0;
}