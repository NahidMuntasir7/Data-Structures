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

void insertathead(node * &head , int data){
      node *n=new node(data);
      n->next=head;
      head=n;
}

void insertatany(node *& head , int data , int posi){
     if(posi == 1){
     insertathead(head,data);
     return;
     }

     node *n = new node(data);
     node *temp=head;

     int x=1;
     while(x<posi-1){      //stopping 1 node before
        temp=temp->next;
        x++;
     }
     n->next=temp->next;
     temp->next=n;

}

void deleteathead(node * &head){
      node* todelete=head;
      head=head->next;
}


void deleteany(node * &head , int val){
    if(head->data == val){
       deleteathead(head);
       return;
   }

    node *temp=head;

    while(temp->next->data!=val){   //stopping 1 node before
       temp=temp->next;
   }
       node * todelete=temp->next;
       temp->next=temp->next->next;

       delete todelete;
}



int main(){

      node *head = NULL;

      insert(head,5);
      insert(head,6);
      insert(head,7);

      traverse(head);
      insertatany(head,0,2);
      traverse(head);
      insertatany(head,2,4);
      traverse(head);
      insertatany(head,9,1);
      traverse(head);

      deleteany(head,6);
      traverse(head);
      deleteany(head,9);
      traverse(head);

}

