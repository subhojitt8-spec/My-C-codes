#include<stdio.h>
void main(){
    int num,o,rev=0;
    printf("Enter a number");
    scanf("%d", &num);
    o=num;
    while(num>0){
        rev= rev*10+ num%10;
        num/=10;
    }
    if(o==rev){
        printf("%d is Palindrome!", o);
    }
    else{
        printf("%d is not Palindrome!", o);


    }
}