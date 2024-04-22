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

     
void ItemToPurchase::SetPrice(int price){ 
this->price = price;
}
void ItemToPurchase::SetQuantity(int quantity){ 
this->quantity = quantity;
}
string ItemToPurchase::GetName() const{ 
return name;
}
int ItemToPurchase::GetPrice() const{
return price;
}
int ItemToPurchase::GetQuantity() const {
return quantity;
}
void ItemToPurcahse::PrintItemCost(){
int totalCost = quantity*price;
cout << item << quantity << " @ " << price << " = $" << totalCost;
}

void ItemToPurchase::PrintItemDescription() {
cout
}
