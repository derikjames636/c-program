#include<stdio.h>
int main() {
  int n1,n2;
  char operation;
  printf("\n enter the numbers:\n");
  scanf("%d%d",&n1,&n2);
  printf("\n choose an operation:\n Addition(A)\n Subtraction(S)\n Multiplication (M)\n Division (D)");
  scanf(" %c",&operation);
  switch(operation){
    case'A':
      printf("\nresult:%d",n1+n2);
      break;
    case'S':
      printf("\nresult:%d",n1-n2);
      break;
    case 'M':
      printf("\nresult:%d",n1*n2);
      break;
    case'D':
      printf("\nresult:%d",n1/n2);
      break;
    default:
      printf("Invalid input");
      break;
  }
  return 0;
}         
  
