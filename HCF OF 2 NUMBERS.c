#include<stdio.h>
int main(){
    int m,n, hcf=0;
    printf("Enter two numbes to find their HCF:");
    scanf("%d", &m);
     scanf("%d", &n);
    for(int i=1;i<=((m<n)?m:n);i++){
        if(m%i==0 && n%i==0)
        hcf=i;
    }
    printf("The HCF of %d and %d is %d:", m,n, hcf);
    return 0;
}
            