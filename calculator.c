#include<stdio.h>

int main() {
    int ch, a, b;
    char c;
    do {
        printf("\nMenu\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Square");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("\nEnter two integer values: ");
                scanf("%d %d", &a, &b);
                printf("\nOutput: %d", (a + b));
                break;
            case 2:
                printf("\nEnter two integer values: ");
                scanf("%d %d", &a, &b);
                printf("\nOutput: %d", (a - b));
                break;
            case 3:
                printf("\nEnter two integer values: ");
                scanf("%d %d", &a, &b);
                printf("\nOutput: %d", (a * b));
                break;
            case 4:
                printf("\nEnter two integer values: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    printf("\nOutput: %d", (a / b));
                } else {
                    printf("\nError: Division by zero!");
                }
                break;
            case 5:
                printf("\nEnter two integer values: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    printf("\nOutput: %d", (a % b));
                } else {
                    printf("\nError: Modulus by zero!");
                }
                break;
            case 6:
                printf("\nEnter an integer value: ");
                scanf("%d", &a);
                printf("\nOutput: %d", (a * a));
                break;
            default:
                printf("\nInvalid choice!");
        }
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &c);
    } while(c == 'Y' || c == 'y');

    printf("\nThank You!!!\n");
    return 0;
}
