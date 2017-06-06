main()
{int a,b,i,min;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
min=a>b?b:a;
for(i=2;i<=min;i++)
   if(a%i==0&&b%i==0)
        break;
if(i==min+1)
printf("coprime");
else
   printf(" not coprime");
}
