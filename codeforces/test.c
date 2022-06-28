#include <stdio.h>
int main(){
    short int s=2;
    switch(s-- - --s){
        case 1L:
        printf("F");
        break;
        case 2L:
        printf("S");
        break;
        default:
        printf("D");
        break;
    }
}
