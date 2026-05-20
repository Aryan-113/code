#include<iostream>
using namespace std;

void pattern1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n-1;j++){
                cout<<" ";
            }
            for (int j = 1; j <= i; j++) {
            cout << "*";}
            cout<<endl;
        }
    }


void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }

        for(int j=1;j<=2*i+1;j++){
            cout<<"*";        }

            for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";        }

            for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        if(i<n){

            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=i;j<2*n;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main(){
    pattern10(9);
    return 0;
}