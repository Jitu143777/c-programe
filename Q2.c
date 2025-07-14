#include <stdio.h>

int main() {
    //num1, num2 duta variable lole
    int num1, num2, sum;
  
    //user r pora numbers input lole aru num1, num2 variable t store korilu
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //numbers duta tu + oparator di add korisu aru duta variable t store korilu
    sum = num1 + num2;

    //result print korilu
    printf("Sum = %d\n", sum);
    return 0;
}
