//return the number of elements after removing the duplicates

#include<iostream>
#include<vector>
#include<set>
using namespace std;
 
int optimize(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    return i+1;
}

int dup(int arr[],int n){
    set<int> temp;
    for(int i=0;i<n;i++){
        temp.insert(arr[i]);
    }

    int ans=temp.size();
    return ans;
}

int main(){
   int arr[5]={1,1,2,2,2};
   cout<<optimize(arr,5);
   return 0;
}