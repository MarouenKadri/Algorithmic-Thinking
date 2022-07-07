#include<iostream> 
using namespace std ;
int main() 
{
long int  t, n,m,sum;    
cin>>t ;  
while(t--) 
{
  cin>>n>>m ; 
  sum= m*(m-1)/2 + m*n*(n+1)/2 ; 
  cout<<sum<<endl;

}

return 0 ;
}
