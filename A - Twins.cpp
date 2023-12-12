#include<iostream>   
#include<queue>
int main()
{
	int n, coinVal(0) ,pickVal(0);
	std::cin >> n;
	int cnt(0); 
	std::priority_queue<int> pq;
	int sum(0);
	while (n--)
	{	   
		std::cin >>coinVal;   
		pq.push(coinVal);
		sum += coinVal; 
	}  
	
	while (sum / 2 +1> pickVal)
	{ 
		pickVal += pq.top();   
		pq.pop();   
		cnt++; 
	}  
	std::cout << cnt; 
	  
	return 0;  

}