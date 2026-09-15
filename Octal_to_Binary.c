#include<stdio.h>
void oct_to_bin(int num){
    int flag =0;
    for(int i=31;i>=0;i--){
int bit= (num>>i)&1;
if(bit==1)
flag=1;
if(flag==1)
printf(" %d", bit);
    }
    if(flag==0)
    printf("0");
    
}
void main(){
    int num;
    printf("Enter an octal number:");
    scanf("%o", &num);
    printf("The binary equivalent is: \n");
       oct_to_bin(num);
}