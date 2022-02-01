#include<bits/stdc++.h>
int main()
{
int t,n ;
std::string s ;
std::cin>>t ;
while(t--)
{
std::cin>>n;
std::cin>>s ;
if (s.length()>=3)
{
  std::cout<<"NO\n";
}
else
{
 if( (s[0]=='0'&& s[1]=='0' ) || (s[0]=='1'&& s[1]=='1' ) )
 {
   std::cout<<"NO\n";
 }
 else
 {
 std::cout<<"YES\n";
 }


 }


 }



}
