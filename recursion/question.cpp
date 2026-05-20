#include<iostream>
using namespace std;

void print_name(int i,int n){
    if(i>n)
        return;

    else{
        cout<<"yo bit\n";
    }
    print_name(i+1,n);
    
}

void print_no(int c,int n){
    if(c>n){
        return;
    }
    print_no(c+1,n);
    cout<<c<<endl;
}

void backtrack(int i,int n){
    if(i>n)
    return;
    backtrack(i+1,n);
    cout<<i<<" ";
}

void sum_parameter(int i,int n,int ans=0){

    if(i>n){
        cout<<ans;
        return;
    }
    sum_parameter(i+1,n,ans+i);
}

int sum(int n){
    if(n==0){
        return 0;
    }

    int sumition=n+sum(n-1);
    return sumition;
}

void reverse(int arr[],int s,int e){

    if(s>=e)
        return;

    swap(arr[s],arr[e]);
    reverse(arr,s+1,e-1);
}


int main(){
    // int n;
    // cout<<"enter n\n";
    // cin>>n;
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(arr,0,n-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}