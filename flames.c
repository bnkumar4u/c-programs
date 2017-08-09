#include <stdio.h>

int main()
{
    int i,p=-1,n,k;
    scanf("%d%d",&n,&k);
    
    int a[n];
    for( i=0;i<n;i++)
    a[i]=i+1;
    
    while(n!=1)
    {
        p=p+k;
        if(p>=n)
         p=p-n;
         
         for(i=p;i<n-1;i++)
           a[i]=a[i+1];
           
           n--;
           p--;
    }
    
    printf("%d",a[0]);
   return 0;
}

