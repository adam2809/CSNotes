#include <stdio.h>
#include <limits.h>
void exc2extra(int *a,int n){
  int i;
  for(i = 1;i < n;i++){
    int *key=&a[i];
    int j=i;
    printf("i is %d j is %d key is %d\n",i,j,*key);
    /* TODO doesnt go into the while loop*/
    while(j>=0 && *key > a[i]){
      int *temp = &a[i];
      printf("loop");
      a[i]=a[i-1];
      a[i-1]=*temp;
      j--;
    }
  }
}
void exc5(int *a,int *b){
  *a = *a + *b;
}
void exc3and4(){
  int n=15,m=10,sum;
  int *z=&m;
  int *o=&n;
  printf("The adress of m as signed int is %d\n",&m);
  printf("The adress of m in hex is 0x%X\n",&m);
  printf("The value of m is %d\n",*z);
  sum = *z + *o;
  printf("The sum of n and m is: %d\n",sum);
}
void exc1and2(){
  int a[10];
  int i;
  int min = INT_MAX;
  int max = 0;
  for(i = 0;i<10;i++){
    int in = getchar() - '0';
    printf("loop\t%d\n",i);
    a[i] = in;
  }
  for(i=0;i<10;i++){
    printf("The element %d is %d\n",i,a[i]);
    if(a[i] > max){
      max = a[i];
    }
    if(a[i] < min){
      min = a[i];
    }
  }
  printf("The max is: %d\nThe min is: %d\n",max, min);
}
int main(){
  int a[6]={3,6,4,1,2,5};
  int i;
  exc2extra(a,6);
  for(i=0;i<6;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}
