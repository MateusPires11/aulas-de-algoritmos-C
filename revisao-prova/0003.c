int vet[5] = {2, 4, 6, 8, 10};
int *p = vet;

p++;
*p = *p + 1;
p += 2;
*p = 0;

printf("%d %d %d", vet[1], vet[3], *p);