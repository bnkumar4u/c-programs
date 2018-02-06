#include <stdio.h>
#include <stdlib.h>
main()
{
	char c,s[1000000];
	int i=1;

	FILE *p=fopen("hello.txt","r");
	if(p==NULL)
	{
		printf("File can't be opened\n");
		exit(0);
	}
	while(1)
	{
		fscanf(p,"%[^\n]%*c",s);
		if(feof(p))
			break;

		printf("%d:  ",i++ );
		printf("%s\n",s );
	}
}