#include <stdio.h>
int main()
{
char name;
double salary,bonous,total,extra;
scanf("%s",&name);
scanf("%lf",&salary);
scanf("%lf",&bonous);
extra=(bonous*15)/100;
total=salary+extra;
printf("TOTAL = R$ %.2lf\n",total);
return 0;
}
