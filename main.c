#include <stdio.h>
#include <limits.h>
#include <math.h>
/*
my first c program
*/

int selectionFunc(void){
  int selection = 0;
  do{
    printf("Enter selection (1/2): ");
    scanf("%d", &selection);
  }while(selection > 2 || selection < 1);
  return selection;
}

int main(void){
  printf("\n\n\n");
  printf("Triangle Math! \n\n");


  printf("1. Determine the 3rd side of a right triangle\n");
  printf("2. Determine whether a triangle is right or not\n\n");
  
  int selection = selectionFunc();
  if(selection == 1){
    printf("Enter the value for the first side: ");
    float firstSide = 0.0;
    scanf("%f", &firstSide);
    printf("Now enter the value for the second side: ");
    float secondSide = 0.0;
    scanf("%f", &secondSide);
    float calculatedSide = sqrt((firstSide*firstSide) + (secondSide * secondSide));

    printf("The final side of the right triangle is: %f", calculatedSide);
  }
  else if(selection == 2){
    printf("Enter the value for the first side: ");
    float firstSide = 0.0;
    scanf("%f", &firstSide);

    printf("Now enter the value for the second side: ");
    float secondSide = 0.0;
    scanf("%f", &secondSide);

    printf("Now enter the value for the third side: ");
    float thirdSide = 0.0;
    scanf("%f", &thirdSide);

    int biggestSide = 0;
    int firstSmallSide = 0;
    int secondSmallSide = 0;
    if (firstSide > secondSide && firstSide > thirdSide){
      biggestSide = firstSide;
      firstSmallSide = secondSide;
      secondSide = thirdSide;
    }
    else if (secondSide > firstSide && secondSide > thirdSide){
      biggestSide = secondSide;
      firstSmallSide = firstSide;
      secondSmallSide = thirdSide;
    }
    else{
      biggestSide = thirdSide;
      firstSmallSide = firstSide;
      secondSmallSide = secondSide;
    }

    float longestPythg = biggestSide * biggestSide;
    float bothSidePythg = (firstSmallSide * firstSmallSide) + (secondSmallSide * secondSmallSide);
    if(longestPythg == bothSidePythg){
      printf("\n This is a right triangle");
    }
    else{
      printf("\n This is not a right triangle");
    }

  }
}