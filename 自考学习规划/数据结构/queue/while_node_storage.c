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

QueueNode * rear;

// 构造空队列
QueueNode * InitQueue(QueueNode * rear){
    rear = (QueueNode *)malloc(sizeof(QueueNode));
    rear->next = NULL;
    return rear;
}

// 入队列
QueueNode * EnQueue(QueueNode * rear, Datatype x){
    QueueNode * s = (QueueNode * )malloc(sizeof(QueueNode));
    QueueNode * r_top = rear->next;
    s->data = x; 
   
    // 如果是头节点
    if(r_top == NULL){
        s->next = rear;
    }else{
        
        s->next = r_top;
    }
    rear->next = s;
    rear = s;
    return rear;
}


// 出队列
Datatype DeQueue(QueueNode * rear){
    QueueNode * t, * p;
    t = rear->next;
    if(rear == t){
        printf("Queue underflow\n");
        exit(0);
    }
    p = t->next;
    Datatype x = p->data;
    rear->next = p;
    free(t);
    return x;
}

int main(){
    rear = InitQueue(rear);
    rear = EnQueue(rear, 'a');
    rear = EnQueue(rear, 'b');
    rear = EnQueue(rear, 'c');
    rear = EnQueue(rear, 'd');
    rear = EnQueue(rear, 'e');
    rear = EnQueue(rear, 'e');
    rear = EnQueue(rear, 'f');

    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));
    printf("%c\n", DeQueue(rear));

}