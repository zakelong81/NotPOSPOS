#include "keypadController.h"

void keypadController::UpdateCart()
{
  display.refresh(*cart);
}

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
}
