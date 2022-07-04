#include<stdio.h>
int main()
{
    int arr[10]={9,19,29,39,49,59,69,79};    //Initalize the array
    int key=99, pos=4;          //key= value we want to insert  pos=position of insertion
    int n=8,i=0;               //n=start insertion from   i=loop variable
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];     // Doing shifting operation
    }

    arr[pos]=key;           // Replace 49 with 99 at 4th index 

    for(int i=0;i<=n;i++)
    {
        printf("\t%d\n",arr[i]);    //Travesing the array 
    }

}