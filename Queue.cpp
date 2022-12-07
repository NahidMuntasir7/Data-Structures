#include<bits/stdc++.h>
using namespace std;

class queuee{
int *arr;
int frontt;
int rear;
int sizee;

public :
    queuee(){
        sizee=100001;
        arr= new int[sizee];
        frontt=0;
        rear=0;
    }

    bool empty(){
        if(frontt==rear){
            return true;
        }
        else return false;
    }

    void push(int data){
     if(rear==sizee){
        cout<<"Queue is full"<<endl;
     }
     else{
        arr[rear]=data;
        rear++;
      }
    }

    void pop(){
     if(frontt==rear){
        cout<<"Queue is Empty"<<endl;
     }
     else{
        arr[frontt]=-1;
        frontt++;

        if(frontt==rear){
            frontt=0;
            rear=0;
        }
      }
    }

    int front(){
     if(frontt==rear){
        return -1;
     }
     else{
      return arr[frontt];
     }

    }

};


int main(){

   queuee bap;
   bap.push(1);
   bap.push(2);
   bap.push(3);

   bap.pop();
   bap.pop();

   cout<<bap.front()<<endl;

   cout<<bap.empty()<<endl;

}






