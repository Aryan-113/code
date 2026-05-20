#include<iostream>
using namespace std;
#include<vector>

void insertion_sort(vector<int>&v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0){
            if(v[j-1]>v[j]){
                int temp=v[j-1];
                v[j-1]=v[j];
                v[j]=temp;

                j--;
            }
            else{
                break;
            }
        }
    }
}


int main(){
    vector<int> v = {5, 3, 8, 1, 2};
    insertion_sort(v);
    for (int x : v) cout << x << " ";
    return 0;
}