//if array is sorted

#include<iostream>
#include<vector>
using namespace std;
 
bool check(int arr[],int n){
    int ch;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ch= false;
            break;
        }
        else{
            ch= true;
        }
    }
    return ch;
}

//rempve duplicate elements
vector<int> remove(vector<int>arr,int n){
    vector<int> result;

    int i=0;
    arr.push_back(arr[i]);
    for(int j=0;j<n;j++){
        if(arr[i] != arr[j]){
            arr.push_back(arr[j]);
            i++;
        }
    }

    return arr;
}

int main(){
   int arr[5]={6,4,4,4,5};
   int result=check(arr,5);
   if(result == 1){
    cout<<"sorted\n";
   }
   else{
    cout<<"not sorted\n";
   }

   vector<int>arrr={4,4,4,4,5};
   vector<int> resulttt = remove(arrr, 6);

    for(int val : resulttt){ 
        cout << val << " ";
    }
   return 0;
}