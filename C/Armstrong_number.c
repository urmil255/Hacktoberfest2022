#include<stdio.h>  
 int main()    
{    
int number;
int r;
int sum=0;
int temp;    
printf("enter the number=");    
scanf("%d",&number);    
temp=number;    
while(number>0)    
{    
r=number%10;    
sum=sum+(r*r*r);    
number=number/10;    
}    
if(temp==sum)    
printf("armstrong number ");    
else    
printf("Number is not a armstrong number");    
return 0;  
} 
