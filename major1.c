#include "major1.h"
#include <stdio.h>

int main() {
    int choice, num, mask;

    while (1) {
        printf("Choose an operation:\n1. Power of 2\n2. Reverse Bits\n3. Replace Bit Position\n4. Palindrome\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:
                power_of_2(num);
                break;
            case 2:
                reverse_bits(num);
                break;
            case 3:
                printf("Enter a mask: ");
                scanf("%d", &mask);
                replace_bit_position(num, mask);
                break;
            case 4:
                if (check_palindrome(num))
                    printf("%d is a palindrome\n", num);
                else
                    printf("%d is not a palindrome\n", num);
                break;
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
