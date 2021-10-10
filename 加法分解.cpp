#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

void add2(int n2, int n, string s1)
{
if (n > n2)
{
return;
}
if (n == n2)
{
cout << n2 << "=" << s1<<endl;
return;
}
else
{
for (int i = 1; i <= n2 ;i++)
{

ostringstream s2;
s2 << i;
add2(n2, n + i, s1+"+"+s2.str());
}
}
}



int main()
{
add2(5,0, "");
}
