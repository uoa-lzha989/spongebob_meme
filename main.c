#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

  char inputString[1000] = {0}; // setting blank array for input
  int caps = 0; // setting as a flag for if the last letter was caps or not


  printf("Type in the sentence you want to mock: \n");
  fgets(inputString, 1000, stdin); // gets the user input
  sscanf(inputString, "%c", inputString);


  for (int i = 0; i < sizeof(inputString); i++) { 
    if (caps == 0) { // tests to see if the caps was triggered
      caps = 1;
      if ((inputString[i] > 64) && (inputString[i] < 91)) { // testing for uppercase
        inputString[i] = inputString[i] + 32;
        printf("%c", inputString[i]);
      } else if ((inputString[i] > 96) && (inputString[i] < 123)){ // testing for lowercase
        inputString[i] = inputString[i];
        printf("%c", inputString[i]);
      } else {
      inputString[i] = inputString[i]; // leaves the character if it is not a letter
      printf("%c", inputString[i]);
      caps = 0;
      }
    } else { 
      caps = 0;
      if ((inputString[i] > 64) && (inputString[i] < 91)) {
        inputString[i] = inputString[i];
        printf("%c", inputString[i]);
      } else if ((inputString[i] > 96) && (inputString[i] < 123)){
        inputString[i] = inputString[i] - 32;
        printf("%c", inputString[i]);
      } else {
      inputString[i] = inputString[i];
      printf("%c", inputString[i]);
      caps = 1;
      }
    } 
  }
}