/*************************************************************************
	> File Name: 1.unionset.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2019年01月20日 星期日 16时48分14秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct unionset{
    int *color;
    int size;
}unionset;

unionset *init(int n) {
    unionset *u = (unionset *)calloc(sizeof(unionset), 1);
    u->color = (int *)malloc(sizeof(int) *n);
    for (int i = 0; i < n; i++) {
        u->color[i] = i;
    }
    u->size = n;
    return u;
}
int find(unionset *u, int x) {
    return u->color[x];
}

int merge(unionset *u, int a, int b) {
    int color_a = find(u,a), color_b = find(u,b);
    if (color_a == color_b) return 0;
    for (int i = 0; i < u->size; i++) {
        if (u->color[i] == color_a) u->color[i] = color_b;
    }
    return 1;
}

void output(unionset *u) {
    for (int i = 0; i < u->size; i++) {
        printf("(%d, %d)\t", i, u->color[i]);
        if (i + 1 < u->size && i + 1 % 5 == 0) printf("\n");
    }
    printf("\n\n");
    return ;
}




void clear(unionset *u) {
    if (u == NULL) return ;
    free(u->color);
    free(u);
    return ;
}

int main() {
    srand(time(0));
    int op, a, b;
    #define MAX_OP 10
    #define MAX_N 10
    unionset *u = init(MAX_N);
    for (int i = 0; i < MAX_OP; i++) {
        op = rand() % 4;
        a = rand() % MAX_N;
        b = rand() % MAX_N;
        switch(op) {
            case 0: {
                printf("find %d <-> %d = %d", a, b,find(u,b));
            }break;
            default: {
                printf("union %d <-> %d = %d",a,b,merge(u, a,b));
            }break;
        }
        output(u);
    }

    return 0;
}










