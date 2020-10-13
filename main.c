#include <stdio.h>
#include <string.h>

int main(void) {

  char inputString[1000];

  printf("Type in the sentence you want to mock: \n");
  scanf("%s", inputString);

  for (int i = 0; i < sizeof(inputString); i++) { 
    if (i % 2 == 0) { 
      strlwr(inputString[i]);
    } else { 
      strupr(inputString[i]);
    }
  }
  printf("%s", inputString);

  return 0;
}