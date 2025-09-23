// simple C program 
/*
Name: wycliff mutharimi 
Date: 
Description: variables and data 
*/
#include <stdio.h>
int main(){
// variable deceleration and initialization 
int age;
double income;
// prompt the user to enter age and income 
printf("Enter ur age: ");
scanf("%d",&age);
printf("Enter annual income:");
scanf("%1f",& income);

if(age>= 21& income >= 21000){
printf("congratulations you qualify for loan.\n");
}else{
printf("unfortunately, we are unable to offer you loan at this time.\n");}
return 0;
}