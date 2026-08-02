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

//deletion of any element
Node* deleteion(Node* head,int k){
    if(head==nullptr) return nullptr;

    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=nullptr;

    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;
}

int main(){
    vector<int>nums={42,55,61,1};
    Node* head=convertArrToLL(nums);
    //print(head);

    head=deleteion(head,3);
    print(head);
   return 0;
}