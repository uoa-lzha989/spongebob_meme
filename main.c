#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// char stringLower(char s) { 
//   if ((s > 64) && (s < 91)) {
//     return s;
//   } else {
//     return s - 32;
//   }
// }


// char stringUpper(char s) { 
//   printf("%c", s);
//   if ((s > 64) && (s < 91)) {
//     return s + 32;
//   } else {
//     return s;
//   }
// }


// int main(void) {

//   char inputString[1000];

//   printf("Type in the sentence you want to mock: \n");
//   scanf("%c", inputString);

//   for (int i = 0; i < sizeof(inputString); i++) { 
//     if (i % 2 == 0) { 
//       inputString[i] = stringLower(inputString[i]);
//     } else { 
//       inputString[i] = stringUpper(inputString[i]);
//     }
//   }
//   printf("%s", inputString);

//   return 0;
// }



int main(void) {

  char inputString[1000] = {0};
  int caps = 0;
  int stringSize;

  printf("Type in the sentence you want to mock: \n");
  fgets(inputString, 1000, stdin);
  sscanf(inputString, "%c", inputString);

  

  for (int i = 0; i < sizeof(inputString); i++) { 
    if (caps == 0) { 
      if ((inputString[i] > 64) && (inputString[i] < 91)) {
        inputString[i] = inputString[i] + 32;
        caps = 1;
      } else if ((inputString[i] > 96) && (inputString[i] < 123)){
        inputString[i] = inputString[i];
        caps = 1;
      } else {
      inputString[i] = inputString[i];
      }
    } else { 
      if ((inputString[i] > 64) && (inputString[i] < 91)) {
        inputString[i] = inputString[i];
        caps = 0;
      } else if ((inputString[i] > 96) && (inputString[i] < 123)){
        inputString[i] = inputString[i] - 32;
        caps = 0;
      } else {
      inputString[i] = inputString[i];
      }
    } 
  }

  for (int i = 0; i < sizeof(inputString); i++) {
   if (inputString[i] != 0) {
     stringSize = i;
   } 
  }

  for (int i = 0; i < stringSize + 1; i++) {
    printf("%c", inputString[i]);
  }

  return 0;
}
