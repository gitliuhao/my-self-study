/*
    链表存储队列
*/
#include <stdio.h>
#include <stdlib.h>

typedef char Datatype;
typedef struct qnode
{
    Datatype data;
    struct qnode * next;
    /* data */
} QueueNode;

typedef struct 
{
    QueueNode * front;
    QueueNode * rear;
} LinkQueue;

LinkQueue Q;

// 构造空队列
void InitQueue(LinkQueue * Q){
    Q->front = (QueueNode *)malloc(sizeof(QueueNode));
    Q->rear = Q->front;
    Q->front->next = NULL;
}

// 判队空
int QueueEmpty(LinkQueue *Q){
    return Q->rear == Q->front;
}

// 入队列
void EnQueue(LinkQueue *Q, Datatype x){
    QueueNode * p = (QueueNode * )malloc(sizeof(QueueNode));
    p->data = x;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
}

// 取队头元素
Datatype GetFront(LinkQueue *Q){
    if(QueueEmpty(Q)){
        printf("Queue underflow");
        exit(0);
    }else{
        return Q->front->next->data;
    }
}

// 出队列
Datatype DeQueue(LinkQueue * Q){
    QueueNode *p;
    if(QueueEmpty(Q)){
        printf("Queue underflow");
        exit(0);
    }else{
        p = Q->front;
        Q->front = Q->front->next;
        free(p);
        return Q->front->data;
    }
}

int main(){
    InitQueue(&Q);
    EnQueue(&Q, 'x');
    EnQueue(&Q, 'y');
    EnQueue(&Q, 'z');
    printf("%c \n", GetFront(&Q));
    printf("%c \n", DeQueue(&Q));
    printf("%c \n", DeQueue(&Q));
    printf("%c \n", DeQueue(&Q));
    printf("%c \n", DeQueue(&Q));
    printf("%c \n", GetFront(&Q));

}