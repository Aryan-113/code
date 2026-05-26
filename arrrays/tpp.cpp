#include<iostream>
using namespace std;

int main(){
int n,k;
cin>>n>>k;

int count=0;
int arr[n];
for(int i=0;i<n;i++){
    cin>>i;
    if(i>=k){
        count++;
    }
}

cout<<count;

return 0;
}