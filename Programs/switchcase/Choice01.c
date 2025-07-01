#include<stdio.h>
int main() {
    int num,choice;
    printf("1. Check +ve& -ve number \n 2. checkEven & Odd number \n"); 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter your choice:1 or 2: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            if(num > 0) {
                printf("%d is a positive number.\n", num);
            } else if(num < 0) {
                printf("%d is a negative number.\n", num);
            } else {
                printf("The number is zero.\n");
            }
            break;
        case 2:
            if(num % 2 == 0) {
                printf("%d is an even number.\n", num);
            } else {
                printf("%d is an odd number.\n", num);
            }
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }
    return 0;
}