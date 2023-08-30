// b.c

#include "a.h"
#include "stdio.h"

int b() {
    printf("这是b函数 \n");
    a();
    return 1;
}
