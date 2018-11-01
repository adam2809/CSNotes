#include <stdio.h>

/*function declaration(not necessary just for illustration)*/
void printSum(int a, int b);

int main(int argc, char **argv){
  long double test = 80;
  int x;
  int a[]={1,2,3};
  printSum(3,6);
  printf("The bit length of varibale test is: %ld\n",sizeof(test)*8);

  x = (*a)++;
  printf("%d\n",x);
  printf("%d\n",*a);
  return 0;
}

/*function definition*/
void printSum(int a, int b){
  int sum = a + b;
  printf("The sum is equal to %d\n", sum);
}

/*
char* addTrailingZero(int n){
  char (*p)[2];
  char out[2];
  if(n<10){
    out[0] = '0';
    out[1] = '0' + n;
  }else{
    out[0] = '0' + (n / 10);
    out[1] = '0' + (n % 10);
  }
  p = &out;
  return p;
}
*/
