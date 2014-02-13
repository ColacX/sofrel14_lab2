#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "combining.h"

int main()
{
	FILE* in_file = stdin;
#ifdef WIN32
	in_file = fopen("in0.txt", "r");
#endif

	int integer;
	std::vector<int> A;

	while (fscanf(in_file, "%d\n", &integer) != EOF)
		A.push_back(integer);

	int key = 1459385121;
	printf("U:%d\n", member_unsorted(key, A));
	sort_unsorted(A);
	printf("S:%d\n", member_sorted(key, A));

	for (int ia = 0; ia < A.size(); ia++)
		printf("%d\n", A[ia]);

#ifdef WIN32
	getchar();
#endif
	return 0;
}
