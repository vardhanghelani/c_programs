#include<stdio.h>
void main()
{
	char c;
	printf("Enter a vowel ");
	scanf("%c",&c);
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("It's a vowel %c ",c); 
	}
	 else 
	 {
	 	printf("It's a consonent %c",c);
	 }
	 
	
}




