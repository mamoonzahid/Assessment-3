#include<iostream>
using namespace std;
float Money();
int main()
{
    string CorT, TeaMenu[3] = { "Ice Tea","Milk Tea","Black Tea" }, Price[3] = { "___3 dhs" , "___2 dhs" , "___1 dhs" }, CoffeeMenu[3] = { "Ice Coffee","Milk Coffee","Black Coffee" }, YorN;
    char IorMorB;
    float money;
    cout << "Do you want Tea or Coffee (T/C): ";
    cin >> CorT;
    while (cin.fail() || (CorT != "T" && CorT != "t" && CorT != "c" && CorT != "C"))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nT or C only please: ";
        cin >> CorT;
    }
    if (CorT == "T" || CorT == "t")
    {
        for (int i = 0; i < 3; i++)
        {
            cout << TeaMenu[i] << Price[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            cout << CoffeeMenu[i] << Price[i] << endl;
        }
    }
    cout << "Which one you want? (i/m/b): ";
    cin >> IorMorB;
    while (cin.fail() || (IorMorB != 'i' && IorMorB != 'I' && IorMorB != 'm' && IorMorB != 'M' && IorMorB != 'b' && IorMorB != 'B'))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nTry again: ";
        cin >> IorMorB;
    }
    money = Money();
    switch (IorMorB)
    {
    case 'i':
    case 'I':
    {
        money = money - 3;
        break;
    }
    case 'M':
    case 'm':
    {
        money = money - 2;
        break;
    }
    case 'b':
    case 'B':
    {
        money = money - 1;
        break;
    }
    default:
    {
        cout << "Invalid Option" << endl;
        break;
    }
    }
    if (money >= 0)
    {
        cout << "Do you need sugar? (y/n): ";
        cin >> YorN;
        while (cin.fail() || (YorN != "y" && YorN != "Y" && YorN != "N" && YorN != "n"))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input.\nY or N only please: ";
            cin >> YorN;
        }
        if (YorN == "Y" || YorN == "y")
        {
            cout << "Here's your drink with sugar" << endl;
        }
        else
        {
            cout << "Here's your drink without sugar" << endl;
        }
        cout << "Here's your change: " << money << endl;
    }
    else
    {
        cout << "You don't have enough money" << endl;
    }
    return 0;
}
float Money()
{
    float money;
    cout << "Enter the money: ";
    cin >> money;
    while (cin.fail() || money < 1)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input.\nPlease enter an appropriate amount: ";
        cin >> money;
    }
    return money;
}