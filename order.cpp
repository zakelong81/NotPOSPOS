#include "order.h"

order::order() {
  tax = 0.0725;
}

order::order(double tax) {
  this->tax = tax;
}

void order::addItem(item i) {
  itemList.push_back(i);
}

std::vector<item> order::getItems() {
  return itemList;
}

double order::getSubtotal() {
  double subtotal = 0;
  for(int i = 0; i < itemList.size(); i++) {
    subtotal += itemList[i].getPrice();
  }
  return subtotal;
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
