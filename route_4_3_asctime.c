#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t timeval;
    struct tm *tmptr;

    timeval = time(NULL);

    if (timeval == (time_t)-1) {
        printf("Sorry, the time is unavailable on this system.\n"); 
        exit(EXIT_FAILURE);
    }

    printf("Time as local time is %s", ctime(&timeval));

    if ((tmptr = gmtime(&timeval)) == NULL) {
        printf("UTC time is unavailable.\n");
    } else {
        printf("Time as UTC time is %s", asctime(tmptr));
    }

    return 0;
}

