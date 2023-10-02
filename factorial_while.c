//factorial
#include<stdio.h>
void main(){
    int i=0,n,f=1;
    printf("ENETR NUMBER=");
    scanf("%d",&n);
    while(i<n){
        f=f*(n-i);
        i++;
    }
    printf("%d",f);
}