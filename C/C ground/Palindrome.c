#include<stdio.h>
#include<string.h>
int main()
{
	char pal[10], rev[10];
	printf("\nEnter any integer, string for checking palindrome: ");
	gets(pal);
	strcpy(rev, pal);
	strrev(rev);
	if(strcmp(pal, rev) == 0)
		printf("\nPalindrome");
	else
		printf("\nNot palindrome");
	return 0;
}
