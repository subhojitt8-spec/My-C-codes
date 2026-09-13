#include<stdio.h>
int main(){
    int num, count=0,rev=0;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num>0){
        rev= rev*10+ num%10;
        num/=10;

    }
        printf(" Reverse of the number is : %d", rev);
        return 0;
       }