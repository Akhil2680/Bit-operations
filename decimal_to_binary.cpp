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
   
   cout << "This is the binary conversion of the number:" << endl;
   for (int i = 0; i < bits.size(); i++) { 
       cout << bits[i];
   }
   cout << endl;
   
   return 0;
}
