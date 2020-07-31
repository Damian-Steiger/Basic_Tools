

int main(int argc, char const *argv[])
{


    int x, y;
    x = 1; y = 1;

    y = x++;

    printf("x=%d    y=%d\n", x, y);


    int a = 3.8;
    a *= 2.7;
    printf("%d  %d\n", a, sizeof(a));

    return 0;
}
