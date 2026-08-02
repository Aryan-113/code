#include<iostream>
#include<vector>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }

    Node(int val,Node* next1){
        data=val;
        next=next1;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

Node* convertArrToLL(vector<int> &nums){
    Node* head = new Node(nums[0]);
    Node*mover=head;

    for(int i=1;i<nums.size();i++){
        Node* temp= new Node(nums[i]);

        mover->next=temp;
        mover=mover->next;
    }

    return head;
}

//inserting element at first
Node* insertFirst(Node* head,int val){
    Node* first=new Node(val);
    first->next=head;
    return first;
}
//inserting at last
Node* insertLast(Node* head,int val){
    if(head==nullptr){
        return new Node(val);
    }

    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* last=new Node(val);

    temp->next=last;
    last->next=nullptr;
    return head;
}
//insert at any position in linked list
Node* insert_k(Node* head,int k,int val){
    if(head==nullptr){
        if(k==1){
            return new Node(val);
        }
        else{
            return NULL;
        }
    }

    if(k==1){
        return new Node(val,head);
    }
    int cnt=0;
    Node*temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node* any=new Node(val);
            any->next=temp->next;
            temp->next=any;
            break;
        }
        temp=temp->next;
    }
    return head;

}
int main(){
   vector<int>nums={42,55,61,1};
    Node* head=convertArrToLL(nums);

    //head=insertFirst(head,99);
    //print(head);
    //head=insertLast(head,1010);
    //print(head);

    head=insert_k(head,10,500);
    print(head);

   return 0;
}