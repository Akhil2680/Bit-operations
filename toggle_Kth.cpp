#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> bits; 
   int n,m;
   cin >> n>>m;
   while (n > 0) {
       int b = n % 2;
       n = n / 2;    
       bits.push_back(b);
   }
   reverse(bits.begin(), bits.end()); 
   

   for (int i = 0; i < bits.size(); i++) { 
      
       if(bits[i]==1)
       bits[i]=0;
       else
       bits[i]=1;
   }
   for (int i = 0; i < bits.size(); i++) { 
      
      if(bits[m]==0)
      bits[m]=1;
      else
      bits[m]=0;
   }
    for (int i = 0; i < bits.size(); i++) { 
      
      cout<<bits[i];
   }
   cout<<endl;
   return 0;
}
