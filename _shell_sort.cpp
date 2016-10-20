#include <stdio.h>
#include <time.h>

// シェルソート

// クイックソート
// からの　シェルソート

void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void main()
{
	int ary[] = { 6, 2, 8, 7, -1, 23, 3, 4, 5 };
	const int arySize = sizeof(ary) / sizeof(ary[0]);

	const int divideMax = 3;
	int divide = divideMax;
	int lookIndex = divide;

	for (int k = 0; k < divideMax; k++)
	{
		for (int j = 0; j < divide; j++)
		{
			lookIndex = divide + j;
			while (lookIndex < arySize)
			{
				int i = lookIndex;
				while (i > 0)
				{
					if (i - divide < 0)
					{ // 配列踏み外しチェック
						i -= divide;
						continue;
					}

					if (ary[i - divide] > ary[i])
					{
						swap(ary[i - divide], ary[i]);
					}
					else
					{
						break;
					}
					i -= divide;
				}

				lookIndex += divide;
			}
		}

		--divide;
	}

	// ------------------------------------------------------------------------
	// result
	for (int i = 0; i < arySize; i++)
	{
		printf("%d ", ary[i]);
	}

	getchar();
}