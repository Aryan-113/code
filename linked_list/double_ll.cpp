#include<iostream>
#include<vector>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int val){
        data=val;
        next=nullptr;
        back=nullptr;
    }

    Node(int val,Node* next1,Node* back1){
        data=val;
        next=next1;
        back=back1;
    }
};
//converting array to double linked list
Node* arrToDouLL(vector<int> &nums){
    Node* head=new Node(nums[0]);
    Node* prev=head;

    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i],nullptr,prev);

        prev->next=temp;
        prev=prev->next;
    }

    return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main(){
   vector<int> nums={1,3,2,4};
   Node* head=arrToDouLL(nums);

   print(head);
   return 0;
}