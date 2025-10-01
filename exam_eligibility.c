/*
Name:wycliff mutharimi
Reg No:CT101/G/26561/25
Description: eligible
*/
#include<stdio.h>
int main (){
int attendance,average_marks;
printf("enter attendance:");
scanf("%d",&attendance);
printf("enter average_marks:");
scanf("%d",&average_marks);
if (attendance>=0.75&&average_marks>=40)
	printf("eligible");
else
	printf("not eligible");
return 0;
}