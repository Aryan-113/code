//deletion in double linked list
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
//delete head
Node* deleteHead(Node* head){
    if(head==nullptr) return head;
    if(head->next==nullptr) return nullptr;

    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;

    return head;
}
//delete tail
Node* deleteTail(Node* head){
    if(head==nullptr) return head;
    if(head->next==nullptr) return nullptr;

    Node*tail=head;
    while (tail->next!=nullptr)
    {
        tail=tail->next;
    }
    Node*prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;

    delete tail;
    return head;
    
}
//delete at any position k
Node* deleteK(Node* head,int k){
    if(head==nullptr) return head;
    if(k==1){
        return nullptr;
    }


}


int main(){
    vector<int> nums={2,3,4,1};
    Node* head=arrToDouLL(nums);

    head=deleteHead(head);
    //print(head);
    head=deleteTail(head);
    print(head);
   return 0;
}