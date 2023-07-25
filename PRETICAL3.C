#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("ENTER YOUR 4 VALUE==>");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
 if(a>c)
 {
  if(a>d)
  {
  printf("A IS BIG");
  }
  else
  {
  printf("D IS BIG");
  }
 }
 else
 {
  if(b>c)
  {
   if(b>d)
   {
   printf("B IS BIG");
   }
   else
   {
   printf("D IS BIG");
   }
  }
  else
  {
    if(c>d)
    {
    printf("C IS BIG");
    }
    else
    {
    printf("D IS BIG");
    }
  }
 }
}
else
{
 printf(" D IS BIG");
}

getch();
}