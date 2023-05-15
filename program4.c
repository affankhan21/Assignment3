#include<stdio.h>                                                   
void DisplayConvert(char cNo)
{
    char a='\0';
if(a=cNo-32)
{


    printf("%c",a);
}
else if (a=cNo)
{

   printf("%c",a);

}




}



int main()
{
char cValue='\0';
printf("ENTER CHARACTER \n:");
scanf("%c",&cValue);
DisplayConvert(cValue);
    return 0;
}