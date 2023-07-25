#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float r,total,GST;
 clrscr();
 printf("ENTER YOUR UNIT==>");
 scanf("%d",&unit);
 if (unit<50)
 {
  r=0.50;
  printf("r=0.50\n");
 }
 else if (unit>=50&&unit<150)
 {
  r=0.75;
  printf("r=0.75\n");
 }
 else if (unit>=150&&unit<250)
 {
  r=1.20;
  printf("r=1.20\n");
 }
 else if (unit>250)
 {
  r=1.50;
  printf("r=1.50\n");
 }
else
{
printf("INVALID NUMBER");
}
total=unit*r;
GST=(total*18)/100;
printf("TOTAL==>%f\n",total);
printf("GST==>%f",GST);
 getch();
}