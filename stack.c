/*****************************************************************************

                                                        Emerson Argueta
                                                        CSE 12, Fall 2014
                                                        October 30, 2014
                                                        cs12xae
                                Assignment Five

File Name:      stack.c
Description:    Uses function from list to emulate a stack structure.


*****************************************************************************/ 
#include <stdio.h>
#include "list.h"
#include "stack.h"
/*----------------------------------------------------------------------------
 * Function Name:   delete_Stack
 *
 * Purpose:         Deletes a stack that was created.
 *
 * Description:     Calls function delete_List with the pointer to the pointer
 *                  of the stack.  
 *
 * Input:           spp:a pointer to the pointer of the stack 
 *
 * Result:          does not return anything, stack is deleted.
 * -------------------------------------------------------------------------*/
void delete_Stack (Stack ** spp) {
        delete_List (spp);
}
 /*---------------------------------------------------------------------------
 * Function Name:   isempty_Stack
 *
 * Purpose:         Determines if the Stack is empty
 *
 * Description:     Calls function isempty_List and returns the value of
 *                  this function.
 *
 * Input:           this_stack: a pointer to the stack
 *
 * Result:          returns value type long of the isempty_List function
 * -------------------------------------------------------------------------*/ 
long isempty_Stack (Stack * this_stack) {
        return isempty_List (this_stack);
}
 /*----------------------------------------------------------------------------
 * Function Name:   new_Stack 
 *
 * Purpose:         Creates a new stack
 *
 * Description:     Calls new_List function and returns a Stack
 *
 * Input:           copy_func:   a pointer to a function,that takes in
 *                               a pointer to void, returning a pointer
 *                               to void.
 *
 *                  delete_func: a pointer to a function,that takes in 
 *		                         a pointer to void,returning void.
 *
 *                  write_func:  a pointer to function, that takes
 *                               in a pointer to void and a pointer to FILE,
 *                               returning a pointer to FILE.
 *
 * Result:                       Allocates memory by creating a Stack
 * -------------------------------------------------------------------------*/ 
Stack * new_Stack (void *(*copy_func) (void *),
        void (*delete_func) (void *),
        FILE *(*write_func) (void *, FILE *)) {

        return new_List (copy_func, delete_func, write_func);
}
 /*---------------------------------------------------------------------------
 * Function Name:   pop
 *
 * Purpose:         To remove the top element of the stack.
 *
 * Description:     Calls function remove_List that takes in the pointer
 *                  to this_stack and the END constant 
 *
 * Input:
 *
 * Result:
 * -------------------------------------------------------------------------*/ 
void * pop (Stack * this_stack) {
        return remove_List (this_stack, END);
}
 /*---------------------------------------------------------------------------
 * Function Name:
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 *
 * Result:
 * -------------------------------------------------------------------------*/ 
long push (Stack * this_stack, void * element) {
        return insert (this_stack, element, END);
}
 /*---------------------------------------------------------------------------
 * Function Name:
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 *
 * Result:
 * -------------------------------------------------------------------------*/ 
void * top (Stack * this_stack) {
        return view (this_stack, END);
}
 /*---------------------------------------------------------------------------
 * Function Name:
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 *
 * Result:
 * -------------------------------------------------------------------------*/ 
FILE * write_Stack (Stack * this_stack, FILE * stream) {
        return write_List (this_stack, stream);
}
