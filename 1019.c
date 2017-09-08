#include <stdio.h>
int main()
{
int N,minutes,hours,seconds,m;
scanf("%d",&N);
hours=N/3600;
m=(N%3600);
minutes=m/60;
seconds=m%60;
printf("%d:%d:%d\n",hours,minutes,seconds);





return 0;
}
