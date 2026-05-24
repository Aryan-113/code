#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>n1,vector<int>n2){
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n1.size()&&j<n2.size()){
        if(n1[i]>n2[j]){
            temp.push_back(n2[j]);
            j++;
        }
        else{
            temp.push_back(n1[i]);
            i++;
        }
    }

    while(i<n1.size()){
        temp.push_back(n1[i]);
        i++;
    }
    while(j<n2.size()){
        temp.push_back(n2[j]);
        j++;
    }

    return temp;
}

int main(){
    vector<int> a = {1, 3, 5, 7, 9};    // size 5
    vector<int> b = {2, 4, 6};          // size 3

    vector<int> result = merge(a, b);

    for (int x : result)
        cout << x << " "; 
    return 0;
}