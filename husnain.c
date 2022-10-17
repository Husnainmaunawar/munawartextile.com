#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1,cube=0;
    do
    {
        cube=x*x*x;
        printf("cube of %d is %d\n",x,cube);
        x+=1;    }
while(x<=5);
getch();
return=0;
}
