// check if the array is sorted or not

#include<iostream>
#include<vector>
#include<list>
using namespace std;
 
void remove(vector<int> &arr){
    vector<int> temp;
    int i=0;
    arr.push_back(arr[i]);
    for(int j=0;j<arr.size();j++){
        if(arr[i] != arr[j]){
            arr.push_back(arr[j]);
            i++;
        }
    }

    return arr;
for(int i=0;i<arr.size();i++){
        if(ar)
    }
}

int main(){
   vector<int> arr={1,2,2,5,5};

   bool sorted=true;
   for(int i=0;i<arr.size()-1;i++){
    if(arr[i+1]<arr[i]){
        sorted=false;
        break;
    }
   }

   if(sorted){
    cout<<"the array is sorted";
   }
   else{
    cout<<"the array is not sorted";
   }
   return 0;
}