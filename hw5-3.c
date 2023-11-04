#include <stdio.h>
main()
{
    int h,phm;
    scanf("%d%d",&h,&phm);
    double salary;
    if(h<=60)
        salary=h*phm;
    else if(h>60&&h<=120){
        h-=60;
        salary=60*phm+h*phm*1.33;
    }else if(h>120){
        h-=120;
        salary=60*phm+60*phm*1.33+h*phm*1.66;
    }

    printf("%.1f",salary);


}

