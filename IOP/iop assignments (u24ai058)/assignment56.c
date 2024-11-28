//  PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
//  NEGATIVE, AND ZERO ELEMENTS




#include <stdio.h>
int main()
{
    int num[10],sum=0,i,pos_num=0,neg_num=0,zero_num=0 ;
    for ( i = 0; i < 10; i++)
    {
        printf("enter value of  element %d : ",i);
        scanf("%d",&num[i]);

        if (num[i]>0)
        {
            pos_num= pos_num +1;
        }
         if (num[i]<0)
        {
            neg_num= neg_num +1;
        }
         if (num[i]==0)
        {
            zero_num= zero_num +1;
        }
        
         
    }

    printf("total no positive num is %d\n",pos_num);
    printf("total no negative num is %d\n",neg_num);
    printf("total no zero num is %d\n",zero_num);
    
    
    return 0;
}
