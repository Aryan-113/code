#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long x=1534236469;
    long long ans=0;
    bool negative=false;
    if(x<0){
        x=abs(x);
        negative=true;
    }

    ans=x%10;
    x=x/10;
    while(x>0){
        int temp=x%10;
        x=x/10;
        ans=ans*10;
        ans+=temp;
        cout<<"the temp is:"<<temp<<endl;
        cout<<"the ans is:"<<ans<<endl;
    }
    if(negative==true){
        cout<<-(ans);
    }
    else{
        cout<<ans;
    }
    return 0;
}