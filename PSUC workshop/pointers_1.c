//getting array elements from pointers
int main()
{

    // defining array
    int arr[5] = { 1, 2, 3, 4, 5 };

    // defining the pointer to array
    int* ptr_arr = arr;//same as arr[0]

    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_arr++);//same as *(ptr_arr + 1)
    }

    return 0;
}
