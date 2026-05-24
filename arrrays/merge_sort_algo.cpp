//merge_sort_algo.cpp

#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>&v,int start,int mid,int end){

    //first array 0 to mid
    //secound array mid +1 to last
    vector<int> temp;
    int low=start;
    int high=mid+1;

    while(low<=mid && high<=end){
        if(v[low]<=v[high]){
            temp.push_back(v[low]);
            low++;
        }
        else{
            temp.push_back(v[high]);
            high++;
        }
    }

    while(low<=mid){
        temp.push_back(v[low]);
        low++;
    }
    while(high<=end){
        temp.push_back(v[high]);
        high++;
    }
    for(int i = start; i <= end; i++){
        v[i] = temp[i - start];
    }
}


void merge_sort(vector<int> &v,int start,int end){
    if(start>=end){
        return;    
    }
    int mid=start+(end-start)/2;
    merge_sort(v,start,mid);
    merge_sort(v,mid+1,end);
    merge(v,start,mid,end);
}

int main(){
    vector<int> v = {5, 2, 8, 1, 9, 3};

    merge_sort(v, 0, v.size() - 1);

    for(int x : v){
        cout << x << " ";
    }
    return 0;
}