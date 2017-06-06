main()
{int a[3][3]={0},b[3][3]={0},c[3][3]={0},i,j,k,t=0;
 printf("enter 1st matrix elements\n");
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
printf("enter 2nd matrix elements\n");
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
printf("PRODUCT OF THE MATRICES IS\n");
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {for(k=0;k<3;k++)
      {t=t+a[i][k]*b[k][j];}
     c[i][j]=t;
     t=0;
     }
  }
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d   ",c[i][j]);
    printf("\n");}

}
