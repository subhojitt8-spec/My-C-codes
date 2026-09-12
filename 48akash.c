#include<stdio.h>
int main(){
    int amt, p1,p2,p3,p4,p5;
    printf("Enter the amount customer wants to withdraw. Amount must be multiple of 10!:");
    scanf("%d", &amt);
    if(amt %10==0){
        if(amt<500){
        p1= amt/100;
        p2= (amt-100*p1)/10;
       printf("\n No. of Rs. 100 notes= %d", p1);
       printf("\n No. of Rs. 10 notes= %d", p2);
        }
        if(amt>=500){ //760
            p1= amt/500; // 1
            p2= (amt-p1*500);// 260
            p3= p2/100;// 2
            p4= p2-p3*100;// 60
            p5= p4/10; //6
            printf("\n No. of Rs. 500 notes= %d", p1);
       printf("\n No. of Rs. 100 notes= %d", p3);
       printf("\n No. of Rs. 10 notes= %d", p5);
        } }
      else
      printf("Amount is not multiple of 10!");
       return 0;  }


