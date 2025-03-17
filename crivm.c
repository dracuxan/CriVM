#include "crivm.h"

typedef enum {
  INST_PUSH,
  INST_POP,
  INST_ADD,
  INST_PRINT
} Ins_set;

Ins_set program[PROGRAM_SIZE];

int main() {
  printf("Hello WOrld\n");
  return 0;
}
