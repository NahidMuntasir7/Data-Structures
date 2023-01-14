#include<bits/stdc++.h>
using namespace std;

class node{
  public:
     int data;
     node *next;

   node(int val){
     data=val;
     next=NULL;
   }
};

void insert(node * &head , int data){
      node *n = new node(data);

      if(head==NULL){
        head=n;
        return ;
      }
     else{
        node *temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=n;
     }
}

void traverse(node *head){
     node *temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
      cout<<endl;

}

void reverse(node * &head){

    node *prev=NULL;
    node *curr=head;
    node *next;

    while(curr != NULL){
        next=curr->next;   //order matters
        curr->next=prev;

        prev=curr;
        curr=next;
    }
        head=prev;
}

void search(node *head , int val){

       node *temp=head;
       int found=0;

       while(temp != NULL){
         if(temp->data==val){
             found=1;
         }
         temp=temp->next;
       }

       if(found) cout<<"Found !"<<endl;
       else cout<<"Not Found !"<<endl;

}

int main(){

      node *head = NULL;

      insert(head,5);
      insert(head,6);
      insert(head,7);

      reverse(head);
      traverse(head);

      search(head,6);

}

