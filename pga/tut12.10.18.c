#include <stdio.h>

void exc0(){
  printf("   ######\n ##      ##\n#\n#\n#\n#\n#\n ##      ##\n   ######\n");
}

void exc3(int days){
  int weeks, years;
  years = days/365;
  days %= 365;
  weeks = days/7;
  days %= 7;
  printf("Years: %d\nWeeks: %d\nDays %d\n",years, weeks, days);
}

int main(){
  exc3(500);
  return 0;
}
