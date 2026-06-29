//number of strings that appear as substrings in word

#include<iostream>
#include<vector>
using namespace std;
 
// int numofstring(vector<string>& pattern,int word){
//     vector<string> ans;

//     for(char i=0;i<pattern.size();i++){
//         for(char j=i;j<pattern.size();j++){

//         }
//     }
// }

int main(){
   vector<string> patterns={"a","abc","bc","d"};
   string word="abc";

   for(char i=0;i<word.size();i++){
        for(char j=i;j<word.size();j++){
            cout<<word[j];
        }

        cout<<endl;
    }

    cout<<word.size();
   return 0;
}