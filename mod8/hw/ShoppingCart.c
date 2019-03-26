/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:12:00 AM
 *       Revision:  none
 *       Compiler:  gcc  -o ShoppingCart.c.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ShoppingCart.h"
// Constants

// Function Definitions
int GetNumItemsInCart(ShoppingCart* cart)
{
    int i = 0;
    
    return i;
}

int GetCostOfCart(ShoppingCart* cart)
{
    int i = 0;

    return i;
}
void PrintTotal(ShoppingCart* cart)
{
    return;
}
void PrintDescriptions(ShoppingCart* cart)
{
    return;
}

ShoppingCart AddItems(ItemToPurchase*item, ShoppingCart* cart)
{
    return *cart;       // Derefeernce the pointer to return the values of the structure
}

ShoppingCart RemoveItems(char name[], ShoppingCart* cart)
{
    return;
}
ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart)
{
    return;
}


