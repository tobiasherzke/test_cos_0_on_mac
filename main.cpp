#include <cstdio>
#include <cstdlib>

int main(int, char**) {
  float * buf = new float[1];
  buf[0] = (random() != 1234) ? 1.0f : 0.567891234f;
  printf("%.9g\n", buf[0] * 0.00141589157f + (1.0f-buf[0]) * 1.00000012f);
  return 0;
}
