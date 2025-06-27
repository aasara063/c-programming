#include<stdio.h>
int main()
{
	char Name[40];
	int age;
    char Address[100];
    printf ("Enter your Name, Age, Address  : \n");
    scanf ("%s %d %s",&Name,&age,&Address);
    printf("NAME: %s ",Name);
    
    printf("\n Age: %d ",age);
    printf("\n Address:%s", Address);
   
    return 0;
}
