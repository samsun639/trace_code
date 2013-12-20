#include <stdio.h>

void test(char **p)
{

    printf("%s\n",p[0]);
    printf("%s\n",p[1]);
}

int main(int argc, char *argv[])
{

    char *p[] = {"hello", "world"};

    printf("Hello world\n");
    printf("%s\n",p[0]);

    test(p);

    return 0;
}
