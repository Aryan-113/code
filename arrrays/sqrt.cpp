//find the square root of a number usign binary seach

#include<iostream>
#include<vector>
using namespace std;

int root(int k){
    int ans=-1;

    int s=0;
    int e=k/2;
    int mid=(s+e)/2;

    while(s<=e){
        int square=mid*mid;
        if(square==k){
            return mid;
        }
        else if(square<k){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int k=91;
    cout<<root(k);
    return 0;
}