#include <stdio.h>

// セレクトソート
// バブルソートのちょっと違うバージョン

void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void main()
{
	int ary[] = { 6, 2, 8, 7, 1 };
	const int arySize = sizeof(ary) / sizeof(ary[0]);

	for (int i = 0; i < arySize; i++)
	{
		int index = i;

		for (int j = i + 1; j < arySize; j++)
		{
			if (ary[i] > ary[j])
			{
				index = j;
			}
		}

		if (ary[i] > ary[index])
		{
			swap(ary[i], ary[index]);
		}

	}

	// ------------------------------------------------------------------------
	// result
	for (int i = 0; i < arySize; i++)
	{
		printf("%d ", ary[i]);
	}

	getchar();
}