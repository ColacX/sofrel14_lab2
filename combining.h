#include "sorting.h"
#include "membership.h"

bool member_unsorted(int key, const std::vector<int>& A)
{
	auto B = A;
	sort_unsorted(B);
	return member_sorted(key, B);
}
