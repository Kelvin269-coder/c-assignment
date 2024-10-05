//Author: Kelvin Kariuki Waithera 
//Course: Computer systems engineering 
//Adm:PA107/G/24231/24
//a program to calculate simple interest 
#include<stdio.h>
#include<math.h>
int main(){
double p,r,t,si;
printf("please enter the principal,rate, time:",p,r,t);
scanf("%lf,%lf,%lf",&p,&r,&t);
si=(p*r*t)/100;
printf("the simple interest is:%.2lf",si);
return 0;
}