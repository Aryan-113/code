//finding square root of a number using binary search

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
int sq(int n){
    int s=0;
    int e=n;//assuming that the number would have sqrt less then the sq of 28;
    while(s<=e){
        int mid=s+(e-s)/2;

        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return e;
}

//nth root

int nsqrt(int m,int n){
    int s=0;
    int e=m;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(pow(mid,n)==m){
            return mid;
        }
        else if(pow(mid,n)>m){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1;
}


int main(){
    //cout<<sq(112)<<endl;
    cout<<nsqrt(512,8)<<endl;
    //cout<<pow(5,3);
   return 0;
}