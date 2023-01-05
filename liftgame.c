#include <stdio.h>

#define NUM_FLOORS 5

int main(void) {
  int currentFloor = 0;
  int destinationFloor = 0;

  printf("Welcome to the elevator simulator!\n");

  while (1) {
    printf("\nYou are currently on floor %d.\n", currentFloor);
    printf("Enter the number of the floor you would like to go to: ");
    scanf("%d", &destinationFloor);

    if (isdigit(destinationFloor)||destinationFloor < 0 || destinationFloor >NUM_FLOORS) {
      printf("Error: there is no floor %d\n", destinationFloor);
      continue;
    }

    while (currentFloor != destinationFloor) {
      if (currentFloor < destinationFloor) {
        currentFloor++;
      } else {
        currentFloor--;
      }
      printf("You are now on floor %d\n", currentFloor);
    }
    printf("You have arrived at your destination: floor %d\n", currentFloor);
  }

  return 0;
}
