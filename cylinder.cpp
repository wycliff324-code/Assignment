/*
Name: wycliff mutharimi
Reg No: CT101/G/101/26561/25
Date:
Description:
*/
#include<stdio.h>
#include<math.h>
#define PI 3.142
//main function
int main(){
	int radius, height, volume, surfacearea;
	
printf("enter radius of the cylinder: ");
scanf("%d",&radius);

printf("enter the height of the cylinder: ");
scanf("%d",&height);

//compute volume and surface area
volume=PI*radius*radius*height;
surfacearea=2*PI*radius*radius + 2*PI*radius*height;

//display results 
printf("volume is %.2dmetres^3\n",volume);
printf("surfacearea is %.2dmetres^2\n",surfacearea);
return 0;
}