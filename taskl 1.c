#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();

int main() {
    int choice;

    while(1) { 
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n"); 
    }

}

void addition() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d + %d = %d\n", a, b, a + b);
}

void subtraction() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d - %d = %d\n", a, b, a - b);
}

void multiplication()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d * %d = %d\n", a, b, a * b);
}

void division()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) 
	{
        printf("Result: %d / %d = %d\n", a, b, a / b);
    } else 
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) 
	{
        printf("Result: %d %% %d = %d\n", a, b, a % b);
    } else 
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}
