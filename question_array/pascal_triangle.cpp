#include<iostream>
#include<vector>
using namespace std;
 
//giving a particular element in the pascals triangle
int prt(int row,int col){
    //the element is given by using the PNC formula
    //nCr where nis row-1 and r is col-1

    int ans=1;
    for(int i=0;i<col-1;i++){
        ans=ans*(row-1-i)/(i+1);
    }

    return ans;
}

//print any row

int main(){
    cout<<prt(5,3);
   return 0;
}