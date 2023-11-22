#include<stdio.h>
#include<stdlib.h>


void display( List l )
{
    node* temp = l ;
    printf("\n\n");
    while( temp )
    {
        printf( "  %d -> ", temp -> data );
        temp = temp -> next ;
    }
    printf("  NULL \n");
}

