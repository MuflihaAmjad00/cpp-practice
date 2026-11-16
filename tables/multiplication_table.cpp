#include <iostream>
using namespace std;
int main()
{
int i=1;
int p;
cout << "Enter a number: "
cin >> p;
while(i<=10)
{
 cout << p << " X " << i << " = " <<p*i << endl;
 i++;
}
return 0;
}