#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
 
void createArray(struct myArray * a, int tSize, int uSize)
{        //Address
    // (*a).total_size = tSize;                                    //Dereferencing the address(If we want structure form Structure's Address then use *)
    // (*a).used_size = uSize;                                     //* is called as value at operator(when we want value of the address)
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));
    a->total_size = tSize;                                         //Dereferencing the address(If we want structure form Structure's Address then use *)
    a->used_size = uSize;                                          //* is called as value at operator(when we want value of the address)
    a->ptr = (int *)malloc(tSize * sizeof(int));
};

void show(struct myArray *a)
{
    for(int i=0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct myArray *a)
{
    int n;
    for(int i=1; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d\n", &n);
        (a->ptr)[i] = n;
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 3);
    printf("We are running setVal now\n");   
    setVal(&marks);
    printf("We are running show now\n");
    show(&marks);                                                  //If we want structure address from structure then ue &
    return 0;                                                      //& is called address of operator
};