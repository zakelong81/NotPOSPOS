#include "item.h"

item::item() {
  name = "Banana";
  price = 10;
  sku = 1001;
}

item::item(string name, double price, int sku) {
  this->name = name;
  this->price = price;
  this->sku = sku;
}

string item::getName() {
  return name;
}

double item::getPrice() {
  return price;
}

int item::getSKU() {
  return sku;
}
