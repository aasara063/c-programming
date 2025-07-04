#include<stdio.h>
int main(){
    printf("pattern of 1's Nepal flag\n");
    int n, i, j; 
     for(i = 0; i !=3; i++) {
        for(j = 1; j <= i+1; j++) {
            printf("1");
        }
            printf("\n");
    } for(i = 0; i !=6; i++) {
        for(j = 1; j <= i+1; j++) {
            printf( "1");
        }
            printf("\n");
    }
    return 0;
}