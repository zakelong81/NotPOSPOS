#include "order.h"

order::order() {
  tax = 0.07;
}

order::order(double tax) {
  this->tax;
}

void order::addItem(item i) {
  itemList.push_back(i);
}

vector<item> order::getItems() {
  return itemList;
}

double order::getSubtotal() {
  double price = 0;
  for(int i = 0;i < itemList.size();i++) {
    price += itemList[i].getPrice();
  }
}

double order::getTax() {
  return tax;
}

double order::getTotal() {
  return getSubtotal() * (1 + tax);
}

double order::balance(double paid) {
  return getTotal() - paid;
}
