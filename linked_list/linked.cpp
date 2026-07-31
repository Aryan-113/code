#include<iostream>
#include<vector>
using namespace std;
 
class Box{
    public:
    int size;
};

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

//length of a linked list
int len(Node* head){
    int cnt=0;
    Node* tempp=head;
    while(tempp!=nullptr){
        tempp=tempp->next;
        cnt++;
    }

    return cnt;
}

int main(){
    // Node* head=new Node(10);
    // Node* second=new Node(20);
    // head->next=second;
    // Node* third=new Node(30);
    // second->next=third;

    // Node* temp=head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;
    // }

    vector<int> nums={2,3,4,5};
    Node* head=new Node(nums[0]);
    Node* move=head;

    for(int i=1;i<nums.size();i++){
        Node*temp=new Node(nums[i]);
        move->next=temp;

        move=move->next;
    }

    Node* tempp=head;
    while(tempp!=nullptr){
        cout<<tempp->data<<endl;
        tempp=tempp->next;
    }

    cout<<"length of ll is:"<<len(head);
   return 0;
}