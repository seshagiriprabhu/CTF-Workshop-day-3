int convert(char *str) {
    int result = atoi(str); return result;
}
int main(int argc, char **argv) {
    int i, sum;
    for (i = 0; i < argc; i++) sum += convert(argv[i]);
    printf("sum=%d\n", sum); return 0;
}
