#include <iostream>
#include <iomanip>
using namespace std;
 
#include "ShoppingCart.h"
 
 
void PrintMenu() {
   /* Type your code here */
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
  
}
 
void ExecuteMenu(char option, ShoppingCart& theCart) {
    switch(option) {
        case 'a':
            {
                string itemName, itemDescription;
                int itemPrice, itemQuantity;
               
                cout << "ADD ITEM TO CART" << endl;
                cout << "Enter the item name:";
                cin.ignore();
                getline(cin, itemName);
                cout << endl;
                cout << "Enter the item description:";
                getline(cin, itemDescription);
                cout << endl;
                cout << "Enter the item price:";
                cin >> itemPrice;
                cout << endl;
                cout << "Enter the item quantity:";
                cin >> itemQuantity;
                cout << endl;
               
                ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
                theCart.AddItem(newItem);
            }
            break;
        case 'd':
            {
                string itemName;
                cout << "REMOVE ITEM FROM CART" << endl;
                cout << "Enter name of item to remove:";
                cin.ignore();
                getline(cin, itemName);
                cout << endl;
                theCart.RemoveItem(itemName);
            }
            break;
        case 'c':
            {
                string itemName;
                ItemToPurchase modItem;
                cout << "CHANGE ITEM QUANTITY" << endl;
                cout << "Enter the item name:";
                cin.ignore();
                modItem.SetName(itemName);
                getline(cin, itemName);
                modItem.SetName(itemName);
                cout << endl;
                theCart.ModifyItem(modItem);
            }
            break;
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
            theCart.PrintTotal();
           
            break;
        case 'q':
            cout << "Exiting program..." << endl;
            break;
        default:
            break;
    }
}
 
 
int main() {
   /* Type your code here */
   string name;
   string date;
   char option;
   bool valid = false;
  
   cout << "Enter customer's name:" << endl;
   getline(cin, name);
  
   cout << "Enter today's date:" << endl;
   getline(cin, date);
  
   cout<<endl;
  
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;
   cout<<endl;
  
   ShoppingCart myCart(name, date);
  
   PrintMenu();
   cout << "Choose an option:"<<endl;
   cin >> option;
   if(option=='a'||option=='d'||option=='c'||option=='i'||option=='o'||option=='q'){
      valid = true;
   }
   else{
      valid = false;
   }
 
   while(option!='q'){
     
      ExecuteMenu(option, myCart);
     
      if(option=='a'||option=='d'||option=='c'||option=='i'||option=='o'||option=='q'){
      valid = true;
      }
      else{
      valid = false;
      }
      
      if(valid){
      cout << endl;
      PrintMenu();
   }
      cout << "Choose an option:"<<endl;
      cin >> option;
     
   }
 
  
   return 0;
}
