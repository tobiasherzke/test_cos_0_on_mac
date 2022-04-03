#include "hanning.h"

float (*fun)(float);

int main(int, char**) {
  fun = MHAWindow::hanning;
  float lev_new = 0.00141589157f;
  float lev_old = 1.00000012f;
  unsigned fragsize = 200;
  float x = 0;
  float * buf = new float[1];
  float * results = new float[fragsize];
  std::fill_n(results, fragsize, 0.0f);
  buf[0] = fun(x);
  for (unsigned k = 0; k < fragsize; ++k)
    results[k] += buf[0] * lev_new + (1.0f-buf[0]) * lev_old;
  printf("%.9g\n", results[0]);
  return 0;
}
