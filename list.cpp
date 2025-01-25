#include<iostream>
using namespace std;
class Node{
    public:
int val;
Node*next;
Node(int val){
    this->val=val;
    this->next=NULL;



}};
void disp(Node*head){
    Node*t=head;
   while(t!=NULL){
        cout<<t->val<<endl;
    t=t->next;
    }}

int main(){
    Node *a=new Node(10);
    Node *b=new Node(11);
    Node *c=new Node(5);
    Node *d=new Node(12);

    
    
    a->next=b;
    b->next=c;
    c->next=d;
    disp(a);


}