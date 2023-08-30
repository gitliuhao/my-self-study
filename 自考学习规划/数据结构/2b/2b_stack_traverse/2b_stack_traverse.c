
#include "2b_stack/sequential_storage.c"
// #include "2b_stack/2b.c"
#include <stdio.h>

void Inorder1(BinTree bt){
    SeqStack S; BinTnode * p;
    InitStack(&S);
    Push(&S, bt);
    while (!StackEmpty(&S))
    {
        while (GetTop(&S))
        {
            Push(&S, GetTop(&S)->lchild);
        }
        p=Pop(&S);
        if(!StackEmpty(&S)){
            p=Pop(&S);
            printf("%c", p->data);
            
            Push(&S, p->rchild);
        }
    }
    
}



void Preorder1(BinTree bt){
    SeqStack S; BinTnode * p;
    InitStack(&S);
    Push(&S, bt);
    while (!StackEmpty(&S))
    {
        if(!StackEmpty(&S)){
            p=Pop(&S);
            if(p!=NULL){
                printf("%c", p->data);
                Push(&S, p->rchild);
                Push(&S, p->lchild);
            }

        }
    }
    
}


void Postorder1(BinTree bt){
    SeqStack S; BinTnode * p;
    InitStack(&S);
    Push(&S, bt);
    while (!StackEmpty(&S))
    {
        while (GetTop(&S))
        {
            Push(&S, GetTop(&S)->lchild);
        }
        p=Pop(&S);
        if(!StackEmpty(&S)){
            if(GetTop(&S)->rchild){
                Push(&S, GetTop(&S)->rchild);
            }else{
                p=Pop(&S);
                printf("%c", p->data);
                Push(&S, p->rchild);
            }
        }
    }
    
}

int main(){
    BinTnode *  b;
    b = CreateTree("(A(B(,D(E,F)),C))");
    // b = CreateTree("(A(B(D,E)),C)");
    // Preorder1(b);
    // Inorder1(b);
    Postorder1(b);
}