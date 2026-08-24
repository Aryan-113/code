#include<iostream>
#include<vector>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;
    Node*back;

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

Node* ArrtoLL(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;

    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);

        mover->next=temp;
        mover=mover->next;
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
Node* doublell(vector<int>&nums){
    Node* head=new Node(nums[0]);

    Node*prev=head;
    for(int i=1;i<nums.size();i++){
        Node*temp=new Node(nums[i],nullptr,prev);

        prev->next=temp;
        prev=prev->next;

    }

    return head;
}

Node* deleteHead(Node* head){
    if(head==nullptr) return head;
    if(head->next==nullptr) return nullptr;
    Node*temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
Node* deleteTead(Node* head){
    if(head==nullptr) return head;
    if(head->next==nullptr) return nullptr;
    Node*tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;

    delete tail;

    return head;

}

int main(){
   vector<int> nums={5,15,6,1};
   Node* head=doublell(nums);
    head=deleteHead(head);
    print(head);
   return 0;
}