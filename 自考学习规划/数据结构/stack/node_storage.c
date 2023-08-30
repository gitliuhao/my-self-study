#include <stdio.h>
#include <stdlib.h>

typedef char Datatype;
typedef struct stacknode
{
    Datatype data;
    struct stacknode * next;
} Stacknode;

typedef Stacknode * LinkStack;
// LinkStack top;

// 判断空
int StackEmpty(LinkStack top){
    return top == NULL;
}

// 进栈
LinkStack Push(LinkStack top, Datatype x){
    Stacknode * p;
    p = (Stacknode *)malloc(sizeof(Stacknode));
    p->data=x;
    p->next=top;
    top=p;
    return top;
}


// 退栈
LinkStack Pop(LinkStack top, Datatype *x){
    Stacknode * p = top;
    if(StackEmpty(top)){
        printf("stack empty\n");
        exit(0);
    }else{
        *x = top->data;
        top = p->next;
        free(p);
        return top;
    }
}

// 取栈顶元素
Datatype GetTop(LinkStack top){
    if(StackEmpty(top)){
        printf("stack empty\n");
        exit(0);
    }else{
        return top->data;
    }
}

// 测试用例
int test1(){
        Datatype x = 'a';
    LinkStack top;
    
    top = Push(top, x);
    printf("%c\n", GetTop(top));

    x = 'b';
    top = Push(top, x);
    printf("%c\n", GetTop(top));

    x = 'c';
    top = Push(top, x);
    printf("%c\n", GetTop(top));

    Datatype a = '1';
    Datatype * y = &a;
    top = Pop(top, &x);
    printf("%c\n", GetTop(top));
    return 0;
}


int main(){
    test1();
}