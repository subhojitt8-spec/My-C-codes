#include<stdio.h>
int main(){
    int a,b,c;
    printf("\n Enter the values of two numbers respectively:");
    scanf("\n %d %d",&a, &b );
    c=b;
    b=a;
    a=c;
    printf("Swapped values are:%d %d" ,a ,b);
    return 0;
}