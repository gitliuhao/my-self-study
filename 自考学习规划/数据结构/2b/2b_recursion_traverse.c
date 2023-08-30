
#include "2b.c"
#include <stdio.h>

// 递归前序遍历法
void Preorder(BinTree bt){
    if(bt!=NULL){
        printf("%c\n", bt->data);
        Preorder(bt->lchild);
        Preorder(bt->rchild);
    }
}

//
void Inorder(BinTree bt){
    if(bt!=NULL){
        Inorder(bt->lchild);
        printf("%c", bt->data);
        Inorder(bt->rchild);
    }
}


void Postorder(BinTree bt){
    if(bt!=NULL){
        Postorder(bt->lchild);
        Postorder(bt->rchild);
        printf("%c", bt->data);
    }
}
int main(){
    BinTnode *  b;
    b = CreateTree("(A(B(,D(E,F)),C(G(I(K,L),J),H)))");
    // b = CreateTree("(A(B(D,E)),C)");
    // Preorder1(b);
    Postorder(b);
    // Inorder(b);
}