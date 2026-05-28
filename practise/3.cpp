//factorial recursion

#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
    if(n==1||n==0){
        return 1;
    }

    int ans=n*factorial(n-1);
    return ans;
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans=fibonacci(n-1)+fibonacci(n-2);
}

void saydigit(string arr[],int n){
    if(n==0)
        return;
    
    int digit=n%10;
    n=n/10;
    
    saydigit(arr,n);
    cout<<arr[digit]<<endl;
}

int main(){

    cout<<factorial(4)<<endl;
    cout<<fibonacci(3)<<endl;

    string arr[10]={"zero","one","two","th","f","f","s","s","e","n"};

    saydigit(arr,912);
   return 0;
}