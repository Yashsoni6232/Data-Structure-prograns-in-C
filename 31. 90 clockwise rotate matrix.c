//Write a program to create a matrix and print it with rotation of 90 degree in clock wise Direction.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("enter nine numbers");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",a[i][j]);
}
}
printf("the 90 degree clockwise rotated matrix is\n");
for(i=0;i<3;i++)
{
for(j=2;j>0;j--)
{
printf("%d  ",a[j][i]);

}
printf("\n" );

}
getch();
}
