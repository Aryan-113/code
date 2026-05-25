#include<iostream>
#include<vector>
using namespace std;

void check_str(char ch[],int n){
   int s=0;
   int e=n-1;
   bool pal=true;
   while(s<e){
      if(ch[s]==ch[e]){
         pal=true;
      }
      else{
         pal=false;
         break;
      }
      s++;
      e--;
   }

   if(pal==true){
      cout<<"it is palindrome\n";
   }
   else{
      cout<<"it is not a palindrome\n";
   }
}

void pal_num(int n){
   if(n<0)
      return;
   int og=n;
   int reversed_num=0;

   while(n>0){
      int digit=n%10;
      reversed_num=reversed_num*10+digit;
      n=n/10;
   }
   if(og==reversed_num)
      cout<<"it is palindroem\n";
   else{
      cout<<"it is not\n";
   }
}


void check_string(string s,int n){

}


int main(){
   int num=12321121;
   pal_num(num);
   char name[20]={'a','b','c','b','a'};
   check_str(name,5);
   return 0;
}