
#include<iostream>
using namespace std ;

int main()
{

int t ;
string s ;
cin>>t ;
while(t--)
{
cin>>s ;

bool flag=true;
if( ( s[0]!=89 ) && (s[0]!=89+32 ) )
{
        flag=false ;
}

if( (s[1]!=69) && (s[1]!=69+32) )
{

        flag=false ;
}

if( (s[2]!=83) && (s[2]!=83+32 ) )
{
	flag=false ;
}


if(flag)
{
	cout<<"YES"<<endl;
}
else
{
	cout<<"NO"<<endl ;
}





}

return 0 ;

}
