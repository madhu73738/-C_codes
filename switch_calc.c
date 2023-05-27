// To impliment the basic operator of a calculator, using switch case.

#include <stdio.h>
#include<math.h>

int main()
{

  char op;
  float first, second;
  printf("Enter An Operator (+, -, *, /, %%): \n");
  scanf("%c", &op);
  printf("Enter Two Operands: \n");
  scanf("%f %f", &first, &second);

  switch (op){
    case '+':
      printf("%f + %f = %f\n", first, second, first + second);
      break;
    case '-':
      printf("%f - %f = %f\n", first, second, first - second);
      break;
    case '*':
      printf("%f * %f = %f\n", first, second, first * second);
      break;
    case '/':
      printf("%f / %f = %f\n", first, second, first / second);
      break;
    case'%':
      printf("%f %% %f = %f\n", first, second, fmod(first, second));
      break;
    default:
      printf("Invalid Input!");
  }
return 0;
}