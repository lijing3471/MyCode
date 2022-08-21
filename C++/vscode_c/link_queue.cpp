#include<iostream>
#include<sdlib.h>

struct node
{
    int data;
    struct node* next;
}

struct queue
{
    struct node* frontnode;
    struct node* tailnode;
    int size;
} 
struct node* creatnode(int data)
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
struct queue* createqueue()
{
    struct queue *myqueue = (struct queue *)mallo(sizeof(struct queue));
    myqueue->frontnode = NULL;
    myqueue->tailnode = NULL;
    myqueue->size = 0;
    return myqueue;
}
//STl封装了很多容器
//队列诗表位插入，表头出
void push(struct queue* myqueue,int data)
{
    struct node *newnode = creatnode(data);
    
    if(myqueue->size ==0)
    {
        myqueue->frontnode = myqueue->tailnode = newnode;//队列为空的时候头尾同时指向新节点
    }
    else
    {
        myqueue->tailnode->next = newnode;//先队尾指向的节点指向新节点
        myqueue->tailnode = newnode;//再让队尾指向新节点
    }
    myqueue->size++;
    
}
void pop(struct queue* myqueue)
{
    if(myqueue->size==0)
    {
        printf("myqueue unll");
        system("pause");
    }
    else
    {
        struct node *nextnode = myqueue->frontnode->next;
        free(myqueue->frontnode);
        myqueue->frontnode->next = nextnode;
    }
}
int empty(struct queue* myqueue)
{
    if(myqueue->size==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int top(struct queue* myqueue)
{
    if(myqueue->size==0)
    {
        print("myqueue null")
        system("pause");
        
    }
}

int main()
{

}