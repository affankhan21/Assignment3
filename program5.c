#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckVowel(char cNo)

{
if(cNo =='a'||cNo =='e'||cNo =='i'||cNo =='o'||cNo =='u'||cNo =='A'||cNo =='E'||cNo =='I'||cNo =='O'||cNo =='U')
{
return  TRUE;

}
else
{


    return FALSE;
}

}
int main()
{

char cValue;
BOOL bRet=FALSE;
printf("ENTER A CHARACTER  :\n");
scanf("%c",&cValue);

bRet=CheckVowel(cValue);
if(bRet==TRUE)
{
    printf("%c character is a vowel",cValue);

}
else{



       printf(" %c character is   a consonant  ",cValue);
       
}
   return 0;
}