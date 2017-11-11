#include <iostream>
#include <iomanip>
#include "order.h"
#include "item.h"

using std::cout;
using std::endl;

//the user's actions
int main()
{
  cout<<"======================\n"
           <<"Welcome to Not POS POS\n"
           <<"======================\n";
  order current;
  item newItem;
  item apple("Apple", 18, 1002);
  item gas("Gas", 1.82, 1003);

  current.addItem(newItem);
  current.addItem(apple);
  current.addItem(gas);

  cout << std::fixed;
  cout << std::setprecision(2);

  cout << "Cart-" << endl;
  vector<item> cart = current.getItems();;
  for(int i = 0;i < cart.size();i++) {
    cout << cart[i].getName() << ": $" << cart[i].getPrice() << endl;
  }
  cout <<"======================" << endl;

  cout << "Subtotal: $" << current.getSubtotal() << endl;
  cout << "Tax:      $" << current.getTax() * current.getSubtotal() << endl;
  cout << "Total:    $" << current.getTotal() << endl;

  cout << "Paid:     $30.00" << endl;
  cout << "Balance:  $" << current.balance(30.00) << endl;

  return 0;
}
