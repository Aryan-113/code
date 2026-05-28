//339a xenia maths
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
        for(int i=0;i<n-1;i++){

        bool swapped =false;
        for(int j=0;j<n-i-1;j++){

            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                swapped=true;
            }
        }
        // if there are no swaps in a round then the array is already sorted therefore no need to go further
        if(swapped==false){
            break;
        }
    }

    cout<<s;

    return 0;
}