#include<iostream>
#include<vector>
using namespace std;
 
int summ(vector<int> &nums,int k){
    int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[i];
                if(sum==k){
                    count++;
                }

                if(sum>k){
                    break;
                }
            }
        }

        return count;
}

int main(){
   vector<int> nums={1,2,1,2,1};
   int k=3;


   int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                cout<<"for the loop i is "<<i<<"and j is "<<j<< " sum is"": "<<sum<<endl;
                if(sum==k){
                    count++;
                }
                //cout<<sum<<endl;
                if(sum>k){
                    break;
                }
            }
        }

        return count;
   return 0;
}