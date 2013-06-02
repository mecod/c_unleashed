#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    int i, j;
    double x;
    
    start = clock();
    printf("Clocks at start %lu.\n", (unsigned long)start);
#if 0
    printf("Please wait a few seconds and then press ENTER/RETURN key");
    fflush(stdout);

    getchar();
#endif
    for (j = 0; j < 10; j++) {
    for (i = 0; i < 100000000; i++) {
        x = 3.45 *( 5.26 + 1);
	}
	}
    /* the code you want timed goes here */
    end = clock();
    printf("Clocks at end %f.\n", (double)end);
    printf("Clocks per second %f.\n", (double)CLOCKS_PER_SEC);
    printf("Inteval = %.8f seconds\n", (double)(end - start) / (double)CLOCKS_PER_SEC);

    return 0;
}

