#define Stacksize 100
#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;
// typedef char Datatype;
typedef struct 
{
    Datatype data[Stacksize];
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
void Push(SeqStack *S, Datatype x) {
    if(StackFull(S))
        printf("Stack orverflow");
    else {
        S->top=S->top+1;
        S->data[S->top]=x;
    }
}


// 退栈
Datatype Pop(SeqStack *S){
    if(StackEmpty(S)){
        printf("stack underflow");
        exit(0);
    }else{
        return S->data[S->top--];
    }
}

// 取栈顶元素
Datatype GetTop(SeqStack *S){
    if(StackEmpty(S)){
        printf("stack empty");
        exit(0);
    }else{
        return S->data[S->top];
    }
}
int test(){
    SeqStack *s;
    s = (SeqStack *)malloc(sizeof(SeqStack));
    InitStack(s);
    Datatype x = 'a';
    Push(s, x);
    x='b';
    Push(s, x);
    x='c';
    Push(s, x);
    Datatype y = GetTop(s);
    printf("%c\n", y);
    Pop(s);
    printf("%c\n", GetTop(s));
    Pop(s);
    printf("%c\n", GetTop(s));
    return 0;
}

// 圆括号匹配的检验
int Expr(){
    SeqStack S;
    // SeqStack * s = (SeqStack *)malloc(sizeof(SeqStack));
    // S = *s; 
    Datatype ch, x;
    InitStack(&S);
    ch = getchar();
    while (ch != '\n')
    {
        printf("%c\n", ch);
        if(ch == '('){
            Push(&S, ch);
        }else{
            if(ch == ')'){
                if(StackEmpty(&S)){
                    return 0;
                }else{
                    x = Pop(&S);
                }
            
            }
        }
        ch=getchar();
    };
    if(StackEmpty(&S)){
        return 1;
    }else{
            return 0;
            }
    
}

// 字符串回文的判断
int symmetry(char str[]){
    SeqStack S;
    int j, k, i = 0;
    InitStack(&S);
    while (str[i] != '\0') i++;

    for (j=0; j<i/2; j++)
    {
        Push(&S, str[j]);
    }
    k=(i+1) /2;
    for (j=k; j<i; j++){
        if(str[j] != Pop(&S)){
            return 0;
        }
        
    }
    return 1;
    
}

// 数制转换
void conversion(int N, int d){
    SeqStack S;
    InitStack(&S);
    while (N){
        Push(&S, N % d);
        N = N / d;
    }

    while (!StackEmpty(&S))
    {
        int i = Pop(&S);
        printf("%d\n", i);
    }
}

int main(){
    int n = 249495;
    int w = 8;
   conversion(n, w);
};