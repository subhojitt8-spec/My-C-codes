#include<stdio.h>
void dectobin(int num){
        int flag=0;
        for(int i=31;i>=0;i--){
                int bit= (num>>i)& 1;
              if(bit==1) 
              flag=1;
              if(flag==1) 
              printf("%d", bit);
        }
              if(flag==0)
              printf("0");
                
        
        printf("\n");
}
int main(){
   int num, temp;
   printf("Enter a decimal number:") ;
   scanf("%d", &num);
   printf("The decimal to binary conversion of %d is :", num);
   dectobin(num);
   
return 0;

}

