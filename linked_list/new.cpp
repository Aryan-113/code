#include<iostream>
#include<vector>
using namespace std;
 
class node{

    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};

void insertAtHead(node* &head,int d){

    //new node create
    node* temp=new node(d);
    temp -> next=head;
    head=temp;
}

int main(){
 
   return 0;
}