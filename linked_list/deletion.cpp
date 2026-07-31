//deletion in linked list
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

Node* convertArrtoLL(vector<int> &arr){
    Node*head=new Node(arr[0]);
    Node* mover =head;

    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp; //or we can write mover->next
    }

    return head;
}

void print(Node* head){
    Node* tempp=head;
    while(tempp!=nullptr){
        cout<<tempp->data<<endl;
        tempp=tempp->next;
    }
}

//deleting the head of the LL and returning the new head
Node* deleteHead(Node* head){
    if(head==nullptr){
        return head;
    }

    Node*temp=head;
    head=head->next;
    delete temp;

    return head;
}

//deleting the tail of the linked list
Node* deleteTail(Node* head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }

    Node* tempp=head;
    while(tempp->next->next!=nullptr){
        tempp=tempp->next;
    }
    delete(tempp->next);
    tempp->next=nullptr;

    return head;
}

int main(){
    vector<int>nums={2,5,8,3};
    Node* head=convertArrtoLL(nums);

    // head=deleteHead(head);
    // print(head);

    head=deleteTail(head);
    print(head);
}