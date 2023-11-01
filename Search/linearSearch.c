// linear search
#include <stdio.h>
#include <conio.h>

int main(void)
{
    // variable declearation
    int size, i, arr[100], input, flag=0;

    // array size declearation
    printf("Enter the araay size: ");
    scanf("%d", &size);

    // array input
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // take input from user
    printf("\nEnter the number that you want to search: ");
    scanf("%d", &input);

    // searching
    for (i = 0; i < size; i++)
    {
        if (input == arr[i])
        {
            flag=1;
            break;
        }
    }

    // show input present or not
    if (flag == 1)
    {
        printf("Your searching element is present in the array %d position", i);
    }
    else
    {
        printf("Your searching element is not present in the array");
    }
}