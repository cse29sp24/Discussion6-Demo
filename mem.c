#include <stdio.h>
#include <stdlib.h>

#define MEMSZ 1048576

int main()
{
    char *mem = malloc(MEMSZ);

    /* Write the memory out to file */
    FILE *fp = fopen("mem.img", "w+");
    if (!fp) {
        perror("open");
        return EXIT_FAILURE;
    }
    fwrite(mem, MEMSZ, 1, fp);
    fclose(fp);
    free(mem);
    return EXIT_SUCCESS;
}
