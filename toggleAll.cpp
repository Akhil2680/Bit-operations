#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> bits; 
   int n;
   cin >> n;
   while (n > 0) {
       int b = n % 2;
       n = n / 2;    
       bits.push_back(b);
   }
   reverse(bits.begin(), bits.end()); 
   
 
   for (int i = 0; i<bits.size(); i++) { 
      if(bits[i]==1)
      bits[i]=0;
      else
      bits[i]=1;
   }
   for (int i = 0; i < bits.size(); i++) { 
      cout<<bits[i]<<endl;
   }
   
   return 0;
}