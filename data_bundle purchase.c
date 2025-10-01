/*
Name: wycliff mutharimi
Reg No:CT101/G/26561/25
Description:
*/
#include<stdio.h>
int main(){
	int bundles,cost;
	
	printf("enter bundles (1=100MB,2=200MB, 3=1GB, 4=2GB: ");
	scanf("%d",&bundles);
	
	if(bundles == 1)
		cost=50;
	else if(bundles ==2)
		cost = 200;
	else if (bundles == 3)
		cost = 350;
	else if(bundles == 4)
		cost=600;
	else 
		printf("invalid choice:");
	
	printf("bundles = %d\n",bundles);
	printf("cost is Kes. %d",cost);
	return 0;
}
	