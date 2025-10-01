/*
Name: wycliff mutharimi
Reg No:CT101/G/26561/25
Description:
*/
#include<stdio.h>
#include<math.h>
int main(){

	int unit;
	float total_bill;
	printf("enter unit:");
	scanf("%d",&unit);
	
	if(unit>=60)
		total_bill=30 * unit;
	else if(unit>=31&&unit<=60)
		total_bill=25 * unit;
	else if(unit<=30)
		total_bill=20 * unit;
	printf("unit is %d\n",unit);
	printf("total_bill is Kes. %.2f",total_bill);
	return 0;
}