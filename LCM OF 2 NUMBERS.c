#include<stdio.h>
int main(){
    int m,n, lcm=0;
    printf("Enter two numbes to find their LCM:");
    scanf("%d", &m);
     scanf("%d", &n);
    for(int i=((m>n)?m:n);i<= 999999;i++){
        if(i%m==0 && i%n==0){
        lcm=i;
        break;
        }
    }
    printf("The LCM of %d and %d is %d:", m,n, lcm);
    return 0;
}
            