#include <stdio.h>

struct ola {
    int a, b, c;
};

int sum(const ola a, const int b)
{
    return a.b + b;
}

int main()
{
    ola xau;
    xau.b = 1;
    int b = 2;
    auto c = sum(xau, b);
    printf("%d + %d = %d\n", xau.a, b, c);
}