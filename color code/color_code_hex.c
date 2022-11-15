#include<stdio.h>
int main()
{
static int RED,GREEN, BLUE;

printf("this program converd R & G & B values of color into hex form\n");
printf("please enter R & G & B values you want to convert  \n");
scanf("%d",&RED);
scanf("%d",&GREEN);
scanf("%d",&BLUE);
printf("#%x%x%x",RED,GREEN,BLUE);

    return 0;
}