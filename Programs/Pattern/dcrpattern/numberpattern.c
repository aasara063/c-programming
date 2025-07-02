#include<stdio.h>
int main(){
    int n, i, j; 
    for(i = 0; i !=5; i++) {
        for(j = 1; j <= i+1; j++) {
            printf("%d ", i);
        }
            printf("\n");
    }
    return 0;
}