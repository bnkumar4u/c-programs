main()
{int a[20],n,i;
    printf("enter no of elements\n");
    scanf("%d",&n);
     printf("enter the elements");
     for(i=0;i<n;i++)
     {
          printf("\na[%d]=",i);
          scanf("%d",&a[i]);
     }
printf("the entered elements are:\n");
 for(i=0;i<n;i++)
     {
          printf("a[%d]=%d\n",i,a[i]);
     }
sort(a,n);
printf("After sorting the elements are:\n");
for(i=0;i<n;i++)
     {
          printf("a[%d]=%d\n",i,a[i]);
     }
}
void sort(int *a,int n)
{
    if(n!=1)
    {int t,i;
        for(i=0;i<n-1;i++)
        {if(*(a+i)>*(a+n-1))
           {
            t=*(a+i);
            *(a+i)=*(a+n-1);
            *(a+n-1)=t;
          }
        }
        sort(a,n-1);

    }

}
