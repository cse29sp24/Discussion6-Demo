#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMSZ 1024

int main()
{
    void *mem = malloc(MEMSZ);
    memset(mem, 0x0, MEMSZ);

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
