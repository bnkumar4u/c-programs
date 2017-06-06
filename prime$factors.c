main()
{int a,i;
 printf("enter any  no\n");
scanf("%d",&a);
printf("the prime factors are\n");
    for(i=2;i<=a;i++)
    {  while(a%i==0)
       {
        printf("%d,",i);
           a= a/i;
        }
    }
}
