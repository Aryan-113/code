#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> v={1,1,2,3,3,4,4};
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    cout<<ans;

   return 0;
}