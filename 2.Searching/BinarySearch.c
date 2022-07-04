
#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
    int low=0,high=(size-1);
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
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
    int index=binarySearch(arr,size,element);
    printf("Element %d was found at index %d",element,index);
    return 0;
}