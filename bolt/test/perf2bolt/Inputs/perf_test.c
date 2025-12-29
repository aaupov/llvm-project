#include <signal.h>
#include <unistd.h>

int main() {
  kill(getpid(), SIGUSR2);
  return 0;
}
