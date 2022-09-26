#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <span>
#include <string_view>

#define countof(x) (sizeof(x) / sizeof((x)[0]))

template <size_t x, size_t y>
size_t cmp(const char(&arroz)[x], const char(&cenoura)[y])
{
    return y;
}

int main()
{
    char cenario[] = "ola eu sou o jorge";
    auto chourico = cmp(cenario, "ola eu sou o edgare");
    printf("%llu", chourico);
}