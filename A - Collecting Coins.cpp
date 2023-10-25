#include<iostream>  
#include<vector>
#include<algorithm> 
#include<cmath>
int main()
{
	int t;
	std::cin >> t;
	int res(0);
	int a, b, c, n;
	while (t--)
	{
		std::cin >> a >> b >> c >> n;
		int maxV = std::max(std::max(a, b), c);
		if ((a + b + c + n) % 3 == 0 && (a + b + c + n) / 3 >= maxV)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;

		}
	}
	return 0;
}