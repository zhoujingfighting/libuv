
#include "uv.h"
#include <string>


int main() {
  uv_loop_t *loop = uv_default_loop();
  printf("hello libuv");
  uv_run(loop, UV_RUN_DEFAULT);

  return 0;
}