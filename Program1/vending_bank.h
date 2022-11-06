//
// Created by Sam Singh on 10/3/22.
//

#ifndef PROGRAM_1_VENDING_BANK_H
#define PROGRAM_1_VENDING_BANK_H

class VendingBank {

    // Member functions
public:
    VendingBank();
    VendingBank(int id);

    //getters-setters
    int id() const;
    void id(int id_);

    //methods
    double getItemPrice(int* id_);
    void purchaseItem(int* id_);
    void removeItem(int* id);
    double getChange(double* depositAmount_, int* id_, int* numItems_);

    //private data members
private:
    int id_;
    double depositAmount_;
    int numItems_;
    double total_;
    double * itemPrices_;
};

#endif //PROGRAM_1_VENDING_BANK_H
