#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   if(option = 'a'){
      theCart.AddItem();
   }else if(option = 'd'){
      theCart.RemoveItem();
   }else if(option = 'c'){
      theCart.ModifyItem();
   }else if(option = 'i'){
      theCart.PrintDescriptions();
   }else if(option = 'o'){
      theCart.PrintTotal();
   }else if(option = 'q'){
      break;
   }
}

int main() {
string customerName
string currentDate;
ShoppingCart obj1;
char option;
   
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);

   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);

   cout << "Customer name: " << customerName << endl;
   cout << "Today's date: " << currentDate << endl;

   while (option != 'q') {
        PrintMenu();
   cout << "Choose an option:" << endl;

   if((option != 'a') || (option != 'd') || (option != 'c') || (option != 'i') || (option != 'o')|| (option != 'q')){
      cout << "Choose options from menu above" << endl;
   } else {
      ExecuteMenu(char option, ShoppingCart& theCart);
   }
   }

   if(option == 'o'){

   }
   
   return 0;
}
