#include<iostream>
using namespace std;

int main(){
    
    // int limark,bob;
    
    // cin>>limark;
    // cin>>bob;
    
    // for(int i=1;i<10;i++){
    //     cout<<"weight of limar before:"<<limark<<endl;
    //     cout<<"weight of bob before:"<<bob<<endl;
    //     limark=limark*3;
    //     bob=bob*2;
        
    //     if(limark>bob){
    //         cout<<i;
    //         break;
    //     }
    // }
  
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int remove=0;
    
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]);
        remove++;
    }
    
    cout<<remove;
    
    
    return 0;
}