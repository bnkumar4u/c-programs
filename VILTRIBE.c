#include<stdio.h>
int main()
{
	int t,ii;
	scanf("%d",&t);
	fflush(stdin) ;
	for(ii=0;ii<t;ii++)
	{
		char s[100000];
		scanf("%s",s);
		char prev='.';
		int dots=0,a=0,b=0,i=0;
		while(s[i]!='\0')
		{
			if(s[i]=='.')
				dots++;
			else if(s[i]=='A')
			{
				a++;
				if(prev=='A')
				{
					a=a+dots;
				}
				dots=0;
				prev='A';
			}
			else
			{
				b++;
				if(prev=='B')
					b=b+dots;
				dots=0;
				prev='B';
			}
			i++;
		}
		printf("%d %d\n",a,b);
	}
	
	return 0;
}