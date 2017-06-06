main()
{int a=0,b=1,t,n,i;
printf("enter no of elements needed\n");
scanf("%d",&n);
printf("Fibonacci series is\n");
 printf("%d ",a);
 printf("%d ",b);
  for(i=1;i<=n-2;i++)
  {
      t=a+b;
      printf("%d ",t);
      a=b;
      b=t;
  }

}
