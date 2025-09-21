#include <stdio.h>

void reverse(int array[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array1[] = {10, 20, 30, 40, 50};
    int size1 = 5;    
    reverse(array1, size1);
    print_array(array1, size1);
    printf("\n");
    
    int array2[] = {60, 20, 80, 10};
    int size2 = 4;
    reverse(array2, size2);
    print_array(array2, size2);
    printf("\n");
}