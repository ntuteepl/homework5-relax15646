#include <stdio.h>
#include <assert.h>

int main()
{
    int H,M;
    scanf("%d%d",&H,&M);
    assert(H>=1&&H<=12);
    assert(M>=00&&M<=59);

    float a=(H%12)*30+M*0.5,b=M*6;
    float k=(a>b)? a-b:b-a;
    if(k>180)
        k=360-k;


    printf("%.3f",k);

}
