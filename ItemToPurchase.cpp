#include <iostream>
#include "ItemToPurchase.h"

ItemToPurcahse::ItemToPurchase() { 
  

}

void ItemToPurchase::SetDescription(string description) { 
this->description = description;
}

string ItemToPurchase::GetDescription() const {
return description;
}
