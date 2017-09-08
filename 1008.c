#include <stdio.h>
int main()
{
int number,wage;
double hours,result;
scanf("%d",&number);
scanf("%d",&wage);
scanf("%lf",&hours);
result =(wage*hours);
printf("NUMBER = %d\n",number);
printf("SALARY = U$ %.2lf\n",result);
return 0;
}
