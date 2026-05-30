#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int num1[5]={1,1,2,3,4};
    int n1=5;
    int num2[5]={2,3,4,5,6};
    int n2=5;

    vector<int> temp;

    int i=0;
    int j=0;

    while(i<n1&&j<n2){
        if(num1[i] <= num2[j]){
            if(temp.size()==0 || temp.back()!=num1[i]){
                temp.push_back(num1[i]);
            }
            i++;
        }

        if(num1[i] >= num2[j]){
            if(temp.size()==0 || temp.back()!=num2[j]){
                temp.push_back(num2[j]);
            }
            j++;
        }

    }

    while(i<n1){
        if(temp.size()==0 || temp.back()!=num1[i]){
            temp.push_back(num1[i]);
        }
        i++;
    }

    while(j<n2){
        if(temp.size()==0 || temp.back()!=num2[j]){
            temp.push_back(num1[j]);
        }
        j++;
    }

    for(int val:temp){
        cout<<val<<" ";
    }
   return 0;
}