#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	int n,m=0,i=0,a=0,b=0,c=0;
	char string[200],vowel[200],consonant[200],other[200];
	printf("Enter the string: ");
	gets(string);
	while(string[i]!='\0')
	{
		n=isalpha(string[i]);
		if(n!=0||string[i]==' ')
		{
			if(string[i]==' ')
			{
				m=i+1;
			}
			if(string[m]=='a'||string[m]=='e'||string[m]=='i'||string[m]=='o'||string[m]=='u')
			{
				vowel[a]=string[i];
				a++;
			}
			else
			{
				consonant[b]=string[i];
				b++;
			}
		}
		else
		{
			other[c]=string[i];
			c++;
		}
		i++;
	}
	vowel[a]='\0';
	consonant[b]='\0';
	printf("The vowel strings are:\n");
	puts(vowel);
	printf("The consonant strings are:\n");
	puts(consonant);
	printf("The other symbols are:\n");
	puts(other);
}
