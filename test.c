#include "cwisstable.h"
#include <stdio.h>


CWISS_DECLARE_FLAT_HASHSET(MyIntSet, int);


int main(void) {
  MyIntSet set = MyIntSet_new(8);
  
  MyIntSet_dump(&set);
  for (int i = 0; i < 86; ++i) {
    int val = i;
    MyIntSet_insert(&set, &val);
  }
  int value = 15;
  //MyIntSet_erase(&set, &value);

  MyIntSet_dump(&set);

  MyIntSet_erase(&set, &value);
  MyIntSet_dump(&set);

  int k = 4;
  //assert(!MyIntSet_contains(&set, &k));
}
