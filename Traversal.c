#include<stdio.h>

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        // printf("%d\n", arr[i]);
        printf("%d ", arr[i]);
    }
    // printf("\n");
}

int main(){
    int arr[100] = {2,4,16,256};
    display(arr, 4);        //If 6 is written at 4 then 0 will be printed 2 times, if 101 then 101 will be a garbage value.
    return 0;
}