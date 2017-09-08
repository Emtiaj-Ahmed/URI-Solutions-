#include <stdio.h>
int main()
{
int N,years,months,days,m;
scanf("%d",&N);
years=N/365;
m=(N%365);
months=m/30;
days=m%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);





return 0;
}
