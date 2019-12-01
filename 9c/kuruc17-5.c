#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("student.csv", "w");
    fprintf(file, "%d,%s,%d\n", 1, "nobi-nobita", 0);
    fprintf(file, "%d,%s,%d\n", 2, "minamoto-shizuka", 90);
    fprintf(file, "%d,%s,%d\n", 3, "goda-takeshi", 40);
    fprintf(file, "%d,%s,%d\n", 4, "honegawa-suneo", 70);
    fclose(file);
    return 0;
}