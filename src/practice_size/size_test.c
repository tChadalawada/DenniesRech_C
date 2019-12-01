/*
 * size_test.c
 *
 *  Created on: 15 Mar 2019
 *      Author: tarak
 */

/*
 * size_test.c
 *
 *  Created on: 15 Mar 2019
 *      Author: tarak
 */
#include <stdio.h>
#include <stdlib.h>
#include "size_test.h"

void what_is_size(void)
{
	int s_size = sizeof(bitfield_size_s);
	printf("size of bitfield_struct: %d\n", s_size);

	union_one.flags_one.one_b0 = 123;
	printf("union_struct first element: %d\n", union_one.array[0]);
}

