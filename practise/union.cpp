//union of two sorted array

#include<iostream>
#include<vector>
#include<set>
using namespace std;
 
//brute force appraoch

//TC -> (n1+n2)log(n1+n2)
//SC -> O(n1+n2)
/*   vector<int> arr1={1,1,2,3,4,5};
   vector<int> arr2={2,3,4,4,5,6};
   set<int> temp;

   int i=0;
   int j=0;
   while(i<arr1.size() && j<arr2.size()){
    if(arr1[i]>=arr2[j]){
        temp.insert(arr2[j]);
        j++;
    }
    else{
        temp.insert(arr1[i]);
        i++;
    }
   }

   while(i<arr1.size()){
    temp.insert(arr1[i]);
    i++;
   }

   while(j<arr2.size()){
    temp.insert(arr2[j]);
    j++;
   }

   for(int val:temp){
    cout<<val<<" ";
   }*/
int main() {
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> temp;

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (temp.size() == 0 || temp.back() != arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
        } else {
            if (temp.size() == 0 || temp.back() != arr2[j]) {
                temp.push_back(arr2[j]);
            }
            j++; 
        }
    }

    while (i < arr1.size()) {
        if (temp.size() == 0 || temp.back() != arr1[i]) {
        temp.push_back(arr1[i]);
        }
        i++;
    }

    while (j < arr2.size()) {
        if (temp.size() == 0 || temp.back() != arr2[j]) {
        temp.push_back(arr2[j]);
        }
        j++;
    }

    for (int val : temp) {
        cout << val << " ";
    }
    
    return 0;
}
