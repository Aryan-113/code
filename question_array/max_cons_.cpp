#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    
    // vector<int>v={1,1,1,1};
    // int n=v.size();

    // int count=0;
    // vector<int> temp;

    // for(int i=0;i<n;i++){
    //     if(v[i]==1){
    //         count++;
    //     }
    //     if(v[i]==0||i==n-1){
    //         temp.push_back(count);
    //         count=0;
    //     }
        
    // }

    // int max_value = *max_element(temp.begin(), temp.end());
    //time complexity is O{n/2}
    //as the worst case is alternate1 and 0
    // cout << "Max Value: " << max_value << "\n";


    //TC=O(n)
    //SC=O(N) using extra vector
    //not very good aprroach


    //optimal approach by improving sc to O(1)

    vector<int>v={1,0,0,1,1,1,1,1,1,0,1,1,1};
    int a=v.size();

    int count=0;
    int max_value=-1;

    for(int i=0;i<a;i++){

        if(v[i]==1){
            count++;
            max_value = max(max_value, count);
        }
        else{
            count=0;
        }
    }

    cout<<max_value;
   return 0;
}