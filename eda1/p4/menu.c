#include "options.c"
#include "search_product.c"
#include "delete_product.c"
#include "show_products.c"
#include "add_product.c"
#include "show_cart.c"
#include "print_ticket.c"
#include "close_program.c"

void menu(struct node s[TAM], struct item **cart)
{
    short op;
    printf("Welcome to Expensive Hodies!!\n");
    options();
    while (2)
    {
        scanf("%hd", &op);
        switch(op)
        {
            case 0:
                options();
                break;
            case 1: //Show products
                show_products(s);
                break;
            case 2: //Add products
                add_product(s, cart);
                break;
            case 3: //Delete products
                delete_product(s, cart);
                break;
            case 4: //Show cart
                show_cart(s, cart);
                break;
            case 5: //Buy products (print ticket)
                print_ticket(s, cart);
                break;
            case 6:
                if(close_program(cart))
                {
                    break;
                }
                return;
            default:
                printf("No option \n");
                break;
        }
        
    }
}