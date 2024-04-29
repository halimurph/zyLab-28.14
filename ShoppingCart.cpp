#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;

ShoppingCart::ShoppingCart(){
   customerName = "none";
   currentDate = "January 1, 2016"; 
}

ShoppingCart::ShoppingCart(string name, string date){
   customerName = name;
   currentDate = date;
}

string ShoppingCart::GetCustomerName() const{
  return customerName;
}

string ShoppingCart::GetDate() const{
  return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
   cartItems.push_back(item);
}
   
void ShoppingCart::RemoveItem(string name){
   for(int i = 0; i < cartItems.size(); ++i){
      if(cartItems[i].GetName() == name){
         cartItems.erase(cartItems.begin() + i);
         return;
      }
   }
   cout <<  "Item not found in cart. Nothing removed." << endl;
   
   
}
void ShoppingCart::ModifyItem(ItemToPurchase item){
   for(int i = 0; i < cartItems.size(); ++i){
      if(cartItems[i].GetName() == item.GetName()){
         if(item.GetDescription()!= "none"){
            cartItems[i].SetDescription(item.GetDescription());
         }
         if (item.GetPrice() != 0) {
            cartItems[i].SetPrice(item.GetPrice());
         }
         if (item.GetQuantity() != 0) {
             cartItems[i].SetQuantity(item.GetQuantity());
         }
         return;
         
      }
   }
      cout << "Item not found in cart. Nothing modified." << endl;
}

int ShoppingCart::GetNumItemsInCart() {
   int totalItems = 0;
   for(int i = 0; i < cartItems.size(); ++i){
      totalItems += cartItems[i].GetQuantity();
   }
   return totalItems;
}

double ShoppingCart::GetCostOfCart(){
   int totalCost = 0;
   
   for(int i =0; i < cartItems.size();++i){
      totalCost += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
   }
   return totalCost;
}

void ShoppingCart::PrintTotal() {
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

      if (cartItems.empty()) {
         cout << "SHOPPING CART IS EMPTY" << endl;
         cout << endl << "Total: $0" << endl;
         cout << endl;
        return;
      }else{
      for (int i = 0; i < cartItems.size(); ++i) {
         cartItems[i].PrintItemCost();
        }
    cout << endl << "Total: $" << GetCostOfCart() << endl;
    }
}

void ShoppingCart::PrintDescriptions()  {
   cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
   cout << "Item Descriptions" << endl;
       
    if (cartItems.empty()) {
      cout << "SHOPPING CART IS EMPTY" << endl;
            return;
    }

   for (int i = 0; i < cartItems.size(); ++i) {
      cartItems[i].PrintItemDescription();
        }
    }
