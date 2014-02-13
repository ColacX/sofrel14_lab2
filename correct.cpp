#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <vector>
#include <algorithm>

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

	std::sort(A.begin(), A.end());

	for (int ia = 0; ia < A.size(); ia++)
		printf("%d\n", A[ia]);

	return 0;
}
