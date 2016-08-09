
#include <stdint.h>
#include <stdio.h>

void process();
uint32_t add(uint32_t a, uint32_t b);
int main() {
    printf(" hello from c call rust lib interface \n ");
    process();
    printf(" call from rust lib add interface %d:", add(100,99));
    return 0;
}


