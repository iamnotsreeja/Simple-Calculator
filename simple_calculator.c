#include <stdio.h>
int main()
{
   char Operator;
   float num1, num2, result = 0;
   

   printf("Enter the Operator and Operands : ");
   scanf("%f%c%f", &num1,&Operator, &num2);

   switch(Operator)
   {
      case '+': 
      result = num1 + num2;
         break;
      case '-':
       result = num1 - num2;
         break;
      case '*':
       result = num1 * num2;
     break;
      case '/': 
      result = num1 / num2;
      break;

      default: printf("Invalid Operator ");
   }
   printf("The value = %f", result);
   return (0);
}