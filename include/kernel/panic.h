#ifndef PANIC_H
#define PANIC_H

#include <kernel/types.h>

static inline void k_panic(const char* msg, const char* file, int line) {
    while (1) {
        // CPU travada aqui
    }
}

#define panic(msg) k_panic(msg, __FILE__, __LINE__)

#endif
