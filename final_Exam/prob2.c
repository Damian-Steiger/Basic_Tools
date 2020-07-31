
void printArr(int **, int);

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    int * arr[] = {&a, &b, &c, &d, &e};

    printArr(arr, 5);

    return 0;
}


void printArr(int ** arr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d\n", **(arr + i));
    }
}