#include<iostream>
#include<vector>
using namespace std;
 
void print(int arr[][3],int m,int n){
    int top=0;
    int bottom=m-1;
    int right=n-1;
    int left=0;

    while(top<=bottom && left<=right){
        //top
        for(int col=left;col<=right;col++){
            cout<<arr[top][col]<<" ";
        }
        top+=1;
        //going along the bottom row
        for(int row=top;row<=bottom;row++){
            cout<<arr[row][right]<<" ";
        }
        right-=1;
        //going from right to left
        if(top<=bottom){
            for(int col=right;col>=left;col--){
                cout<<arr[bottom][col]<<" ";
            }
            bottom-=1;
        }
        if(left<=right){
            for(int row=bottom;row>=top;row--){
                cout<<arr[row][left]<<" ";
            }
            left=left+1;
        }
    }


  
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(arr,3,3);
   return 0;
}