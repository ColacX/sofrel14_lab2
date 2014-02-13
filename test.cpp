#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <random>

int main()
{
	std::random_device rd;
	std::default_random_engine dre(rd());
	std::uniform_int_distribution<int> d(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

	for (int ia = 0; ia < 20; ia++)
		printf("%d\n", d(dre));

	return 0;
}
