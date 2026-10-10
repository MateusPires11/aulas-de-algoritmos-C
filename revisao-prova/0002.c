void troca(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

void soma10(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 3, b = 7;
    troca(a, b);
    soma10(&a);
    printf("%d %d", a, b);
}