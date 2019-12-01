#include <stdio.h>

int main(void)
{
    FILE *file;
    int i = 1;
    int j = 2;
    int k, l = 0;

    // textfile
    // file = fopen("test.csv", "w");
    // fprintf(file, "%d,%d", i, j);
    // fclose(file);

    // file = fopen("test.csv", "r");
    // fscanf(file, "%d,%d", &k, &l);
    // fclose(file);
    // printf("k = %d, l = %d\n", k, l);

    // binaryfile
    int buf = 0x1234ABCD;
    FILE *binaryfile;
    binaryfile = fopen("test.dat", "wb");
    fwrite(&buf, sizeof(buf), 1, binaryfile);
    fclose(binaryfile);

    // write array as binary
    int buf2[] = {10, 100, 1000, 10000};
    FILE *bfa;
    bfa = fopen("test2.dat", "wb");
    fwrite(buf2, sizeof(buf2), 1, bfa);
    fclose(bfa);

    // read array from binary file
    int buf3[4];
    FILE *bfar;
    bfar = fopen("test2.dat", "rb");
    fread(buf3, sizeof(buf3), 1, bfar);
    fclose(bfar);
    printf("buf3[0] = %d\n", buf3[0]);
    printf("buf3[3] = %d\n", buf3[3]);

    return 0;
}