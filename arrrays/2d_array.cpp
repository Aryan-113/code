#include<iostream>
#include<vector>
using namespace std;
 
int row(int arr[][3],int row){
    int ans=0;
    if(row==1){
        for(int j=0;j<3;j++){
            ans=ans+arr[0][j];
        }
        return ans;
    }
    if(row==2){
        for(int j=0;j<3;j++){
            ans=ans+arr[1][j];
        }
        return ans;
    }
    if(row==1){
        for(int j=0;j<3;j++){
            ans=ans+arr[2][j];
        }
        return ans;
    }
    else{
        return -1;
    }
}

void wave(int arr[][3]){
    for(int col=0;col<3;col++){
        if(col%2==0){
            for(int row=0;row<3;row++){
                cout<<arr[row][col];
            }
        }
        else{
            for(int row=2;row>=0;row--){
                cout<<arr[row][col];
            }
        }
        cout<<endl;
    }

}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    wave(arr);
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
*/
    //cout<<row(arr,-1);
   return 0;
}