#define MaxVertexNum 20
#include <stdio.h>
#include <stdlib.h>


typedef char VertextType;
typedef struct node
{
    int adjvex;
    struct node * next;
    
} EdgeNode;

typedef struct vnode
{
    VertextType vertex;
    EdgeNode * link;
} VNode, Adjlist[MaxVertexNum];
typedef Adjlist ALGraph;


void CreateGraph(ALGraph GL, int n, int e){
    int i,j,k; EdgeNode *p;
    for(i=0;i<n;i++){
        GL[i].vertex = getchar();
        GL[i].link = NULL;
    }
    for(k=0;k<e;k++){
        scanf("%d,%d", &i, &j);
        p=(EdgeNode *)malloc(sizeof(EdgeNode));
        p->adjvex=j;
        p->next=GL[i].link;
        GL[i].link=p;

        p=(EdgeNode *)malloc(sizeof(EdgeNode));
        p->adjvex=i;
        p->next=GL[j].link;
        GL[j].link=p;
    }
}

int main(){
    ALGraph GL;
    CreateGraph(GL, 5, 8);
}