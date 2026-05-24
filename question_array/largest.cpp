#include<iostream>
#include<vector>
using namespace std;

int optimum(int arr[],int n){
    int ans=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[ans])
        ans=i;
    }

    return arr[ans];
}

//second largest element

int sec_large(int arr[],int n){
    int largest=arr[0];
    int sec_l=INT8_MIN;

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            sec_l=largest;
            largest=arr[i];
        }

        else if(arr[i]<largest && arr[i]>sec_l){
            sec_l=arr[i];
        }
    }

    return sec_l;
}


//check if the array is sorted
void check_sorted(int arr[],int n){
    bool sorted =true;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            sorted=false;
            break;
        }
    }
    if(sorted) {
        cout << "The array is sorted";
    }
    else {
        cout << "The array is not sorted";
    }
}


//remove duplicate from sorted array
//using erase can cause the TC to be n^2
void remove(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]){
            arr.erase(arr.begin()+i);
            i--;
            n--;
        }
    }
}

//two pointer approach more optimum
int remove_dup(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
        }
    }

    return i+1;
}

int main(){

    int arr[5]={1,1,2,3,4};
    vector<int>arrr={1,1,2,3,4};
    int n=5;

    cout<<"the largest element in the array is:"<<optimum(arr,5)<<endl;
    cout<<"the 2nd largest element in the array is:"<<sec_large(arr,5)<<endl;
    check_sorted(arr,5);
    cout<<endl;
    remove(arrr);
    for(int val:arrr){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<remove_dup(arr,n);

    return 0;
}