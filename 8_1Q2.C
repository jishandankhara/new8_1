//write a program to find the avegage of 1d array.
#include<stdio.h>
#include<conio.h>
void main(){
float array[99];
float j,i,a,s=0.0;
clrscr();
printf("enter array size:");
scanf("%f",&i);
printf("enter array element:");

for(j=0;j<i;j++){
   printf("j[%.0f]=",j);
   scanf("%f",&array[j]);
   s+=array[j];
   }
a=s/i;
printf("average of an array :%0.2f",a);
getch();}