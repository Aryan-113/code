//kadanes algorithm

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> nums={1,2,3,4,5};

    int n=nums.size();


    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<nums[j];
        }

        cout<<endl;
    }
   return 0;
}