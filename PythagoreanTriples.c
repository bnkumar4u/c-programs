#include<math.h>
#include<stdio.h>
main()
{

    unsigned long a;
    scanf("%lu",&a);
       // long b = Long.parseUnsignedLong();
       // long c = Long.parseUnsignedLong();
       unsigned long int b,c;
        long double x;


        if(a>=5&&a<=1000000000)
        {
            for (b=1;1;b++)
        {

          // x=(long) Math.sqrt((double) x);
           if((int)sqrt(a*a+b*b)  ==sqrt(a*a+b*b))
           {
            c= (int)sqrt(a*a+b*b);
            if(c>a&&c>b)
            break;
           }


        }
        printf("%lu %lu %lu",a,b,c);
}}
