#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int age;

};
typedef struct student std;
void bubblesort(std *a,int n)
{
     int flag,i,j;
     char temp[20];
     flag=0;
     j=1;
     while(flag==0)
     {
         flag=1;
         for(i=0;i<n-j;i++)
         {
            if(strcmp(a[i].name,a[i+1].name)>0)
            {
               strcpy(temp,a[i].name);
               strcpy(a[i].name,a[i+1].name);
               strcpy(a[i+1].name,temp);
               flag=0;
            }
         }
         j++;
     }
}

void main()
{
	std s[100];
	int c,i;
	FILE *fp=fopen("hello.txt","r");
	if (fp==NULL)
	{
		printf("file not opened\n");
		exit(-1);
	}
	for(i=0;!feof(fp);i++)
	{
		fscanf(fp,"%s %d",&s[i].name,&s[i].age);
	}
	c=i;
	bubblesort(s,c);
	printf("After sorting the data is:\n");
	for(i=0;i<c;i++)
		printf("%s %d\n",s[i].name,s[i].age );

}