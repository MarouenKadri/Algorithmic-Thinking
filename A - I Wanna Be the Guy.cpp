#include<iostream> 
#include<set>
#include <algorithm>
#include <iterator>

int main()
{
	int n, p, q;  
	std::set<int>pSet;  
	std::set<int >qSet; 
	std::set<int>intersection;   
	std::set<int>allLevels; 

	int level; 
	std::cin >> n; 
	std::cin >> p;  
	for (int i = 1; i < n+1; i++)
	 allLevels.insert(i); 

	while (p--)
		{ 
			std::cin >> level; 
			pSet.insert(level); 
		
		}  
	std::cin >> q; 
	while (q--)
		{
			std::cin >> level;
			qSet.insert(level);
			
		}

	std::set_union(qSet.begin(), qSet.end(), pSet.begin(), pSet.end(), std::inserter(intersection, intersection.begin()));  
	if (allLevels == intersection)
			std::cout << "I become the guy.";
	else
			std::cout << "Oh, my keyboard!";
		return 0; 
}