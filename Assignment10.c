//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


int findType(int n, int *) //complete this function
{
  
  #include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7}; // Example array, change this as per requirement
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if (even == 0 && odd > 0) {
        printf("ODD ARRAY\n");
    } else if (odd == 0 && even > 0) {
        printf("EVEN ARRAY\n");
    } else {
        printf("MIXED ARRAY\n");
    }

    return 0;
}
}
int main()
{
  return 0;
}
