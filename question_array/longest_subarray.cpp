//brute force
//only positive numbers

#include<iostream>
#include<vector>
using namespace std;
 
int brute(vector<int> v,int k){

    //TC=O(N);
    //SC=O(1);
    int sum=0;
    int left=0;
    int maximum=-1;
    for(int i=0;i<v.size();i++){

        sum=sum+v[left];

        while(sum>k){
            sum-=v[left];
            left++;
        }

        int count=i-left+1;
        if(sum==k){
            maximum=max(count,maximum);
        }
    }

    return maximum;
}

int main(){
 
   vector<int> v={1,2,3,1,1,1,1,4,2,3};
   cout<<brute(v,6);



   return 0;
}