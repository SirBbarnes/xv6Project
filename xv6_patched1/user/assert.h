#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

#ifndef _ASSERT_H_
#define _ASSERT_H_

assert(x) if (x) {} else {
	printf(1, "%s: %d ", _FILE_, _LINE_);
	printf(1, "assert failed (%s)\n", # x);
	printf(1, "TEST FAILED\n");
	exit();
}
#endif
