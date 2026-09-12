#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of two numbers respectively:");
    scanf("%d", &a);
    scanf("%d", &b);
a= a+b;
b= a-b;
a= a-b;
printf("Swapped values: %d \n %d", a, b);
return 0;
}