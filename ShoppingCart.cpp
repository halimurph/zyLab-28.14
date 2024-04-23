#include "ShoppingCart.h"
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
      this->cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name){
       for(int i = 0; i < cartItems.size(); i++){
      if(cartItem.at(i).GetName() == itemName){
            cartItems.erase.at(i);
      }else {
            cout << "Item not found in cart. Nothing removed." << endl;
      }
       }
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
      for(int i = 0; i < cartItems.size(); i++){
      if(cartItem.at(i).GetName() == item.GetName()){
            if (item.GetDescription() != "none") {
                cartItem.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItem.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItem.SetQuantity(item.GetQuantity());
            }
      }else{
            cout << "Item not found in cart. Nothing modified." << endl;
      }
      }
}
      
int ShoppingCart::GetNumItemsInCart(){
      return item.GetQuantity();
}

double ShoppingCart::GetCostOfCart(){
      totalCost = item.GetQuantity() * item.GetPrice();
      return totalCost;
}
      
void ShoppingCart::PrintTotal(){
      if(cartItems.size() == 0) {
            cout << "SHOPPING CART IS EMPTY" << endl;
      }else{
            cout << cartItems.size() << endl;
      }
}

void ShoppingCart::PrintDescriptions(){
      cout << customerName << "'s Shopping Cart - " << currentDate << endl;
       if(cartItems.size() == 0) {
            cout << "SHOPPING CART IS EMPTY" << endl;
} else {
      cout << "Item Descriptions" << endl;
      cout << item.PrintItemDescription() << endl;
       }
}
