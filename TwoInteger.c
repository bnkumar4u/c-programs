#include <stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	unsigned long result[100];

	if(T>=1&&T<=100)
	{
		for(i=0;i<T;i++)
		{
			unsigned long a,b,n;
			scanf("%lu",&a);

			if(a>=1&&a<=1000000000)
			{
				scanf("%lu",&b);

				if(b>=1&&b<=1000000000)
				{
					scanf("%lu",&n);

					if(n>=1&&n<=1000000000)
					{
						if(n%2==0)
							result[i]=a>b?a/b:b/a;

						else if(n%2==1)
						{
							a=a*2;
							result[i]=a>b?a/b:b/a;
						}


					}
				}

			}
		}
		for(i=0;i<T;i++)
			printf("%lu\n",result[i] );

	}



	return 0;
}