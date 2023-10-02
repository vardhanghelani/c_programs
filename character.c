#include<stdio.h>
void main(){
	char ch;
	printf("ENTER CHARACTER\n");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z'){
		printf("\nCHARCTER IS OF UPPER CASE");
	}
	else if(ch>='a'&& ch<='z'){
		printf("\nCHARCTER IS OF LOWER CASE ");
	}
    else if (ch>=48 && ch<=57){
		printf("CHARCTER IS DGIT");
	}
	else {
		printf("CHARACTER IS SPECIAL CHARACTER ");
	}
}
