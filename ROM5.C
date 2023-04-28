#include<stdio.h>
#include<conio.h>
void main()
{
	 int p,q,r,s,t,u,v,w;
	 clrscr();


	 printf("Enter the value of basic salary :");
	 scanf("%d",&q);
	 printf("Enter the value of DA :");
	 scanf("%d",&r);
	 printf("Enter the value of HRA :");
	 scanf("%d",&s);
	 printf("Enter the value of TA :");
	 scanf("%d",&t);



	 u=(r*q)/100;
	 v=(s*q)/100;
	 w=(t*q)/100;
	 p=q+u+v+w;

	 printf("gross salary of the employe =%d ",p);


	 getch();
}