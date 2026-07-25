#include<iostream>
#include<vector>
using namespace std;
 
void changeb(int &b){
    b=20;
}

int main(){
    int a=10;
    int* ptr=&a;

    //cout<<*(&a)<<endl;
    //cout<<*(ptr)<<endl;
    //cout<<&ptr<<endl;

    //pointer to pointer
    int** parptr=&ptr;
    //cout<<parptr<<endl;

    //pass by reference
    int b=31;
    changeb(b);

    cout<<"inside main function:"<<b<<endl;
   return 0;
}