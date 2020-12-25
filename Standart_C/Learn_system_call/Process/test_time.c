#include <stdio.h>
#include <time.h>

int main(void) {
    time_t since_epoch;
    struct tm* loc_time;
    since_epoch = time(NULL);
    loc_time = localtime(&since_epoch);
    printf("Curent year = %d\n",loc_time->tm_year + 1900);
    printf("Current month = %d\n",loc_time->tm_mon + 1);
    printf("Current day = %d\n",loc_time->tm_mday);
    printf("Current hour = %d\n",loc_time->tm_hour);
    printf("Current minunte = %d\n",loc_time->tm_min);
    printf("Current sec = %d\n",loc_time->tm_sec);
    printf("Since Epoch = %ld\n",since_epoch);
    char *data;
    data = ctime(&since_epoch);
    fputs(data,stdout);
    return 0;
}
