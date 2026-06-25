//best time to buy and sell stock

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
int profit(vector<int>&nums){
    int n=nums.size();

    int maxprofit=-1;

    int p;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            p=nums[j]-nums[i];
            if(p>0){
                maxprofit=max(maxprofit,p);
            }
        }
    }

    return maxprofit;
}

int opti(vector<int> &prices){
    int n=prices.size();

    int minprice=prices[0];

    int p;

    int maxi=0;
    for(int i=0;i<n;i++){
        if(prices[i]<minprice){
            minprice=prices[i];
        }

        int p=prices[i]-minprice;
        maxi=max(p,maxi);
    }

    return maxi;

}

int main(){
   vector<int> prices={7,1,5,3,6,4};

   cout<<opti(prices);
   return 0;
}