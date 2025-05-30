#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main(){

struct node* head;
struct node* second;
struct node* third;

head = (struct node*)(malloc(sizeof(struct node)));
second = (struct node*)(malloc(sizeof(struct node)));
third = (struct node*)(malloc(sizeof(struct node)));

//link 1st and 2nd
head->data=7;
head->next=second;

//link 2nd and 3rd
second->data=11;
second->next=third;

//terminate the list
third->data=66;
third->next=NULL;

traversal(head);

    return 0;
}