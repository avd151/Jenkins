#include<stdio.h>

int add(int num1, int num2){
  return (num1+num2);
}

int main(){
//   int n1 = 2, n2 = 3;
  int n1 = 5, n2 = 7; //changed values
  int sum = add(n1, n2);
  printf("Sum of %d and %d = %d\n", n1, n2, sum);
  return 0;
}
