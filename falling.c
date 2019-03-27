#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int sig[]={1,1,1,0,1,0,1,0,1,1};
    int sig[10];
    int i,rising_edge=0,falling_edge=0,level=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&sig[i]);
    }
    for(i=0;i<10;i++)
    {
    if((sig[i]==0)&&(sig[i+1]==1))
    {
        printf("Sample %d = Rising Edge Detected\n",i);
        rising_edge=rising_edge+1;
    }
    else if((sig[i]==1)&&(sig[i+1]==1))
    {
        printf("Sample %d = Level Detected\n",i);
        level=level+1;
    }
    else if((sig[i]==1)&&(sig[i+1]==0))
    {
        printf("Sample %d = Falling Edge Detected\n",i);
        falling_edge=falling_edge+1;
    }
    }
    printf("No Of Rising Edges is %d\n",rising_edge);
    printf("No Of Levels is %d\n",level);
    printf("No Of Falling Edges is %d\n",falling_edge);
    return 0;
}
