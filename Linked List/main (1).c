/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>



struct node{
    int data;
    struct node *next;
    
};

struct node *head=NULL;
struct node *tail=NULL;



int addNode(int data){
    
    if(head==NULL){
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;
        head=tail=new;
    }
    else{
        
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;
        tail->next=new;
        tail=new;
        
    }
    
    return 1;
}



int addNodeHead(int data){
    
    if(head==NULL){
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;
        
        head=tail=new;
        
        
    }
    else{
        
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data=data;
        new->next=NULL;
        
        new->next=head;
        
        head=new;
        
 }
    
    return 1;
    
}

int print(){
    
    printf("\nLinked List:\n");
    
    struct node *index=head;
    while(index!=NULL){
        printf("%d - ",index->data);
        index=index->next;
    }
    
    return 1;
}


int deleteNode(int data){
    
    struct node *prew=NULL;
    struct node *index=head;
    
    if(head==NULL){
        printf("Linked list is empty\n");
        return 1;
    }
    
    if(head->data==data){
        
        struct node *temp=head;
        head=head->next;
        free(temp);
        return 1;
    }
    
    
    while(index!=NULL && index->data!=data){
        
        prew=index;
        index=index->next;
        
    }
    
    if(index==NULL){
        printf("\nThere is no required element...\n");
        return 1;
    }
    
    prew->next=index->next;
    
    
    if(tail->data==data){
        
        tail=prew;
        
        
    }
    
    free(index);
    return 1;
    
}



int main()
{
   addNode(10);
   addNode(14);
   addNode(25);
   addNode(45);
   addNodeHead(15);
   addNode(30);
   addNodeHead(85);
   
   print();
   
   deleteNode(15);
   
   print();
   
   deleteNode(29);
   
   return 0;
}

