#include<iostream>
using namespace std;

int main(){
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;

    //we assume first element is already sorted
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--){

            //shift
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        //intially j=0;
        //for yhe first iteration here j becomes -1 since it is j--
        //and it doesnt satisfy the condition therefore it exits the loop
        //and j remains -1 which goes to arr[j+1]=temp;

        arr[j+1]=temp;
    }

    return 0;
}