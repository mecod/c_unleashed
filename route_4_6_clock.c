#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    start = clock();
    printf("Clocks at start %f.\n", (double)start);

    printf("Please wait a few seconds and then press ENTER/RETURN key");
    fflush(stdout);

    getchar();
    /* the code you want timed goes here */
    end = clock();
    printf("Clocks at end %f.\n", (double)end);
    printf("Clocks per second %f.\n", (double)CLOCKS_PER_SEC);
    printf("Inteval = %.8f seconds\n", (double)(end - start) / (double)CLOCKS_PER_SEC);

    return 0;
}

