#include <stdio.h>
#include <stdlib.h>
void main()
{
	int size ;
	FILE *fp=fopen("hello.txt","rb+");
	if (fp==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	fseek(fp,0,SEEK_END);
	size=ftell(fp);
	printf("file opened size = %d\n",size );
}