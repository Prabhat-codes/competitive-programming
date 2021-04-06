#include <stdio.h>

void update(int *a,int *b) {
    int c=(*a)+(*b);
    int d=((*a)-(*b))>0?(*a)-(*b):(*b)-(*a);
    *a=c;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
