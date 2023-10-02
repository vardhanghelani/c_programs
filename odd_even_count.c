#include<stdio.h>
void main(){
	int a,i,odd=0 ,even=0;
	for(i=1;i<=10;i++){
		scanf("%d",&a);
		if(a%2==0){
			even=even+1;
			
		}
		if(a%2 !=0){
			odd=odd+1;
		}
	}
	printf("%d %d",odd,even);
}

