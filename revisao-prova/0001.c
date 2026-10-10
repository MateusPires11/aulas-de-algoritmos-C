

int a = 10, b = 20;
int *p = &a;

*p = *p + 5;
p = &b;
*p = *p - a;

printf("%d %d", a, b);