//factors
#include<stdio.h>
void main(){
    int n,i=1,fact;
    printf("ENETR NUMBER=");
    scanf("%d",&n);
    while(i<=n){
        fact=n%i;
        if(fact==0){
            printf("%d ",i);
        }
        i++;
    }
}