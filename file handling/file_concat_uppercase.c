#include <stdio.h>
#include <stdlib.h>
void main()
{
	int size ;
	char c;
	FILE *fp=fopen("hello.txt","r");
	if (fp==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	FILE *fp2=fopen("hello2.txt","a");
	while(!feof(fp))
	{
		c=fgetc(fp);
		if(c>='a'&&c<='z')
			c=c-32;
		fputc(c,fp2);
	}
}