#include<stdio.h>
int main(){

    //losagu and gosagu
     
int num1,num2,n1,n2,gcd,lcd,rem;
printf("enter 2 number : ");
scanf("%d%d",&num1,&num2);

n1= num1;
n2=num2;

while (n2!=0)
{
   rem = n1%n2;
   n1=n2;
   n2=rem;
}

gcd = n1;
lcd= num1*num2/gcd;
printf("GCD is %d\n",gcd);
printf("LCD is %d\n",lcd);








    // sum of digits
int number,sum,temp,rem;
sum = 0;
printf("Enter the number : ");
scanf("%d", &number);

temp = number;

while (temp!=0)
{
    rem = temp%10;
    sum = sum + rem;
    temp = temp/10;
}
printf("Sum of digits is %d", sum);



// Reverse of digits 
int number, temp,sum, rem;
sum = 0;
printf("Enter the Number : ");
scanf("%d", &number);
temp = number;
while (temp!=0)
{
    rem = temp %10;
    sum = sum *10 + rem;
    temp = temp/10;
}
printf("Reverse is : %d", sum);





// Palindrome or not (Original number = reverse number)
int reverseNumber,originalNumber,sum,rem;
sum = 0;
printf("Enter the Number : ");
scanf("%d", &originalNumber);
reverseNumber = originalNumber;
while (reverseNumber!=0)
{
    rem = reverseNumber%10;
    sum = sum*10+rem;
    reverseNumber = reverseNumber/10;

}
if(originalNumber==sum)
printf("Palindrome");
else{
    printf("Not palindrome");
}






    
    


    return 0;

}

