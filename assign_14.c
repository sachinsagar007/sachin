int main()
{
    struct member {
    int status1;
    int status2;
    int size;
    char data;
    };
    struct member m1;
    printf("sizeof(struct member)=%d\n", sizeof(struct member));

    union mem {
    int status1;
    int status2;
    int size;
    char data;
    };
    union mem m2;
    printf("sizeof(union member)=%d\n", sizeof(union mem));

}

