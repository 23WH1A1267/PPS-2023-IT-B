int main()
{
    
char operator;
  double firstOp, secondOp;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &firstOp, &secondOp);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", firstOp, secondOp, firstOp + secondOp);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", firstOp, secondOp, firstOp - secondOp);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", firstOp, secondOp, firstOp * secondOp);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", firstOp, secondOp, firstOp / secondOp);
       break;
    default:
      printf("Given operator is not correct");
  }
    return 0;
}
