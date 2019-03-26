/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:58:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__

#define MAX_ITEMS 10
#define SIZE 50

typedef struct ShoppingCart_struct
{
    char custName[50];
    char currentDate[50];
    ItemToPurchase cartItems[ITEMS];
    int cartSize;
}ShoppingCart;

int GetNumItemsInCart(ShoppingCart* cart);
int GetCostOfCart(ShoppingCart* cart);
void PrintTotal(ShoppingCart* cart);
void PrintDescriptions(ShoppingCart* cart);
ShoppingCart AddItems(ItemToPurchase*item, ShoppingCart cart);
ShoppingCart RemoveItems(char name[], ShoppingCart* cart);
ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

