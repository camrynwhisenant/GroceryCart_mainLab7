#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase item1;
   ItemToPurchase item2;
   string currName;
   double currPrice;
   int currQuantity;
   double total;

        cout << "Item 1" << endl;
        cout << "Enter the item name: " << endl;
        getline(cin, currName);
        item1.SetName(currName);

        cout << "Enter the item price: " << endl;
        cin >> currPrice;
        cin.ignore();
        item1.SetPrice(currPrice);

        cout << "Enter the item quantity: " << endl;
        cin >> currQuantity;
        cin.ignore();
        item1.SetQuantity(currQuantity);

        cout << endl << "Item 2" << endl;
        cout << "Enter the item name: " << endl;
        getline(cin, currName);
        item2.SetName(currName);

        cout << "Enter the item price: " << endl;
        cin >> currPrice;
        cin.ignore();
        item2.SetPrice(currPrice);

        cout << "Enter the item quantity: " << endl;
        cin >> currQuantity;
        cin.ignore();
        item2.SetQuantity(currQuantity);

        cout << "TOTAL COST" << endl;
        cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << fixed << setprecision(2) << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
        cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << fixed << setprecision(2) << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl << endl;
        total = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());
        cout << fixed << setprecision(2) << "Total: $" << total;



    return 0;
}