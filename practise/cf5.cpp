//977a
#include<iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%2==0 && n%5==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
    }
    
    cout<<n;
    
    return 0;
}