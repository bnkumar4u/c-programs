#include <stdio.h>
#include <stdlib.h>
void main()
{
	int size ;
	char c[100];
	FILE *fp=fopen("hello.txt","a+");
	if (fp==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	FILE *fp2=fopen("hello2.txt","a");
	while(1)
	{
		fscanf(fp,"%s",c);
		fputs(c,fp2);
		fputs("\n",fp2);
		if(feof(fp))
			break;

	}
	
	printf("file opened size = %d\n",size );
}