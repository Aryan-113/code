#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={10,15,20,25,30,40};
    int n=vec.size();

    for(int i=0;i<n/2;i++){//n/2=2
        swap(vec[i],vec[n-i-1]);
    }

    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}