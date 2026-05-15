#include<iostream>
#include<vector>
using namespace std;

void move(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v.push_back(v[i]);
            v.erase(v.begin()+i);
            i--;
            n--;
        }
    }
}

int main(){
    vector<int> v={0,0,1};
    //int m=v.size();

    move(v);

    //v.erase(v.begin()+2);

    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}