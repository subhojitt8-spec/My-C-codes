#include<stdio.h>
int main(){
    int  N,i=1, count=0;
    printf("Enter the value till which you want all prime numbers:");
    scanf("%d", &N);
    for(i=2;i<=N;i++){ 
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                count++;
        }
            if(count==2)
            printf("\n %d", i);
        }
return 0;
       }
    