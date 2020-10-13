#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char stringLower(char s) { 
  if ((s > 64) && (s < 91)) {
    return s;
  } else {
    return s - 32;
  }
}


char stringUpper(char s) { 
  printf("%c", s);
  if ((s > 64) && (s < 91)) {
    return s + 32;
  } else {
    return s;
  }
}



int main(void) {

  char inputString[1000];

  printf("Type in the sentence you want to mock: \n");
  scanf("%c", inputString);

  for (int i = 0; i < sizeof(inputString); i++) { 
    if (i % 2 == 0) { 
      inputString[i] = stringLower(inputString[i]);
    } else { 
      inputString[i] = stringUpper(inputString[i]);
    }
  }
  printf("%s", inputString);

  return 0;
}

