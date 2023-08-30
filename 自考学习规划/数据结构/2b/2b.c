#include <stdio.h>
#include <stdlib.h>
// #ifndef __B2T_H
#define __B2T_H

// #include "2b.h"
typedef char Datatype;

typedef struct node
{
    Datatype data;
    struct node * lchild, * rchild;
} BinTnode;

typedef BinTnode * BinTree;


BinTnode * CreateTree(char * str){
    BinTnode * St[100];
    BinTnode * p=NULL;
    int top, k, j = 0;
    top = -1;
    char ch=str[j];
    BinTnode *b = NULL;
    while (ch != '\0')
    {
        switch (ch)
        {
            case '(': 
                top++;St[top]=p;
                k=1;
                break;
            case ')': 
                top--;
                break;
            case ',': 
                k=2; 
                break;
            default:
                p=(BinTnode *)malloc(sizeof(BinTnode));
                p->data=ch;
                p->lchild=p->rchild=NULL;
            if(b==NULL){
                b=p;
            }else{
                switch (k)
                {
                    case 1:
                        St[top]->lchild=p;break;
                    case 2:
                        St[top]->rchild=p;break;
                }
            }
        
        }
        
        j++;ch=str[j];
    }
    return b;
}


BinTree CreateBinTree(BinTree bt){
    BinTnode * Q[100];
    BinTnode * s;
    int front, rear; char ch;
    ch=getchar(); bt=NULL;
    front=1; rear=0;
    while (ch!='#'){
        s=NULL;
        if(ch!='@'){
            s=(BinTnode *)malloc(sizeof(BinTnode));
            s->data=ch;
            s->lchild=s->rchild=NULL;
        }
        rear++;
        Q[rear]=s;
        if(rear==1){
            bt=s;
        }else{
            if(s!=NULL && Q[front]!=NULL){
                if(rear % 2 == 0){
                    Q[front]->lchild=s;
                }else{
                    Q[front]->rchild=s;
                }
            }
            if(rear % 2 !=0){
                front ++;
            }
        }
        ch=getchar();
    }
    return bt;
    
}
// int main(){
//     BinTnode * b;
//     b = CreateTree("(A(B(,D(E,F)),C))");
//     printf("av");
//     return 0;
// }