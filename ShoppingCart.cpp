#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart(){}
      
ShoppingCart::ShoppingCart(string name, string date){
      this->
}
      
string GetCustomerName() const;
string GetDate() const;
      
void AddItem(ItemToPurchase item);
void RemoveItem(string name);
      
void ModifyItem(ItemToPurchase item);
      
int GetNumItemsInCart();
double GetCostOfCart();
      
void PrintTotal();
void PrintDescriptions();
