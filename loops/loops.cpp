#include <iostream>
using namespace std;
int main()
{
 int choice;
 do
 {
  cout << "\n======= HOTEL MENU =======" << endl;
  cout << "1. Biryani = Rs 200" << endl;
  cout << "2. chai = Rs 50" << endl;
  cout << "3. salad = Rs 100" << endl;
  cout << "4. Exit "<< endl;
  cout << "==========================" << endl;

  cout << "Enter your choice: " << endl;
  cin >> choice;
 }
 while(choice!=4);
 return 0;
}