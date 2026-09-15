#include<stdio.h>
void main(){
    int num;
    printf("Enter an octal number:");
    scanf("%o", &num);
    printf("The octal to decimal conversion of %o is %d", num,num);
}