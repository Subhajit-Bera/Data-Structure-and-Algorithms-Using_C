#include<stdio.h>


int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}



int main()
{
    int arr[]={10,17,20,23,28};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter the element : ");
    scanf("%d",&element);
    int index=linearSearch(arr,size,element);
    printf("Element %d was found at index %d",element,index);
    return 0;
}