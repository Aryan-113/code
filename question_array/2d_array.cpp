#include<iostream>
#include<vector>
using namespace std;
 
vector<int> waveprint(vector<vector<int>> nums,int nrows,int mcols){
    vector<int> ans;

    for(int col=0;col<mcols;col++){
        if(col&1){
            //odd index --> bottom to top
            for(int rows=nrows-1;rows>=0;rows--){
                ans.push_back(nums[rows][col]);
            }
        }

        else{
            //even index --> top to bottom

            for(int rows=0;rows<nrows;rows++){
                ans.push_back(nums[rows][col]);
            }
        }
    }

    return ans;
}

int main(){
    //2 4 8 9 4 1 5 7 8
//    int arr[3][3];

   vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};

   vector<int> ans=waveprint(nums,3,3);

   for(int val:ans){
    cout<<val<<" ";
   }
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
//    }

   //row wise sum

//    for(int i=0;i<3;i++){
//     int sum=0;
//     for(int j=0;j<3;j++){
//         sum+=arr[i][j];
//     }
//     cout<<"the sum of row "<<i<<" is:"<<sum<<endl;
//    }

   //column wise sum

//    for(int i=0;i<3;i++){
//     int sum=0;
//     for(int j=0;j<3;j++){
//         sum+=arr[j][i];
//     }
//     cout<<"the sum of column "<<i<<" is:"<<sum<<endl;
//    }
   return 0;
}