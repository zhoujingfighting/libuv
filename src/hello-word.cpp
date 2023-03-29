#include "common.h"
#include <string>


void hello_word() {
  uv_loop_t *loop = uv_default_loop();
  std::cout << "hello libuv" << std::endl;
  uv_run(loop, UV_RUN_DEFAULT);
}