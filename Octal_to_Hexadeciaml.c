#include<stdio.h>
void main(){
    int num;
    printf("Enter an octal number:");
    scanf("%o", &num);
    printf("The octal to hexadeciaml conversion of %o is %x", num,num);
}