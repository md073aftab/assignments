//  WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

#include <stdio.h>
int main()
{
    int size,max ;
    printf("enter the size of array : ");
    scanf("%d",&size);

    if (size<0)
    {
        printf("invalid array size");
    }
    else
    {
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d of array : ",i);
        scanf("%d",&array[i]);

    }

    max = array[0] ;

    for (int i = 0; i < size; i++)
    {
      if (array[i]> max)       
       {
        max= array[i] ;
       }
    }
    
    printf("max element of array is : %d ", max);
    return 0;
    }
}
