#include<stdio.h>
int main()
{
	int n,i,a,count = 0;
	scanf("%d",&n);
	for(a=2;a<=n;a++)
	{
	for(i=1;i<=a;i++)
	{
			if(a%i == 0)
			{
				count=count+1;
					if(count==2)
					{
						printf("%d",a);
						count=0;
					}
			}
	}
	}
}
