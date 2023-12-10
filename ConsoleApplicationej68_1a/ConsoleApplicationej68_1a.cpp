#include <iostream>
int main()
{
	const int n = 8;
	int i, a[n], count=0;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = 0; i < n; ++i) {
		if(a[i]>=-5 && a[i]<=10)
		{
			count++;
		}
		std::cout << count;
	}
	return 0;
}

