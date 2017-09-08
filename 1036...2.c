#include <stdio.h>
#include <math.h>
int main()
{
float A,B,C,R1,R2;
scanf("%lf %lf %lf",&A,&B,&C);
if(A==0)
        printf("Impossivel calcular\n");

    else if(B<A && B<C)
        printf("Impossivel calcular\n");
    else{
        R1=(-B+√(B*B-4AC))/2A;
        R2=(-B-√(B^2-4AC))/2A;
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);
        }








return 0;
}
