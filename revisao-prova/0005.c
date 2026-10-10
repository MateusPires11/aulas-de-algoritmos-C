void dobra(int v[], int n) {
    int i;
    for (i = 0; i < n; i++)
        v[i] = v[i] * 2;
}

int main() {
    int vet[4] = {1, 2, 3, 4};
    dobra(vet, 3);
    printf("%d %d", vet[2], vet[3]);
}