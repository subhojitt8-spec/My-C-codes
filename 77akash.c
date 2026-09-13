#include<stdio.h>
#include<math.h>
void main(){
    int num, n,s=0,o,count=0;
    printf("Enter a number to check if it is Armstrong");
    scanf("%d", &num);
    o=num;
    n=num;
    while(num>0){
        count+=1;
        num/=10;
    }
    while(n>0){
        s+= ((int)pow(n%10,count));
        n/=10;
    }
    if(o==s)
    printf("%d is Armstrong Number",o);
    else
    printf("%d is not an Armstrong number",o);
}
   