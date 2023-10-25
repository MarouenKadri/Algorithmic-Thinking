#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n; //tram's stops
	int ai, bi,cap(0); 
	std::vector<int > stops; 
	std::cin >> n; 
	while (n--)
	{
		std::cin >> ai >> bi; 
		cap = bi - ai + cap; 

		stops.push_back(cap); 
	}  

	sort(stops.begin(), stops.end());  

	std::cout << stops.back();
	return 0;

}