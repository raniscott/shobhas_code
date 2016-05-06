#include <stdio.h>
#include <stdlib.h>
char *reverse(const char *);
void main()
{
	const char text[] = "shobha";
	char *revtext;
	revtext = reverse(text);
	printf("reverse text is %s\n", revtext);
}


char *reverse(const char *string1)
{
	int length = 0, i;
	char *revtext;

	while(*(string1+length) != '\0')
		length++;

	revtext = (char *)malloc(length-1);

	for(i=0; i<length; i++)
		revtext[i] = string1[(length-1)-i];

	revtext[length] = '\0';

	return revtext;

//	printf("rever string in fun is %s\n", revtext);

//	for(i=0; i<=length; i++)
//		revtext--;

//	printf("reverse string is %s\n", revtext);
}
