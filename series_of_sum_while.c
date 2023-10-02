#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("enter value=");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			sum=sum -i;
		}
		else if(i%2 !=0){
			sum=sum +i;
		}
		i++;
	}
	printf("%d",sum);
}
