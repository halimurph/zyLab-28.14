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
   /* Type your code here */
 
       
   switch (option){
      case 'a': {
         string itemName, itemDescription;
         int itemPrice, itemQuantity;
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         cin >> itemName;
         
         cout << "Enter the item description:" << endl;
         
         cin.ignore();
          getline(cin, itemDescription);
         
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         
         ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);

         theCart.AddItem(newItem);
         
         break;
      }
     
      case 'd': {
         string itemName;
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter the name of the item to remove:" << endl;
         cin.ignore();
         getline(cin, itemName);
         theCart.RemoveItem(itemName);
         break;
       }
      case 'c': {
         string itemName;
         int newQuantity;
         
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter the item name:" << endl;
         cin.ignore();
         getline(cin, itemName);
         
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;
         
         ItemToPurchase modifiedItem(itemName, "", 0, newQuantity);
         theCart.ModifyItem(modifiedItem);
         break;
   }
      case 'i': {
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         theCart.PrintDescriptions();
         break;
      }
      case 'o': {
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
         break;
       }
      case 'q': {
         cout << endl;
         break;
       }
       default:
       cout << "Invalid option. Please try again." << endl;
    }
     
}


int main() {
   string name, date;
   char userInput;

   /* Type your code here */
   cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    getline(cin, date);
   
   ShoppingCart cart(name, date);
   
   cout << endl << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl << endl;
   
   while (true) {
        PrintMenu();
        cout << "Choose an option:" << endl;

        cin >> userInput;
        cin.ignore();

         if (userInput == 'q') {
            break;
        } else if (userInput == 'o') {
            cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
        } else {
            cout << "Choose an option:" << endl;
        }
    }


   return 0;
}
