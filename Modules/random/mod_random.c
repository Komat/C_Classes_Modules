/**
 * @description
 * @fileName mod_random.c.
 * @author komatsu
 * @date 8/5/16.
 * @version 0.0
 */

#include "mod_random.h"


static int is_init = 0;

int mod_random(void) {
  if (is_init != 0) {
    srand((unsigned int) time(NULL));
    is_init = 1;
  }
  return rand();
}
