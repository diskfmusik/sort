#include <stdio.h>

// シェーカーソート

void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void result(int* ary, int size)
{
	printf("--result\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n----------\n");
}

void main()
{
	int ary[] = { 5, 2, 6, 1, 9 };

	const int size = sizeof(ary) / sizeof(ary[0]);
	int head = 0;
	int tail = size - 1;

	result(ary, size);

	int num = 0;
	while (1)
	{
		if (head == tail) break;

		printf("\n--%d turn\n\n", ++num);

		// head ->
		for (int i = head + 1; i <= tail; i++)
		{
			if (ary[head] > ary[i])
			{
				swap(ary[head], ary[i]);
			}
		}

		++head;

		result(ary, size);

		if (head == tail) break;

		//      <- tail
		for (int i = tail - 1; i >= head; i--)
		{
			if (ary[tail] < ary[i])
			{
				swap(ary[tail], ary[i]);
			}
		}

		result(ary, size);

		--tail;

	}

	getchar();
}