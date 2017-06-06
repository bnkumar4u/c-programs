main()
{int n,t;
    printf("enter which term of fibonacci series\n");
    scanf("%d",&n);
    t=fs(n);
    printf("%dth term is %d\n",n,t);
}
int fs(int n)
{int s;
    if(n==1||n==2)
        return 1;
        else
    {s= fs(n-1)+fs(n-2);
    return s;}

}
