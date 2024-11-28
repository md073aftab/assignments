#include <stdio.h>
int main()
{
    char w1[5],med;
    int i=3 ;
    fgets(w1, sizeof(w1), stdin);

    while (i>0)
    {
        if(w1[i]>w1[i-1])
        {
            med=w1[i];
            w1[i]=w1[i-1];
            w1[i-1]= med ;
            
            break;
        }
        i-- ;
        
    }
    puts(w1);

    return 0;
}
