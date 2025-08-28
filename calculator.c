#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

void clear_screen() { // - for clear_screen();
      system("cls"); // runs windows command "cls" to clear the console
    }

int main() {

    // Calculator.c
    float num1, num2, result;
    int dots = 5, delay = 100;
    int i, choice = 0;
    
    while (1) { // keep the menu showing until you chose number 5 which is the exit

    clear_screen();
    printf("\n\n\n---Calculator---\n\n\n");
    printf("1) Addition\n");
    printf("2) Subtract\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) Exit\n\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

      if (choice == 1) {

      printf("\n\n\n--Addition--\n\n");
      printf("Enter First Number: ");
      scanf("%f", &num1);
      printf("Enter Second Number: ");
      scanf("%f", &num2);

      result = num1 + num2;

      if (result == (int)result) { // added if, and else here so the answer will be either whole or with decimal
      printf("Result: %d", (int)result);

      } else {
        printf("Result: %lf", (double)result);
        
      }
      getch(); // - pause to see the result

    } else if (choice == 2) {

      printf("\n\n\n--Subtraction--\n\n");
      printf("Enter First Number: ");
      scanf("%f", &num1);
      printf("Enter Second Number: ");
      scanf("%f", &num2);
      
      result = num1 - num2;

      if (result == (int)result) {
        printf("Result: %d", (int)result);
        
      } else {
        printf("Result: %lf", (double)result);
        
      }
      getch(); //

    } else if (choice == 3) {

      printf("\n\n\n--Multiplication--\n\n");
      printf("Enter First Number: ");
      scanf("%f", &num1);
      printf("Enter Second Number: ");
      scanf("%f", &num2);
      
      result = num1 * num2;

      if (result == (int)result) {
        printf("Result: %d", (int)result);
        
      } else {
        printf("Result: %lf", (double)result);
        
      }
      getch();

    } else if (choice == 4) {


      printf("\n\n\n--Division--\n\n");
      printf("Enter First Number: ");
      scanf("%f", &num1);
      printf("Enter Second Number: ");
      scanf("%f", &num2);
      

      if (num2 == 0) {
        printf("Error: Division by zero is not allowed!"); // i added this if in here because division by zero is not allowed
        
      } else {
        result = num1 / num2;

        if (result == (int)result) {
        printf("Result: %d", (int)result);

        } else {
        printf("Result: %lf", (double)result);

        }
      }
      getch();

    } else if (choice == 5) {
      printf("\nExiting Program");
      for (i = 0; i < dots; i++) {
        printf(".");
        Sleep(delay);

      }
      break; // exit while loop
    }
    else {
      printf("\nInvalid choice! Press any key to try again");
      for (i = 0; i < dots; i++) {
        printf(".");
        Sleep(delay);

      }
      getch();

    }
    }
    
    return 0;

}
