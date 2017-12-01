#include<stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,q,j,k;
		scanf("%d%d",&n,&q);
		int d[n],x;

		for(j=0;j<n;j++)
			scanf("%d",&d[j]);

		for(j=0;j<q;j++)
		{
			k=0;
			scanf("%d",&x);
			while(x!=0&&k!=n)
			{
				x=x/d[k];
				k++;
			}
			printf("%d ",x );
		}
		printf("\n");
	}	
	return 0;
}