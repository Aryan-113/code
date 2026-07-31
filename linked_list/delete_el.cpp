//delete any element in the linked list
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

int count(Node* head){
    int cnt=0;
    Node* tempp=head;
    while(tempp!=nullptr){
        cnt++;
        tempp=tempp->next;
    }
    return cnt;
}

Node* delete_element(Node* head,int el){
    if(head==nullptr) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;

    while(temp!=nullptr){
        if(temp->data==el){
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
   vector<int> nums={1,8,7,3};
   Node* head=convertArrtoLL(nums);

    head=delete_element(head,6);
    print(head);
   return 0;
}