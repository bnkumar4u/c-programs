#include<math.h>
main()
{int bin,s=0,i;
printf("enter a binary no\n");
scanf("%d",&bin);
for(i=0;bin!=0;i++)
{
    s=s+pow(2,i)*(bin%10);
    bin=bin/10;

}
printf("the decimal no is %d",s);
}
