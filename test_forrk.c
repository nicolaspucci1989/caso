#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  printf("PID: %d\n", (int) getpid() );
  int rc = fork();
  int i;
  if (rc < 0) {
    fprintf(stderr, "fork fail\n");
    exit(1);
  } else if(rc == 0) {
      //child
      while(i <= 50) {
        printf("Child proc PID: %d.\ni=%d\n", (int) getpid(), i );
        i++;
      }
    } else {
      //parent
      while(i <= 50){
        printf("Parent proc PID: %d.\ni=%d\n", (int) getpid(), i );
        i++;
      }
    }
  return 0;
}
