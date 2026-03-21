#include <stdio.h>

void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);

int main() { int n;
    printf("enter value of n: ");
    scanf("%d",&n);

   
       if(n<=0) {
        printf("Invalid input");
        return 0;
    }
     int a[n],b[n];
    // Read first array
    read_array(n, a);

    // Read second array
    read_array(n, b);

    // Swap arrays
    swap_array(n, a, b);

    // Print swapped arrays
    print_array(n, a);
    printf("\n");
    print_array(n, b);

    return 0;
}

void read_array(int n, int arr[]) {
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    // Write code here to read n elements into the array
}

void print_array(int n, int arr[]) {
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    // Write code here to print array elements separated by space
}

void swap_array(int n, int a[n], int b[n]) {
    int temp;
    for(int i=0;i<n;i++)
{
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
}
    // Write code here to swap elements of arrays a and b
}