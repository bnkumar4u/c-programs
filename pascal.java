class pascal
{public static void main(String args[])
{
	int [][] a=new int[10][10];
	for(int i=1;i<=5;i++)
	{
	   for(int j=1;j<=i;j++)
	   {
	   if(j==1&&j==i)
	      a[i][j]=1;
	    else
	    a[i][j]=a[i-1][j-1]+a[i-1][j];
	   }
	}
	for(int i=1;i<=5;i++)
	{
	for(int j=1;j<=i;j++)
	{
	System.out.print(a[i][j]);
	}
	System.out.println("");
	}
}}