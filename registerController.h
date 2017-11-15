#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "StoreInventory.h"
#include "order.h"

class registerController
{
public:
  registerController(StoreInventory &, order &);
};

#endif