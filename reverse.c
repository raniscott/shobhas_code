#include <stdio.h>

void revers(char *);
void main()
{
	char text[] = "rani";
	revers(text);
	printf("reverse string is %s\n", text);
}

void revers(char *text)
{
	char *begin, *end, temp;
	int length = 0, i;

	begin = end = text;

	while(*(text+length)!= '\0')
		length++;

	for(i=0; i<length-1; i++)
		end++;

	for(i=0; i<length/2; i++)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
		
	}
}

