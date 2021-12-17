#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*   A[5]=5 2 4 6 1 3
         5 2 4 6 1 3
         2 5 4 6 1 3
         2 4 5 6 1 3
         2 4 5 1 6 3
         2 4 1 5 6 3
         2 1 4 5 6 3
         1 2 4 5 6 3
         1 2 4 5 3 6
         1 2 4 3 5 6
         1 2 3 4 5 6
    */
    int arr[5] = {5, 2, 4, 6, 1, 3};
    int j,temp;

    printf("Duzensiz dizi || Unsorted Array \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");

    //section of sorting
    for(int i=1;i<5;i++)
    {
        temp=arr[i];
        j=i-1;
        while(arr[j]<temp&& j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    printf("Duzenli dizi || sorted Array \n");
    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
