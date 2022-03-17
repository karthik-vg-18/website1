#include<stdio.h>
#define max 20
void main()
{
	int a[max],i,ele,pos=0,n=0,ch;
	
	do
	{
		printf("\n1 Insert 2 display 3 exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n enter ele = ");
					scanf("%d",&ele);
					if(n==0)
					{
						a[pos]=ele;
						n++;
					}
					else
					{
						for(i=0;i<n;i++)
						{
							if(a[i]>ele)
							{
								break;
							}
						}
						pos=i;
						//right shift
						for(i=n;i>pos;i--)
							a[i]=a[i-1];
						a[pos]=ele;
						n++;
					}
					break;
				case 2:printf("\n elements are \n ");
						for(i=0;i<n;i++)
							printf("%d ",a[i]);
				case 3 : break;
				default:printf("\n DUDE WATCH!!!\n");
		}
	}while(ch!=3);
}