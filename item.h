#ifndef ITEM_H
#define ITEM_H

#include "IItem.h"

using std::string;

class item : public IItem {
  private:
    string name;
    double price;
    int sku;
  public:
    item();
    item(string, double, int);
  public:
    string getName();
    double getPrice();
    int getSKU();
};

#endif
