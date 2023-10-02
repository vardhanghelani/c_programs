#include<stdio.h>
void main(){
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z'){
	printf("CHARACTER IS ALPHABET");
}
	else if(ch>='A'&& ch<='Z'){
		printf("CHARACTER IS ALPHABET");
	}

	
	
	else{
			printf("CHARACTER IS  NOT ALPHABET");
	}
}
