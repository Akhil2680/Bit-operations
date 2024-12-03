#include <bits/stdc++.h>
using namespace std;

int main()
{
 
   int n;
   cin >> n;
       int i=0;
       int ans=0;
   while (n > 0) {
       int a = n % 10;
       n = n / 10; 
       int b=pow(2,i)*a;
       ans=ans+b;
      i++;
     
   }
          cout<<"Decimal equivalent is::"<<ans<<endl;
   
   return 0;
}
