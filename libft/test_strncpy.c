#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strncpy(void)
{
	const char *src1 = "COPY THIS";
	const char *src2 = "";
	const char *src3 = "\0";
	const char *src4 = "   	hehe hehe 		...";
	char dest[100];
	int i = 0;
	if (strcmp(ft_strncpy(dest, src1, 10), strncpy(dest, src1, 10)) == 0)
		i++;
	else
		printf("testcase 1 failed.\n");
	if (strcmp(ft_strncpy(dest, src2, 1), strncpy(dest, src2, 1)) == 0)
		i++;
	else
		printf("testcase 2 failed.\n");
	if (strcmp(ft_strncpy(dest, src3, 1), strncpy(dest, src3, 1)) == 0)
		i++;
	else
		printf("testcase 3 failed.\n");
	if (strcmp(ft_strncpy(dest, src4, 10), strncpy(dest, src4, 10)) == 0)
		i++;
	else
		printf("testcase 4 failed.\n");
	printf("ft_strncpy: %d/4 tests passed.\n", i);
}
