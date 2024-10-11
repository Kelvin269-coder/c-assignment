//Author:Kelvin Kariuki Waithera
//Course:Computer systems engineering
//Adm:PA107/G/24231/24
//A program to calculate compound intrest
#include<stdio.h>
#include<math.h>
int main(){
double p,r,t,ci,a;
printf("please enter principle,rate,time =",p,r,t);
scanf("%lf,%lf,%lf",&p,&r,&t);

a=p*pow((1+r/100),t);
ci=a-p;
printf ("amount is %.2lf",a);
printf("the compound interest is %.2lf:",ci);

return 0;
}
