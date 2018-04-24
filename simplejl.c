#include <julia.h>

int main (int argc, char *argv [])
{
  jl_init ();
  jl_eval_string ("@time print(sqrt(2.0))");
  jl_eval_string ("@time print(sqrt(2.0))");
  jl_eval_string ("@time print(sqrt(2.0))");
  jl_eval_string ("@time print(sqrt(2.0))");

  jl_atexit_hook (0);
  return 0;
}
