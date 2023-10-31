#include <stdio.h>
main()
{
int time;
double money;
scanf("%d",&time);
if(time>0&&time<=800)
    money=time*0.9;

else if(time>800&&time<1500)
    money=time*0.9*0.9;

else if(time>=1500)
    money=time*0.9*0.9*0.79;

printf("%.1f",money);


}

