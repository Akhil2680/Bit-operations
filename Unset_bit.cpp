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
   
 int count=0;
   for (int i = 0; i <bits.size(); i++) { 
      if(bits[i]==0)
      count+=1;
   }
   cout<< "no. of unsetset bit is: -" <<" "<<count << endl;
   
   return 0;
}