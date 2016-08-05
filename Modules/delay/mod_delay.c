/**
 * @description
 * @fileName delay.cpp.
 * @author komatsu
 * @date 8/5/16.
 * @version 0.0
 */

#include "mod_delay.h"

int mod_delay(unsigned long x) {

  clock_t c1 = clock(), c2;

  do {
    if ((c2 = clock()) == (clock_t) -1)
      return 0;
  } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

  return 1;
}


