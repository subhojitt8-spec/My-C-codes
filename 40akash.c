#include<stdio.h>
int main(){
char s[20];
int i=0, count=0,l=0,d=0,sc=0;
printf("Enter your password:");
scanf("%s", &s);
while( s[i]!='\0'){
    count+=1;
    if(s[i]>= 'A' && s[i]<='Z')
    l=1;
    else if(s[i]>= 'a' && s[i]<='z')
    l=1;
    else if(s[i]>= '0' && s[i]<='9')
    d=1;
    else 
    sc=1;
    i++; }
if(count<6)
printf("Weak PAssword.");
if( count>=6 && count <=10){
    if(d==0 &&sc==0 && l>=1)
    printf("Moderate password!");
    else if( l>=1 && d>=1 && sc==0)
    printf("Strong Password!"); }
if(count>10){
if(l>=1 && d>=1 && sc>=1)
printf("Very Strong Password!"); }
return 0;
}

