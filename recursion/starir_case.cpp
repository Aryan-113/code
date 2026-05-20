#include<iostream>
using namespace std;

int stair(int n){

    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int ans=stair(n-1)+stair(n-2);
    
    return ans;

}

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

    cout<<stair(n);
    return 0;

}