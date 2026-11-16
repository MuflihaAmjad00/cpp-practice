#include <iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout <<"\n===== RESTAURANT MENU =====" << endl;
        cout <<"1. Burger" << endl;
        cout <<"2. Pizza" << endl;
        cout <<"3. Pasta" << endl;
        cout <<"4. Exit" << endl;
        cout <<"Enter your choice: ";
        cin >>choice;
        if (choice ==1)
            cout <<"You ordered a Burger." << endl;
        else if (choice ==2)
            cout <<"You ordered a Pizza." << endl;
        else if (choice ==3)
            cout <<"You ordered Pasta." << endl;
        else if (choice ==4)
            cout <<"Thank you for visiting!" << endl;
        else
            cout <<"Invalid choice! Please try again." << endl;

    }while (choice !=4);
    return 0;
}