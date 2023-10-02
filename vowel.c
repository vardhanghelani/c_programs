#include<stdio.h>
void main(){
	char ch;
	printf("ENTER WORD");
	scanf("%c",ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'){
		printf("WORD IS VOWEL");
	}
	else{
		printf("WORDD IS CONSONENT");
	}
}
