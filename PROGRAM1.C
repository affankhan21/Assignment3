#include<stdio.h>
 void PrintEven(int iNo)
{
    int iCnt=0;
if(iNo<=0)
{


    return ;
}
else{
   
for(iCnt=1;iCnt<=iNo;iCnt++)
{
printf("%d\n",2*iCnt);
printf("\n-------------------------------------------------------------------------------\n");


}



}




}




int main()
{
int iValue=0;
printf("ENTER NUMBER UPTO WHICH YOU WANT EVEN NUMBER :\n");
scanf("%d",&iValue);
PrintEven(iValue);





    return 0;
}