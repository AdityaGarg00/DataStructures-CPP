#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp1,*fp2,*fp3;
	int n,i,a,m;
	
	printf("no. of elements=");
	scanf("%d",&m);
	printf("enter the %d numbers:",m);
	fp1=fopen("Main","w");
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		if(n == -1)
		   break;
		putw(n,fp1);   //putw is used to put integer
	}
	
	fp2=fopen("Main","r");
	
	while(a=getw(fp2)!=EOF)
	{
	
	   printf("%d\t",a);
	}
	
	fclose(fp1);
	fclose(fp2);
	fp1=fopen("main.txt","r");
	fp2=fopen("even.txt","w");
	fp3=fopen("odd.txt","w");
	a=getw(fp1);           //getw is used to get integer from fp1(file1 name as main
	
	while(a!=EOF)
	{
		if(a%2==0)
		   putw(a,fp2);
		else
		   putw(a,fp3);
		a=getw(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp2=fopen("even","r");
	fp3=fopen("odd","r");
	printf("\n**** contents of odd file ***");
	
	while(a=getw(fp3)!=EOF)
	   printf("%d\t",a);
	printf("\n*** contents of odd file ***");
	
	while(a=getw(fp2)!=EOF)
	   printf("%d\t",a);
	
	fclose(fp3);
	fclose(fp2);
	
	return 0;
}

