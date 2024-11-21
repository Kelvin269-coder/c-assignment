#include <stdio.h>

int main() {
    float side, area;
    char choice;

    do {
        
        printf("Enter the length of the side of the square: ");
        scanf("%f", &side);
        if (side < 0) {
            printf("Error: Length cannot be less than 0. Please try again.\n");
        } else {
            
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
        }
        printf("Do you want to compute the area of another square? (y/n): ");
        getchar(); 
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y'); 

    return 0;
}