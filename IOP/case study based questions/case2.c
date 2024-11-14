#include<stdio.h> 

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
     int jar[n];
     for(int i=0;i<n;i++)
     {
        jar[i]=0;
     }
    while(m--)
    {
        int a,b,k;
        scanf("%d%d%d",&a,&b,&k);
        for(int i=a-1;i<b;i++){
            jar[i]=jar[i]+k;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+jar[i];
    }
    printf("%d\n",sum/n);
    return 0 ;
}