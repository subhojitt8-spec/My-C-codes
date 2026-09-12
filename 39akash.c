#include<stdio.h>
int main(){
    int unit, bill;
    printf("Enter total units:");
    scanf("%d", &unit);
    if(unit<=100){
    bill= unit*2;
  
    } 
    if(unit<=200){

    bill= 200+ (unit-100)*3;
   
    }
    if(unit>200){
    bill= 500+(unit-200)*5;
    
    }
    printf("\n Total Bill: %d", bill);
    return 0;
}