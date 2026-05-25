#include<iostream>
#include<vector>
using namespace std;

void rev(char ch[],int st,int e){

    while(st<e){
        swap(ch[st],ch[e]);
        st++;
        e--;
    }
}

int main(){
    char ch[]={'h','e','l','l','o',' ','f','g','g','y','\0'};
    int n=0;
    int j=0;
    while(ch[j]!='\0'){
        n++;
        j++;
    }
    int start=0;
    for (int i = 0; i <= n; i++) {
        // When space or end of string is found, reverse the word
        if (ch[i] == ' ' || ch[i] == '\0') {
            rev(ch,start,i-1);  // Reverse current word
            start = i + 1;          // Move start to next word
        }
    }
    cout<<ch;
   return 0;
}