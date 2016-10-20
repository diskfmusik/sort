#include <stdio.h>

// バケットソート

// 同じ値がダメ
// 少数がダメ
// -1 以外

void main()
{
	int a[] = { 6, 2, 8, 7, 99 };
	const int size = sizeof(a) / sizeof(a[0]);

	int b[100];
	for (int i = 0; i < 100; i++)
	{ // init
		b[i] = -1;
	}

	// 値と同じ要素番号に、その値を格納する
	for (int i = 0; i < size; i++)
	{
		b[a[i]] = a[i];
	}

	// 順番に突っ込む
	int index = 0;
	for (int i = 0; i < 100; i++)
	{
		if (b[i] != -1)
		{
			a[index++] = b[i];
		}
	}

	// ------------------------------------------------------------------------
	// result
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	getchar();
}