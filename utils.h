#ifndef __UTILS_H
#  define __UTILS_H
#  include "list.h"
#  include "array.h"

list_t *tolist(array_t * array);
array_t *toarray(list_t * list);

#endif