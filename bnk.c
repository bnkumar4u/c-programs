main()
{int j=-12,d,sum=0;
printf("hello\n%d\n",sum);
    while(j)
        {
            d=j%10;
            sum=sum+(d*d);
           j= j/10;
        }
        printf("%d",sum);
}
