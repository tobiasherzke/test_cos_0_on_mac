#include <cstdio>
#include <cstdlib>

int main(int, char**) {
  auto r = random();
  // buf will always contain 1.0 but compiler does not know.
  float buf = (r != 1234) ? 1.0f : 0.567891234f;
  printf("result is %.9g while buf contains %.9g\n", buf * 0.00141589157f + (1.0f-buf) * 1.00000012f, buf);
  // Repeat when compiler knows that buf[0] is 1
  buf = 1.0f;
  printf("result is %.9g while buf contains %.9g\n", buf * 0.00141589157f + (1.0f-buf) * 1.00000012f, buf);
  printf("random() returned %ld\n", r);
  return 0;
}
