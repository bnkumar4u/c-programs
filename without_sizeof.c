#include <stdio.h>
void main()
{
	int x=0;
	printf("size of int is %d\n",(char*)(&x+1)-(char*)(&x) );

	double y;
	printf("size of double is %d\n",(char*)(&y+1)-(char*)(&y) );

	float z;
	printf("size of float is %d\n",(char*)(&z+1)-(char*)(&z) );

	char p;
	printf("size of char is %d\n",(char*)(&p+1)-(char*)(&p) );

	short q;
	printf("size of short is %d\n",(char*)(&q+1)-(char*)(&q) );

	long s;
	printf("size of long is %d\n",(char*)(&s+1)-(char*)(&s) );

	long long  r;
	printf("size of long long is %d\n",(char*)(&r+1)-(char*)(&r) );

}