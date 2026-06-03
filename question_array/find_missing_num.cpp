#include<iostream>
#include<vector>
using namespace std;
 
int main(){

    int arr[5]={1,2,0,4,5}; //3 is missing
    int n=5;

    //better aprroach
    int sum=(n*(n+1))/2;

    int array_sum=0;

    for(int i=0;i<n;i++){
        array_sum=array_sum+arr[i];
    }
    // cout<<sum<<endl;
    // cout<<array_sum<<endl;
    // cout<<"missing number is:"<<sum-array_sum;

    //optimal approach using xor gate
    vector<int> v={1,2,4,5};

    int xor1=0;
    for(int i=1;i<=5;i++){
        xor1=xor1^i;
    }

    int xor2=0;
    for(int i=0;i<v.size();i++){
        xor2=xor2^v[i];
    }

    int ans=xor2^xor1;

    cout<<"missing number is:"<<ans;

   return 0;
}