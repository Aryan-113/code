//search an element in linked list
#include<iostream>
#include<vector>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val,Node* next1){
        data=val;
        next=next1;
    }

    Node(int val){
        data=val;
        next=nullptr;
    }

};

bool sea(Node* head,int val){
    Node* tempp=head;
    while(tempp!=nullptr){
        if(tempp->data==val){
            return true;
        }
        tempp=tempp->next;
    }

    return false;
}

int main(){
   vector<int> nums={2,3,4,5};
    Node* head=new Node(nums[0]);
    Node* move=head;

    for(int i=1;i<nums.size();i++){
        Node*temp=new Node(nums[i]);
        move->next=temp;

        move=move->next;
    }
    cout<<sea(head,21);

   return 0;
}