#include <stdlib.h>

void IMPEDIR_DE_APAGAR_PASTA_ROOT(void) {
  system("sudo chattr +i /");
}
