//power whithout power fn.
#include<stdio.h>
void main(){
    int x,y,n=1,i=1;
    printf("ENETR NUMBER=");
    scanf("%d",&x);
    printf("ENTER POWER=");
    scanf("%d",&y);
    while(i<=y){
        n=x*n;
        i++;
    }
    printf("%d",n);
}

