#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}*top=NULL;

void push(int x){
    struct Node*t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("Stack Overflow\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct Node*p;
    int x=-1;
    if(top==NULL)
    printf("Stack underflow\n");
    else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}
void display(){
    struct Node* p;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
// int peek(int pos){

// }

int main(){
    push(10);
    push(20);
    push(30);

    display();

    printf("%d ",pop());
    return 0;
}