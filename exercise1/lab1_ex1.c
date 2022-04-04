#include <stdio.h>
#include "lbyec2a.h"

int get_choice(void)
{
    int choice = 0;
    printf("Menu: \n");
    printf("1. Display the numbers\n");
    printf("2. Display it in reverse order\n");
    printf("3. Display values of even indices\n");
    printf("4. Display values of odd indices\n");
    printf("5. Rotate array by k (Forward)\n");
    printf("6. Rotate array by k (Backward)\n");

    printf("choice: ");
    scanf("%d", &choice);
    return choice;
}

void process_array(int array[], int size)
{
    int choice = get_choice();
    if (choice == 1)
    {
        display_original(array, size);
    }
    else if (choice == 2)
    {
        display_reverse(array, size);
    }
    else if (choice == 3)
    {
        display_even(array, size);
    }
    else if (choice == 4)
    {
        display_odd(array, size);
    }
    else if (choice == 5)
    {
        rotate_forward(array, size);
    }
    else if (choice == 6)
    {
        rotate_backward(array, size);
    }
}

int main(void)
{
    int num_array[10];

    get_numbers(10, num_array);

    process_array(num_array, 10);

    return 0;
}
