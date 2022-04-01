#include "hanning.h"

float (*fun)(float);

int main(int, char**) {
  fun = MHAWindow::hanning;
  float x = 0;
  float one = fun(x);
  printf("%.9f\n", one);
  return 0;
}

