#define Stacksize 100
#include <stdio.h>
#include <stdlib.h>
#include "2b.c"

// typedef BinTree Datatype;
// typedef char Datatype;
typedef struct 
{
    BinTree data[Stacksize];
    int top;
    /* data */
} SeqStack;

SeqStack S;

// 置空栈
void InitStack(SeqStack *S){
    S->top = -1;
}

// 判找空
int StackEmpty(SeqStack *S){
    return S->top == -1;
}

// 判找栈
int StackFull(SeqStack *S){
    return S->top == Stacksize -1;
}

// 进栈
void Push(SeqStack *S, BinTree x) {
    if(StackFull(S))
        printf("Stack orverflow");
    else {
        S->top=S->top+1;
        S->data[S->top]=x;
    }
}


// 退栈
BinTree Pop(SeqStack *S){
    if(StackEmpty(S)){
        printf("stack underflow");
        exit(0);
    }else{
        return S->data[S->top--];
    }
}

// 取栈顶元素
BinTree GetTop(SeqStack *S){
    if(StackEmpty(S)){
        printf("stack empty");
        exit(0);
    }else{
        return S->data[S->top];
    }
}

// int main(){
//     int n = 249495;
//     int w = 8;
//    conversion(n, w);
// };