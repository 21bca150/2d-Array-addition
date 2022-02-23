// write a program to enter two 3/3 metrix and print a sum of

#include<stdio.h>
#include<conio.h>
void main ()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	// logic input value into 2d array [3][3]
	for(i=0;i<3;i++) // row
	{
		for(j=0;j<3;j++) // column
		{
			printf("\nEnter value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}

	for(i=0;i<3;i++) // row
	{
		for(j=0;j<3;j++) // column
		{
			printf("\nEnter value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//logic print 2d array

	for(i=0;i<3;i++) // row
	{
		for(j=0;j<3;j++) // column
			printf("%d\t",m1[i][j]);
	printf("\n");
	}
	getch();
}