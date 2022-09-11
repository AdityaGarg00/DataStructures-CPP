#include<stdio.h>
#include<string.h>
main()
{
	int wc,cd,diets,cost,et,price,l,total;
	char a[20];
	/*
	printf("                 *********** MESS BILL ***********\n");
	printf("\n Enter the worker charges : Rs.");
	scanf("%d",&wc);
	
	printf("\n Enter the number of compulsory diets:");
	scanf("%d",&cd);
	
	printf("\n Enter the number of diets taken :");
	scanf("%d",&diets);
	
	printf("\n Enter the cost per diet : Rs.");
	scanf("%d",&cost);
	*/
	printf("\n Enter the numbers of packets of Lays(cost 20 rs.) :");
	scanf("%d",&l);
	
	printf("\n Enter the name of any extra thing taken :");
	fgets(a,20,stdin);

	
	printf("\n Enter the amount :");
	scanf("%d",&et);
	
	printf ("\n Enter the price of %s : Rs.",a);
	scanf("%d",&price);
	if(diets>cd)
	total=wc+(cd*cost)+((diets-cd)*cost)+(l*20)+(et*price);
	else
	total=wc+(cd*cost)+(l*20)+(et*price);
	printf("\n            TOTAL BILL=%d",total);
	return 0;
}
