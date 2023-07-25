#include<stdio.h>
#include<conio.h>
void main()
{
char w;
clrscr();
printf("W=WINTER\nS=SUMMER\nM=MOONSOON\n");
printf("ENTER YOUR ALPHABET==>");
scanf("%c",&w);
if(w=='M')
{
printf("MOONSOON");
}
else if(w=='S')
{
printf("SUMMER");
}
else if(w=='W')
{
printf("WINTER");
}
else
{
printf("INVLIDE VALUE");
}
getch();
}