#include<iostream>
#include<vector>
using namespace std;
 
bool isPalindrome(int x) {
        int temp=x;
        int n;
        int r;
        int s=1;
        while(x>0){
            r=x%10;
            x=x/10;
            n+=r*s;
            s=s*10;
        }

        if(n==temp){
            return true;
        }
        else{
            return false;
        }
}

int main(){
    int x=10;
    int temp=x;
        int n=0;
        int r;
        int s=1;
        while(x>0){
            r=x%10;
            x=x/10;
            n+=r*s;
            cout<<n<<endl;
            s=s*10;
        }

        if(n==temp){
            return true;
        }
        else{
            return false;
        }
   return 0;
}