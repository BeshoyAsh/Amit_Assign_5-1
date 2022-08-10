#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_1 [5];
    int i,j;
    for(i=0;i<5;i++) // loop to fill the array we made of 5 elements
        {
           printf("Enter the value[%d]: ",i);
           scanf("%d",&arr_1[i]);
        }
    for(i=0;i<5;i++) //printing the array
           {
           printf("%d\t",arr_1[i]);
           }

    int max=arr_1[0];
    int min=arr_1[0];

    for(j=1;j<5;j++)
    {
        if(max<arr_1[j])
        max=arr_1[j];
    }

    for(j=1;j<5;j++)// minimum number comparison
    {
        if(min>arr_1[j])
        min=arr_1[j];
    }
    printf("\n max number is= %d",max);
    printf("\n minimum number is= %d",min);

    return 0;
}
