//Insert 1303 at beginning

#include<stdio.h>


int main()
{
    int arr[10]={9,19,29,39,49,59,69,79};
    int key=1303, pos=0; 
    int n=8,i=0;    //n=start insertion from   i=loop variable

    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1]; // Doing shifting operation
    }

    arr[pos]=key; // Replace 1303 with 9 at 4th index 

    for(int i=0;i<=n;i++)
    {
        printf("\t%d\n",arr[i]);
    }
    return 0;

}
