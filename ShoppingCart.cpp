#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart(){}
      
ShoppingCart::ShoppingCart(string name = "none", string date = "January 1, 2016"){
      this->customerName = name;
      this->currentDate = date;
}
      
string ShoppingCart::GetCustomerName() const{
      return name;
}

string ShoppingCart::GetDate() const{
      return date;
}
      
void ShoppingCart::AddItem(ItemToPurchase item){
}

void ShoppingCart::RemoveItem(string name){
      if(name != cartItem.at(i)){
            cout << "Item not found in cart. Nothing removed." << endl;
      }else {
            cartItem.popback.at(i);
      }
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
      if(name = cartItem.at(i)){
            SetDescription(item);
      }else{
            cout << "Item not found in cart. Nothing modified." << endl;
      }
}
      
int ShoppingCart::GetNumItemsInCart(){
      int quantity = cartItems.size();
      returns quantity;
}

double ShoppingCart::GetCostOfCart(){
      returns PrintItemCost();
}
      
void ShoppingCart::PrintTotal(){
      if(cartItems.size() == 0) {
            cout << "SHOPPING CART IS EMPTY" << endl;
      }else{
            cout << totalCost << endl;
      }
}

void ShoppingCart::PrintDescriptions(){
       if(cartItems.size() == 0) {
            cout << "SHOPPING CART IS EMPTY" << endl;
} else {
      cout << PrintItemDescription() << endl;
       }
}
