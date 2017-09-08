#include <stdio.h>
#include <math.h>
int main()
{
int time,speed,distance;
double fuel;
scanf("%d",&time);
scanf("%d",&speed);
distance = time*speed;
fuel = distance/12.0;
printf("%.3f\n",fuel);



return 0;
}
