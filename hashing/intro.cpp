#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,1,3};
    int n=5;

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int num;
    cin>>num;
    cout<<hash[num]<<endl;
    return 0;
}