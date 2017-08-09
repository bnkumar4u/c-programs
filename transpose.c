void transpose(int a[100][100],int m,int n)
{
	int i=0,j=0,temp;
	for(i=0;i<m;i++)
	{
		for(j=i;j<n;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
}
main()
{
	printf("enter the order of matrix in m*n format\n");
	int m,n;
	scanf("%d*%d",&m,&n);
	int max=m>n?m:n;
	printf("%d\n",max );
	int a[max][max],i,j=0,temp;

	printf("Enter the elements of matrix\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	transpose(a,m,n);

	for(i=0;i<n;i++)
	{

		for(j=0;j<m;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}