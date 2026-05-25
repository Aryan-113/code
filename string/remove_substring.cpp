#include<iostream>
#include<vector>
#include<string>
using namespace std;

string compare(string str,string part){
    int r=part.length();
    string temp;
    int i=0;
    while(i<str.length()){
        
        if ((str.compare(i,r,part)) == 0){
            i+=r;
        }
        else{

            temp.push_back(str[i]);
            i++;
        }
    }
    return temp;
}

int main(){
    string s="axxxxyyyyb";
    string p="xy";
    // int r=p.length();
    // s.compare(p);
    // for(int i=0;i<s.length();i++){

    //     if ((s.compare(i,r,p)) == 0)
    //         cout << "Substring Matched\n";
    //     else
    //         cout << "Strings Not Matched\n";  
    // }

    //cout<<compare(s,p);

    string prev = "";
    
    while(prev != s){
        prev = s;
        s = compare(s, p);
    }
    
    cout << s;
   return 0;
}