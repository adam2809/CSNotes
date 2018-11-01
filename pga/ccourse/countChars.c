#include <stdio.h>

int main(int argv, char** arg){
  char currChar;
  int wordCounter = 1;
  int charCounter = 0;
  while(currChar = getchar() != '\n'){
    charCounter++;
    if(currChar == ' '){
      wordCounter++;
    }
  }
  if(charCounter == 0){
    wordCounter==0;
  }
  printf("The number of characters input by the user is: %d\n", charCounter);
  printf("The number of words input by the user is: %d\n", wordCounter);
  return 0;
}
