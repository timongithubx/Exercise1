#include <stdio.h>
#include <stdlib.h>
#include "indicator.h"

int alarm1(int type){

    printf("Meltdown (cb1) of type %i\n",type);
    return 0;
}

int alarm2(int type){

    printf("Meltdown (cb2) of type %i\n",type);
    return 0;
}

int alarm3(int type){

    printf("Meltdown (cb3) of type %i\n",type);
    return 0;
}

int main(){

    registerAlarm(alarm1);
    registerAlarm(alarm2);
    registerAlarm(alarm3);

    hitAlarm();

    return 0;
}

