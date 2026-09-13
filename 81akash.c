#include<stdio.h>
int main(){
    int  N,i=1, count=0,p=0, m;
    printf("Enter nth number of prime number which you want:");
    scanf("%d", &m);
    for(i=2;i<= 9999999999;i++){ 
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                count++;
        }
            if(count==2)
            p+=1;
            if(p==m){
            printf("%d", i);
            break;
            }
    }
         return 0;
       }
    