#include<iostream>
#include<vector>
using namespace std;

void move(vector<int> v){
    int n=v.size();
    int nonzero=0;
    for(int j=0;j<n;j++){
        if(v[j]!=0){
            swap(v[j],v[nonzero]);
            nonzero++;
        }
    }
}

int main(){
    int arr[7]={1,5,6,8,4,3,2};
    int n=7;

    return 0;
}