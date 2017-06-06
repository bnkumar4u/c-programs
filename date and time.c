#include<windows.h>
void main()
{
    SYSTEMTIME t;
    GetSystemTime(&t);
   printf("%d / %d / %d\n",t.wDay,t.wMonth,t.wYear);
    printf("%d\n",t.wDayOfWeek);
    printf("%d : %d : %d : %f\n",t.wHour,t.wMinute,t.wSecond,t.wMilliseconds);


}
