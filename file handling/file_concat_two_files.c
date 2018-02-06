#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i=0;
	char c;
	FILE *fp1=fopen("hello.txt","r+");

	FILE *fp2=fopen("hello2.txt","r+");

	FILE *fp3=fopen("file3.txt","w+");
	if (fp1==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	if (fp2==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	if (fp3==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}

	printf("started\n");
	while(!feof(fp1)&&!feof(fp2))
	{
		printf("1\n");
		if(i==0)
		{
			while(1)
			{
				printf("2\n");
				c=fgetc(fp1);
				fputc(c,fp3);
				printf("%c\n",c );
				if(c==EOF||c=='\n')
					break;
			}
			i=1;
		}
		else
		{
			while(1)
			{printf("3\n");
				c=fgetc(fp2);
				fputc(c,fp3);
				if(c==EOF||c=='\n')
					break;
			}
			i=0;
		}
	}
	while(!feof(fp1))
	{
		printf("4\n");
		c=fgetc(fp1);
		fputc(c,fp3);
	}
	while(!feof(fp2))
	{
		printf("5\n");
		c=fgetc(fp2);
		fputc(c,fp3);
	}
}