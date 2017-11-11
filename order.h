#ifndef ORDER_H
#define ORDER_H

#include "IOrder.h"

using std::vector;

class order : public IOrder {
  private:
    vector<item> itemList;
    double tax;
  public:
    order();
    order(double);
  public:
    void addItem(item);
    vector <item> getItems();
    double getSubtotal();
    double getTax();
    double getTotal();
    double balance(double);
};

#endif
