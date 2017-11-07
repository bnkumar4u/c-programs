#include<stdio.h>
int main()
{
	int ii,t;
	scanf("%d",&t);
	for(ii=0;ii<t;ii++)
	{
		int n,p;
		scanf("%d %d",&n,&p);
		if(n<p||(n%p!=0))
			printf("impossible\n");
		else if(p==1||p==2)
			printf("impossible\n");
		else
		{
			int i;
			int k=n/p;
			char c[p];
			c[0]=c[p-1]='a';
			for(i=1;i<p-1;i++)
				c[i]='b';
			for(i=0;i<k;i++)
				printf("%s",c );
			printf("\n");
		}
			
	}
	return 0;	
}