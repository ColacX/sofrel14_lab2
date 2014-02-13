#include <vector>

//binary search O(log n)
bool member_sorted(int key, const std::vector<int>& A)
{
	int x, l, r;
	
	l = 0;
	r = A.size();

	do
	{
		x = (l + r) / 2;

		if (key < A[x])
			r = x - 1;
		else
			l = x + 1;
	
	} while (key != A[x] && l <= r);

	if (key == A[x])		return true;	else		return false;}
