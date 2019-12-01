/*
 ============================================================================
 Name        : C_Dennis.c
 Author      : Tarak Chadalawada
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>
#include <stdalign.h>
#include "size_test.h"

//void array_test(int arr[])
//{
//	printf("%i", sizeof(arr));
//	printf("%d", arr[3]);
//}
// struct __attribute__((__packed__)) sample_s{
//	int var1;
//	char var_char;
//	int var2;
//};

void testStatic(int a)
{
	static int b;
	b = a;
	printf("%d", b);
}

int main(void) {
//	int arr[2] = {1,2};
//	int *x, y = 42;
//
//	x = (int*)malloc(sizeof(int)*10);
//
//	*(x+y) = 'X';
//	y[x] = 'X';
//
//	printf("%c", x[42]);
//	printf("%d", sizeof(y));
//	printf("sizeof int: %d \n", sizeof(int));
//	printf("sizeof char: %d \n", sizeof(char));
//	printf("sizeof struct: %d \n", sizeof(struct sample_s));
//
//	int a[] = {3,5,7,8,1,10};
//	int i, j, temp, n = 6;
//
//	for (i = 0; i <= n-1; ++i)
//	{
//		for (j = 0; j <= n-1-i; ++j)
//		{
//			printf("i is: %d\n", i);
//			printf("j is: %d\n", j);
//		}
//	}
	int var;
	for (var = 0; var < 20; ++var) {
		testStatic(var);
	}

//
//	float celc, fahr;
//	int lower, upper, step;
//	char c;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	fahr = lower;
//
//	printf("This is fahrenheit to celcius convertion\n");
//	while (fahr < upper) {
//		celc = (5.0 / 9.0) * (fahr - 32.0);
//		printf("%3.0f \t %6.2f\n", fahr, celc);
//		fahr += step;
//
//	}
//
//	celc = lower;
//	printf("This is celcius to fahrenheit convertion\n");
//	while (celc < upper) {
//		fahr = (celc + 32.0) / (5.0 / 9.0);
//		printf("%3.0f \t %6.2f\n", celc, fahr);
//		celc += step;
//	}
//
//	int c;
//	int char_cout = 0;
//	int line_cout = 0;
//	int blanks_cout = 0;
//	int tabs_cout = 0;
////	while ((c = getchar()) != EOF){
////		char_cout++;
////		if (c == '\n')
////		{
////			line_cout++;
////		}
////		else if (c == ' ')
////		{
////			putchar('\\b');
////			blanks_cout++;
////		}
////		else if (c == '\t')
////		{
////			putchar('\\t');
////			tabs_cout++;
////		}
////		else if (c == '\\')
////		{
////			putchar('\\');
////		}
////	}
//	typedef struct aligntest_s {
//		alignas(0) /*zero has no effect*/
//		char one;
//		int test_one;
//	} aligntest;
//	size_t align_size = alignof(aligntest);
//	printf("number of lines line_cout: %d\n", line_cout);
//	printf("number of characters chr_cout: %d\n", char_cout);
//	printf("number of blanks blanks_cout: %d\n", blanks_cout);
//	printf("number of tabs tabs_cout: %d\n", tabs_cout);
//	printf("align of: %d\n", align_size);
//
//	printf("End of file character: %d\n", EOF);
//
//	what_is_size();
//	array_test(arr);
	return 0;
}
