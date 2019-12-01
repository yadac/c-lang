// text file
// binary file
// file.dat, binary format
// 0A 00 00 00
// 14 00 00 00
// 1E 00 00 00

#include <stdio.h>

int main(void)
{

    FILE *fp;
    int dat[3] = {10, 20, 30};

    fp = fopen("file.dat", "wb");
    fwrite(&dat, sizeof(dat), 1, fp);
    fclose(fp);

    return 0;
}