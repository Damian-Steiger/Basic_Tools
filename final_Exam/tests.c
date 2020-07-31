#include <string.h>

int main(int argc, char const *argv[])
{
    char *planets[] = {"SUN","MERCURY","MARS","EARTH","VENUS","JUPITER","URANUS","SATURN","PLUTO"};
    int i;

    for (i = 0; i < sizeof(planets) / sizeof(char *); i++) {
        printf("%s    |   %d\n", *(planets + i), strlen(*(planets + i)));
    }

    return 0;
}
