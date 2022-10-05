#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(){}
Node(int data){
    this->data=data;
    next=NULL;
}
};

class Stack{
public:
Node *top;
Stack(){
    top==NULL;
}
bool isempty()
{
 if(top == NULL) 
 return true; 
 else
 return false;
}
void Push(int data){
    Node *temp;
    temp=new Node;
    temp->data=data;
    temp->next=top;
    top=temp;
}
void Pop(){
    if(isempty()){
        cout << "Stack Empty";
    }else{
        Node *temp=top;
        top=top->next;
        delete temp;
    }
}
int Peek(){
    if(isempty()){
     cout << "Stack Empty";
    }else{
    cout << "\n Top  Value: "<< top->data;
}
}

void print(){
}
void displayStack()
{
 if (isempty())
 cout<<"Stack is Empty";
 else
 {
  Node *temp=top;
  while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
  }
  cout<<"\n";
 }
 }
};


int main(){
Stack s1;
//s1.Push(23);
//s1.Push(2111);
//s1.Push(23);
//s1.Push(231121);
s1.Push(12);
s1.Peek();
cout << endl;
s1.displayStack();
}