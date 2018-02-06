#include <stdio.h>
#include <stdlib.h>
void main()
{
	int size =0;
	char ch;
	FILE *fp=fopen("hello.txt","rb+");
	if (fp==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	while(1)
	{
		fscanf(fp,"%c",&ch);
		
			 if(feof(fp))
			{
				printf("exit 2\n");
				break;
			}
		size++;
	}
	printf("file opened size = %d \n",size );
}