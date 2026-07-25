// claude

#include<iostream>
#include<vector>
using namespace std;
 
struct Node{
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

int main(){
   Node* head = new Node(10);
   Node* second = new Node(20);
   head->next=second;
   Node* third = new Node(30);
   head->next->next=third;

   cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl; 
   return 0;
}