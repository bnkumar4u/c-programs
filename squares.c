#include<math.h>
main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=nextsquareof(i))
    {
        sum=sum+i;
    }
    printf("%d",sum);

}
int nextsquareof(int x)
{
    int i,j,temp,d,sum=0;
    for(i=x+1 ; ;i++)
    {
        j=i;
        sum=0;
        while(j)
        {
            d=j%10;
            sum=sum+(d*d);
            j=j/10;
        }
        temp=(int)sqrt(sum);
        if(temp*temp == sum)
        {
            return i;
        }
    }
}
