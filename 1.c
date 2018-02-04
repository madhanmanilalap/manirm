#include<stdio.h>
#include<conio.h>
void main()
{
int i,b,a[10];
printf("Enter b:");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
if(a[i]%2==0)
printf("even=%d",a[i]);
}
else
printf("Not");
}
getch();
}
