#include <vector>

//selection sort O(n^2)
void sort_unsorted(std::vector<int>& A)
{
	for (int ia = 0; ia < A.size(); ia++)
	{
		int minimal_index = ia;

		//search
		for (int ib = ia + 1; ib < A.size(); ib++)
		{
			if (A[ib] < A[minimal_index])
				minimal_index = ib;
		}

		//swap
		int old_value = A[ia];
		A[ia] = A[minimal_index];
		A[minimal_index] = old_value;
	}
}
