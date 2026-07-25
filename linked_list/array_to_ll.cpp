//convert array to a linked list
#include<iostream>
#include<vector>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

//we dont get the full array we only get the first element of array
//then we can traverse in the array
Node* convertArrtoLL(vector<int> &arr){
    Node*head=new Node(arr[0]);
    Node* mover =head;

    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

int main(){
 
   return 0;
}