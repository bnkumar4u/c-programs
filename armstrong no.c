main()
{int j,i,k,l;
 printf("armstrong numbers are\n");
 for(i=0;i<=1000;i++)
 {j=i%10;
  k=(i/10)%10;
  l=(i/100)%10;
     if((j*j*j+k*k*k+l*l*l)==i)
        printf("%d\n",i);
 }
  printf("end");
}
