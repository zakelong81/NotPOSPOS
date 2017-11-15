#include <iostream>
#include <string>
#include "registerController.h"
#include "order.h"
#include "item.h"

registerController::registerController(StoreInventory * inventory, order * checkout)
{
  std::string command;
  double option;

  do
  {
    std::cout<<"> ";
    std::cin>>command>>option;
    
    if(command.compare("buy") == 0)
    {

      item add = inventory->lookup((int)option);
      checkout->addItem(add);
      screen.displayRunningTotal(*checkout);
    }
    else if(command.compare("pay") != 0)
    {
      std::cout<<"ACCEPTED COMMANDS:\n"
               <<"buy <item sku>\n"
               <<"pay <amount>\n";
    }
  }while( command.compare("pay") != 0 );
  checkout->balance(option);
  screen.displayFinalReceipt(*checkout);
}