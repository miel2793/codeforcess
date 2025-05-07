#include<iostream>
using namespace std;
int main()
{

     long long a,b,c;
      cin>>a>>b>>c;
       if(a>=b&&a>=c&&b>=c)
       {

           cout<<c<<" "<<a<<endl;
       }
      else if(b>=a&&b>=c&&a>=c )
       {

           cout<<c<<" "<<b<<endl;
       }
      else if(c>=b&&c>=a&&b>=a)
       {

           cout<<a<<" "<<c<<endl;
       }
  else   if(a>=b&&a>=c&&c>=b)
       {

           cout<<b<<" "<<a<<endl;
       }
       else if(b>=a&&b>=c&&c>=a)
       {

           cout<<a<<" "<<b<<endl;
       }
       else if(c>=b&&c>=a&&a>=b)
       {

           cout<<b<<" "<<c<<endl;
       }



}
