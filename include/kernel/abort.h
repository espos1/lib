#ifndef ABORT_H
#define ABORT_H

/* * O ABORT recebe uma função 'f'. 
 * Ele executa a função, checa se o retorno é diferente de 0 (erro).
 * Se for erro, ele chama o k_abort interno.
 */
#define ABORT(f) do { \
    if ((f) != 0) { \
        k_abort("Falha na funcao: " #f); \
    } \
} while(0)

static inline void k_abort(const char* msg) {
    // Aqui entra o código de matar o processo ou travar
    while (1) {
        // CPU travada ou limpeza de processos
    }
}

#endif
