#include<stdio.h>
int main(){
    float P,T;
    printf("Enter Pressure of tank:");
    scanf("%f", &P);
    printf("Enter Temperature in degree celcius:");
    scanf("%f", &T);
    if(T<=200){
        if(P>100)
        printf(" SAFE!");
        if(P>=50 && P<=100)
        printf("WARNING!!!");
        if(P<50)
        printf(" CRITICAL!!!");
    }
    if(T>200){
        if(P>80)
        printf("DANGER!!!");
        else
        printf("Not DANGER.");
    }
return 0;
}