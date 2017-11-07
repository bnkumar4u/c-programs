#include<stdio.h>
int main()
{
	int t,ii;
	scanf("%d",&t);
	for(ii=0;ii<t;ii++)
	{
		int n,r,i;
		scanf("%d %d",&n,&r);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		int min=0,max=2147483647;
		for(i=0;i<n;i++)
		{
			if(a[i]>r)
			{
				if(a[i]<max)
					max=a[i];
				else{
					printf("NO\n");
					break;
				}
			}
			else if(a[i]<r)
			{
				if(a[i]>min)
					min=a[i];
				else
				{
					printf("NO\n");
					break;
				}
			}
		}
		if(i==n)
			printf("YES\n");



	}
	return 0;
}