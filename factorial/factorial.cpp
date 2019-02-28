#include <iostream>
using namespace std;


long long factorial(long long n)
{
	long long f = 1;
	for (int i = 1; i <= n; i++)
	{
		f*= i;
	}
	return f;
}

long long factorial1(long long n)
{
	long long f;
	if (n == 0 || n == 1)
		f = 1;
	else
		f = factorial1(n - 1)*n;
	return f;
}

int main()
{
	cout << factorial1(11) << endl;
	system("pause");
	return 0;
}