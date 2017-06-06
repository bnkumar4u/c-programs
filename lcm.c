main()
{int a,b,i,t=0;
 printf("enter any two no\n");
 scanf("%d%d",&a,&b);
if(a>b)
    t=a;
else
    t=b;
 for(i=t;;i=i+t)
 {
     if((i%a==0)&&(i%b==0))
        break;
 }
 printf("lcm=%d",i);
}
