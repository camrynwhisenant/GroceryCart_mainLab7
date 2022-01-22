//
// Created by Camryn Whisenant on 6/2/21.
//
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"

 ItemToPurchase::ItemToPurchase() {
    string itemName = "none";
    double itemPrice = 0.0;
    int itemQuantity = 0;

}

void ItemToPurchase::SetName(string currName){

    itemName = currName;
}
string ItemToPurchase::GetName() const{

    return itemName;
}
void ItemToPurchase::SetPrice(double currPrice){

    itemPrice = currPrice;
}
double ItemToPurchase::GetPrice() const{

    return itemPrice;
}
void ItemToPurchase::SetQuantity(int currQuantity){

    itemQuantity = currQuantity;
}
int ItemToPurchase::GetQuantity() const {

    return itemQuantity;
}
