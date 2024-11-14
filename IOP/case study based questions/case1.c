#include <stdio.h>
int main()
{
    printf("enter number of strings to be sorted")
    scanf("%d",&x);
    for (int n = 0; n < X; n++)
    {
    char (w_"%d",n)[5], med ;
    int i=3 ;
    fgets(w1, sizeof(w1), stdin);

    while (i>0)
    {
        if(w1[i]>w1[i-1])
        {
           med=(w_"%d",n)[i];
            (w_"%d",n)[i]=(w_"%d",n)[i-1];
            (w_"%d",n)[i-1]= med ;
            
            break;
        }
        i-- ;
        
    }
    puts(w1);
    }
    
   

    return 0;
}
