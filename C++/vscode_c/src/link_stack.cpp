#include<iostream>
#include<vector>

using namespace std;
//用链表的方式创建栈
//定义节点的结构体
struct node
{
    int data;
    struct node* next;
};
//定义栈结构体
struct stack
{
    struct node* stacktop;
    int size;
};
struct stack* createstack()//初始化，创建一个栈，用指针表示
{
    struct stack* mystack = (struct stack*)malloc(sizeof(struct node));//指针变成结构体变量，要动态内存申请，mystack就是一个变量
    mystack->stacktop = NULL;
    mystack->size = 0;
    return mystack;
}
//创建节点
struct node* createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
//入栈函数
void push(struct stack* mystack, int data)
{
    struct node *newnode = createnode(data);
    //入栈就是链表的表头插入,让mystack的栈顶（stacktop）指向这个新进栈的节点，新进栈的节点要指向栈顶
    newnode->next = mystack->stacktop;
    mystack->stacktop = newnode;
    mystack->size++;
}
//获取栈顶元素
int top(struct stack* mystack)
{
    // return mystack->stacktop->data 如果栈为空，会报错
    if(mystack->size == 0){
        printf("null\n");
       
        return mystack->size;
    }
    return mystack->stacktop->data;
}
//出栈,就是删除栈顶元素
void pop(struct stack* mystack)
{
    if(mystack->size == 0){
        printf("mystack->size is null");
        system("pause");//防止闪屏
    }
    else{
        struct node *nextnode = mystack->stacktop->next;//先找到栈顶的下一个
        free(mystack->stacktop);//释放栈顶指针的内存
        mystack->stacktop = nextnode;//栈顶指向下一个
        mystack->size--;
    }
}
int empty(struct stack* mystack)
{
    if(mystack->size == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    struct stack *mystack = createstack();
    push(mystack, 1);
    push(mystack, 2);
    push(mystack, 3);
    while (empty(mystack))
    {
        printf("%d\t", top(mystack));
        pop(mystack);
    }
    printf("\n");
    system("pause");
    return 0;
}