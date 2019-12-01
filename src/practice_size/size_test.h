/*
 * size_test.h
 *
 *  Created on: 15 Mar 2019
 *      Author: tarak
 */

#ifndef SRC_PRACTICE_SIZEOF_SIZE_TEST_H_
#define SRC_PRACTICE_SIZEOF_SIZE_TEST_H_


typedef struct _bitfield_size_s
{
	unsigned int b0;
	unsigned int b1;
	unsigned int b2;
	unsigned int b3 :1;
	unsigned int b4 :1;
	unsigned int b5 :1;
	unsigned int b6 :1;
	unsigned int b7:1;
}bitfield_size_s;

typedef union _union_one_s
{
	struct flags
	{
		unsigned int one;
		unsigned int two;
		unsigned int three;
	}flags;
}union_one_s;

typedef union
{
	struct flags_one
	{
		unsigned int one_b0;
		unsigned int one_b1;
		unsigned int one_b2;
	}flags_one;

	unsigned int array[3];
}bitfield_size_u;

bitfield_size_u union_one;

struct
{
	unsigned int el_one;
	unsigned int el_two;

}el_str;

void what_is_size(void);

#endif /* SRC_PRACTICE_SIZEOF_SIZE_TEST_H_ */
