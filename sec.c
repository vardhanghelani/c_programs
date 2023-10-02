// seconds into minutes
#include<stdio.h>
void main(){
	int sec,h,m,s;
	printf("ENTER VALUE OF SEC:");
	scanf("%d",&sec);
	h=(sec/3600);
	 m = (sec - h*3600)/60;
	 s = sec - h*3600 - m*60;
	 printf("%d seconds = %d h : %d m : %d s", sec, h, s, m);
}
