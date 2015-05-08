
typedef int (*alarm)(int type);

alarm p[3];

/*
int (*p[3])(int type);
*/

void registerAlarm(alarm a);

int hitAlarm();
