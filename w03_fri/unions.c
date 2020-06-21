#include <stdio.h>
#include <stdint.h>

union overlay {
    float f;
    uint32_t u;
};

int main() {
    union overlay x;
    x.u = 0x251108C4;
    printf("%.30lf\n", x.f);
    printf("%x\n", x.u);

    printf("\n");

    x.f = 0x251108C4;
    printf("%lf\n", x.f);
    printf("%x\n", x.u);
    // uint32_t x = 0x1ff << 23;
    // float y = (float)x;
    // printf("%lu\n", sizeof(y));
    // printf("%08x\n", x);
    // printf("%f", y);
    return 0;
}