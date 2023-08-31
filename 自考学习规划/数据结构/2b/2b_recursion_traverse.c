
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


int Level(BinTree bt, char v, int h1){
    static int h =0;
    if(bt==NULL){
        h=0;
    } else if(bt->data==v){
        h=h1;
    } else{
        Level(bt->lchild, v, h1+1);
        if (h==0){
            Level(bt->rchild, v, h1+1);
        }
    return h;
    }
}
int main(){
    BinTnode *  b;
    b = CreateTree("(A(B(,D(E,F)),C(G(I(K,L),J),H)))");
    // b = CreateTree("(A(B(D,E)),C)");
    // Preorder1(b);
    // Postorder(b);
    int a = Level(b, 'D', 0);
    printf("%d", a);
    // Inorder(b);
}