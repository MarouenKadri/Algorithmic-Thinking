#include<bits/stdc++.h>  
using namespace std ;  

int main()  
{

int t ; 
cin>>t ;   
while (t--) 
{    
map<char,int>freqLabelled ;
int sum=0 ;
int n ;  
string s ; 
cin>>n ;  
cin>>s ;
for(int i=0;i<n;i++) 
  {   
  freqLabelled[s[i]]++;  

  } 

for(auto i=freqLabelled.begin();i!=freqLabelled.end() ;i++) 
  {  
	  
	 sum+= i->second +1 ;
  }   

 cout<<sum<<'\n' ;
 
}



return 0 ;
}
