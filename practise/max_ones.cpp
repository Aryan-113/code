//maximum consecutive ones

#include<iostream>
#include<vector>
using namespace std;
 
int cons(vector<int> arr){
    int ans=0;
    int maximum=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            ans++;
            maximum=max(ans,maximum);
        }
        else{
            ans=0;
        }
    }
    return maximum;
}

int main(){
    vector<int> arr={1,1,1,1,0,0,1,1,0,1,1,1,0,1};
    cout<<cons(arr);

   return 0;
}