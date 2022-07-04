#include<stdio.h>
int main()
{
    int arr[8]={9,19,29,39,49,59,69,79};

    printf("Array traversal using for loop : ");
    for(int i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }





    printf("\nArray traversal using while loop : ");
    int i=0;
    while (i<8)
    {
        printf("%d ",arr[i]);
        i++;
    }
    


    return 0;

}