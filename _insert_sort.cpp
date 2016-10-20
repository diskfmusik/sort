#include <stdio.h>

// インサートソート
// ある程度ソートされていると強い

void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void main()
{
	// 6, 8 2 9 5
	// 6 8, 2 9 5
	// 2 6 8, 9 5
	// 2 6 8 9, 5
	// 2 5 6 8 9,

	int ary[] = { 6, 8, 2, 9, 5 };
	const int arySize = sizeof(ary) / sizeof(ary[0]);

	int lookIndex = 1;

	while (lookIndex < arySize)
	{
		int i = lookIndex;
		while (i > 0)
		{
			if (ary[i - 1] > ary[i])
			{
				swap(ary[i - 1], ary[i]);
			}
			else
			{
				break;
			}
			--i;
		}

		++lookIndex;
	}

	// ------------------------------------------------------------------------
	// result
	for (int i = 0; i < arySize; i++)
	{
		printf("%d ", ary[i]);
	}

	getchar();
}