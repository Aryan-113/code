#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
    string s="abcde";
    for(int i=0;i<s.size();i++){
            s.push_back(s.front());

            s.erase(0,i);
        }
    }
   return 0;
}