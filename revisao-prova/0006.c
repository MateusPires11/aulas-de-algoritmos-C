void calc(int a, int b, int *s, int *m) {
    *s = a + b;
    *m = a * b;
}

int main() {
    int s = 0, m = 0;
    calc(2, 5, &s, &m);
    calc(s, m, &m, &s);
    printf("%d %d", s, m);
}