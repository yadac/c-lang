// character code
// end of string = eos
// print A to Z
// string realized by char[]

#include <stdio.h>
#include <string.h>

int main(void)
{
    char family[100], first[100];

    printf("input first name\n");
    scanf("%s", first);

    printf("input family name\n");
    scanf("%s", family);
    // strcat(first, family);

    char name[200];
    sprintf(name, "%s.%s", first, family);
    printf("hello %s\n", name);

    return 0;
}