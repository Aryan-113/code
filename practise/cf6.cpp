#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // while(n>0){
    //     n=n%10;
        
    //     if(n!=7 || n!=4){
    //         cout<<"NO";
    //     }
    // }

    n=n/10;
    
    cout<<n;
    
    return 0;
}