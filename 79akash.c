#include<stdio.h>
int main(){
    int num,i=1, count=0;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i=1;i<=num;i++){ 

       if(num%i==0){
        count+=1;
       }
    }
       if(count==2)
       printf("%d is prime number!\n", num);
       if(count == 1 || count == 0)
       printf("%d is neither prime nor composite\n",num);
       else
       printf("%d is composite number!\n", num);       
       return 0;                               
    }