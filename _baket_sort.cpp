#include <stdio.h>

// �o�P�b�g�\�[�g

// �����l���_��
// �������_��
// -1 �ȊO

void main()
{
	int a[] = { 6, 2, 8, 7, 99 };
	const int size = sizeof(a) / sizeof(a[0]);

	int b[100];
	for (int i = 0; i < 100; i++)
	{ // init
		b[i] = -1;
	}

	// �l�Ɠ����v�f�ԍ��ɁA���̒l���i�[����
	for (int i = 0; i < size; i++)
	{
		b[a[i]] = a[i];
	}

	// ���Ԃɓ˂�����
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