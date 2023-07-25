#include<stdio.h>
#include<conio.h>
void main()
{
char day;
clrscr();
printf("ENTER YOUR CHOICH==>");
scanf("%c",&day);
switch (day)
{
  case 'm':
	  printf("MONDAY");
	  break;
  case 'T':
	  printf("THESDAY");
	  break;
  case 'w':
	  printf("WENSTDAY");
	  break;
  case 't':
	  printf("THASDAY");
	  break;
  case 'f':
	  printf("FRIDAY");
	  break;
  case 'S':
	  printf("SATERDAY");
	  break;
  case 's':
	  printf("SUNDAY");
	  break;
  default :
	  printf("INVALIDE DAY");
	  break;
}
getch();
}