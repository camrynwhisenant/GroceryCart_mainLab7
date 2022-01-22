//
// Created by Camryn Whisenant on 6/2/21.
//

#ifndef MAINLAB7_ITEMTOPURCHASE_H
#define MAINLAB7_ITEMTOPURCHASE_H


class ItemToPurchase {
    public:
        ItemToPurchase();
        void SetName(string currName);
        string GetName() const;
        void SetPrice(double currPrice);
        double GetPrice() const;
        void SetQuantity(int currQuantity);
        int GetQuantity() const;
    private:
        string itemName;
        double itemPrice;
        int itemQuantity;


};


#endif //MAINLAB7_ITEMTOPURCHASE_H


