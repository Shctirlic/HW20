#include <iostream>
using namespace std;

void filling_arr(int m[], int n, int a, int b)
{
	for (int i = 0; i < n; i++)
	{
		m[i] = a + rand() % (b - a + 1);
	}
}
void showArr(int m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "m[" << i << "] = " << m[i] << endl;
	}
	cout << endl;
}


void print_arr( int   m[], int  n, int a = 0)
{
	cout << "2" << endl;

	for (int i = a; i < n; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}


int searchIndex(int m[], int n, int val, int begin = 0)
{
	for (int i = begin; i < n; i++)
	{
		if (m[i] == val)
		{
			return i;
		}
	}

	return -1;
}

int searchLastIndex(int m[], int n, int val, int begin = 0)
{
	int index = -1;

	for (int i = begin; i < n; i++)
	{
		if (m[i] == val)
		{
			index = i;
		}
	}

	return index;
}

int maxElement(int m[], int n)
{
	int max = m[0];

	for (int i = 0; i < n; i++)
	{
		if (m[i] > max)
		{
			max = m[i];
		}
	}

	return max;
}
int minElement(int m[], int n)
{
	int min = m[0];

	for (int i = 0; i < n; i++)
	{
		if (m[i] < min)
		{
			min = m[i];
		}
	}

	return min;
}

float meanValue(int m[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += m[i];
	}

	return (float)sum / n;
}

int  counter(int m[], int  n, int val)
{
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		if (m[i] == val)
		{
			k++;
		}
	}

	return k;
}
int  range(int m[], int  n, int a, int b)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (m[i] >= a && m[i] <= b)
		{
			k++;
		}
	}

	return k;
}

int main()
{
	const int n = 100;
	int     m[n]; // = { 1, 2, -1, 0, -8, 91, 3, 91, 15, 3, 2, 91,32,4,8 };

	filling_arr(m, 100,  -100, 100);
	showArr(m, n);
	print_arr(m, n );
	print_arr(m, n, 2);

	
	int index;
	index = searchIndex(m, n, 91           ); cout << index << endl;
	index = searchIndex(m, n, 91, index + 1); cout << index << endl;
	index = searchIndex(m, n, 91, index + 1); cout << index << endl;
	index = searchIndex(m, n, 91, index + 1); cout << index << endl;
	cout << endl;


	index = searchLastIndex(m, n, 91); cout << index << endl;
	index = searchLastIndex(m, n, 91); cout << index << endl;

	index = searchLastIndex(m, n, 91, index + 1); cout << index << endl;
	cout << endl;
	

	cout << maxElement(m, n) << endl;
	cout << minElement(m, n) << endl;
	cout << meanValue(m, n) << endl;

	cout << counter(m, n, 91) << endl;
	cout << range(m, n, -10, -1) << endl;
}
