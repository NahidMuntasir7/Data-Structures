#include<bits/stdc++.h>
using namespace std;

struct stackk{

    int sizee;
    int top;
    int *arr;

};

int isEmpty(struct stackk *ptr){

    if(ptr->top == -1){
        return 1;
    }
    else return 0;
}

int isFull(struct stackk *ptr){
     if(ptr->top == ptr->sizee-1){
        return 1;
    }
    else return 0;
}

void push(struct stackk *ptr , int val){
    if(isFull(ptr)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        ptr->top ++;
        ptr->arr[ptr->top]= val ;
    }
}

int pop(struct stackk *ptr){
    if(isEmpty(ptr)){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;

        return val;
    }
}

int main(){

    struct stackk *sp = (struct stackk *) malloc(sizeof(struct stackk));
    sp->sizee = 10;
    sp->top = -1;
    sp->arr == (int *) malloc( sp->sizee * sizeof(int));

    push(sp,1);
    push(sp,2);
    cout<<pop(sp)<<endl;
    cout<<pop(sp)<<endl;
}
