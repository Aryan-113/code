#include<iostream>
#include<vector>
using namespace std;
 
void setzero(vector<vector<int>>&nums){
    int rows=nums.size();
    int cols=nums[0].size();

    vector<int> rz;
    vector<int>cz;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(nums[i][j]==0);
            rz.push_back(i);
            cz.push_back(j);
        }
    }
    for(int i=0;i<rz.size();i++){
        for(int j=0;j<cols;j++){
            nums[rz[i]][j]=0;
        }
    }
    for(int i=0;i<cz.size();i++){
        for(int j=0;j<rows;j++){
            nums[j][cz[i]]=0;
        }
    }
}

void btter(vector<vector<int>> &nums){
    int rows=nums.size();
    int cols=nums[0].size();

    vector<int>rz(rows,0);
    vector<int>cz(cols,0);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(nums[i][j]==0){
                rz[i]=1;
                cz[j]=1;
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(rz[i]||cz[j]==1){
                nums[i][j]=0;
            }
        }
    }
}

vector<vector<int>> better_sol(vector<vector<int>>&nums){
    int n=nums.size();
    int m=nums[0].size();

    int col[m];
    int row[n];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
                nums[i][j]=0;
            }
        }
    }

    return nums;
}

int main(){
    vector<vector<int>> nums={{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    // int rows=nums.size();
    // int cols=nums[0].size();

    // int rz=-1;
    // int cz=-1;

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(nums[i][j]==0){
    //         rz=i;
    //         cz=j;
    //         break;
    //         }
    //     }
    //     if(rz!=-1){
    //         break;
    //     }
    // }

    // for(int i=0;i<cols;i++){
    //     nums[rz][i]=0;
    // }

    // for(int i=0;i<rows;i++){
    //     nums[i][cz]=0;
    // }

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

   return 0;
}