#include<iostream>
#include<ctime>
using namespace std;
void reorder(int *n1, int *n2, int *n3);

void main()
{

	int *x, *y, *z;
	int holdOutPut;

	cout << "My Name is Baldev Bhattarai." << endl;

	x = (int *)malloc(sizeof(int));
	y = (int *)malloc(sizeof(int));
	z = (int *)malloc(sizeof(int));

	srand(time(0));
	*x = rand() % 101;
	*y = rand() % 101;
	*z = rand() % 101;

	cout << *x << " " << *y << " " << *z << endl;

	reorder(x, y, z);
	cout << *x << " " << *y << " " << *z << endl;

	cin >> holdOutPut;
}
void reorder(int *n1, int *n2, int *n3)
{
	int a, b, c;

	if (*n1 < *n2)
	{
		a = *n1;
		b = *n2;
	}
	else
	{
		a = *n2;
		b = *n1;
	}
	if (b < *n3)
	{
		c = *n3;
	}
	else
	{
		c = b;
		if (a < *n3)
		{
			b = *n3;

		}
		else
		{
			b = a;
			a = *n3;
		}
	}
	*n1 = a;
	*n2 = b;
	*n3 = c;


}
