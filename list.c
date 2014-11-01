/****************************************************************************

                                                        Emerson Argueta
                                                        CSE 12, Fall 2014
                                                        October 30, 2014
                                                        cs12xae
                                Assignment Five

File Name:      list.c
Description:    Defines a List and Nodes objects to create a doubly-linked
                list polymorphic container and functions to manipulate objects 
                in the container.


****************************************************************************/ 
#include <malloc.h>
#include <stdio.h>
#include "mylib.h"
#include "list.h"

typedef struct Node {
        struct Node * pre;      /* how to access the prior Node */
        struct Node * next;     /* how to access the next Node */
        void * data;            /* the data to store */
} Node;

typedef struct List {
        Node * end;             /* the end of the list */
        long list_count;        /* which list is it */
        long occupancy;
        void *(*copy_func) (void *);
        void (*delete_func) (void *);
        FILE *(*write_func) (void *, FILE *);
} List;

/* private Node function declarations */
static long check_to_go_forward (List * this_list, long where);
static void delete_Node (Node **, void (*delete_func) (void *));
static void find_location (List * this_list, long where);
static Node * insert_Node (Node *, void *, void *(*copy_func) (void *)); 
static Node * new_Node (void *, void *(*copy_func) (void *));
static void * remove_Node (Node *);
static void * view_Node (Node *); 
static FILE * write_Node (Node *, FILE *, FILE *(*write_func) (void *, FILE *));

/* catastrophic error messages */
static const char ADNEXT_NONEXIST[] = 
                "Advance next from non-existent list!!!\n";
static const char ADNEXT_EMPTY[] = 
                "Advance next from empty list!!!\n";
static const char ADPRE_NONEXIST[] = 
                "Advance pre from non-existent list!!!\n";
static const char ADPRE_EMPTY[] = 
                "Advance pre from empty list!!!\n";
static const char CHECK_NONEXIST[] =
                "Checking direction on non-existent list!!!\n";
static const char DELETE_NONEXIST[] =
                "Deleting from non-existent list!!!\n";
static const char DELETE_NONEXISTNODE[] =
                "Deleting a non-existent node!!!\n";
static const char INCOMING_NONEXIST[] =
                "Incoming parameter does not exist!!!\n";
static const char ISEMPTY_NONEXIST[] =
                "Is empty check from non-existent list!!!\n";
static const char INSERT_NONEXIST[] =
                "Inserting to a non-existent list!!!\n";
static const char REMOVE_NONEXIST[] =
                "Removing from non-existent list!!!\n";
static const char REMOVE_EMPTY[] =
                "Remove from empty list!!!\n";
static const char VIEW_NONEXIST[] = 
                "Viewing a non-existent list!!!\n";
static const char VIEW_NONEXISTNODE[] = 
                "Viewing a non-existent node!!!\n";
static const char VIEW_EMPTY[] =
                "Viewing an empty list!!!\n";
static const char WRITE_NONEXISTFILE[] =
                "Writing to a non-existent file!!!\n";
static const char WRITE_NONEXISTLIST[] =
                "Writing from a non-existent list!!!\n";
static const char WRITE_MISSINGFUNC[] =
                "Don't know how to write out elements!!!\n";
static const char WRITE_NONEXISTNODE[] =
                "Writing from a non-existent node!!!\n";

/* debug messages */
static const char ADNEXT[] = "[List %ld - Advancing next]\n";
static const char ADPRE[] = "[List %ld - Advancing pre]\n";
static const char INSERT[] = "[List %ld - Inserting node]\n";
static const char REMOVE[] = "[List %ld - Removing node]\n";
static const char VIEW[] = "[List %ld - Viewing node]\n";
static const char LIST_ALLOCATE[] = "[List %ld has been allocated]\n";
static const char LIST_DEALLOCATE[] = "[List %ld has been deallocated]\n";

static int debug_on = FALSE;    /* allocation of debug flag */
static long list_counter = 0;   /* the number of lists allocated so far */
/* ---------------------------------------------------------------------------
 * Function Name:   set_debug_off   
 *
 * Description:     sets debug flag to ""off" by setting debug flag to FALSE
 *
 * Input:           does not take in any parameters
 * 
 * Result:          sets debug flag to 0
 *--------------------------------------------------------------------------*/
void set_debug_off (void) {
        debug_on = FALSE;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   set_debug_on   
 *
 * Description:     sets debug flag to "on" by setting debug flag to TRUE
 *
 * Input:           does not take in any parameters
 * 
 * Result:          sets debug flag to number > 0
 *--------------------------------------------------------------------------*/ 
void set_debug_on (void) {
        debug_on = TRUE;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   advance_next_List   
 *
 * Purpose:         Shifts elements of the list backwards by one.
 *
 * Description:     The end pointer of this_list is moved forward by one Node.
 *
 * Input:           this_ list: a pointer to the list
 * 
 * Result:          does not return anything
 *--------------------------------------------------------------------------*/ 
void advance_next_List (List * this_list) {
        /* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   advance_pre_List      
 *
 * Purpose:         Shifts elements of the list forward by one.
 *
 * Description:     The end pointer of this_list is moved backward by on Node
 *
 * Input:           this_list: a pointer to the list
 * 
 * Result:          does not return anything
 *--------------------------------------------------------------------------*/ 
void advance_pre_List (List * this_list) {
        /* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   check_to_go_forward   
 *
 * Purpose:         Checks to see whether moving forward or backward in the
 *                  list to find an item in the list is more efficient.          
 *
 * Description:     If current position mov 
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static long check_to_go_forward (List * this_list, long where) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   delete_List  
 *
 * Purpose:         
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
void delete_List (List ** lpp) {
        /* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   find_location  
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static void find_location (List * this_list, long where) {
        /* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   insert   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
long insert (List * this_list, void * element, long where) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   isempty_List   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
long isempty_List (List * this_list) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   new_List   
 *
 * Purpose:         Allocates and initializes a new List object.
 *
 * Description:     List data feilds are allocated and a pointer to 
 *                  the list is returned.
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
 * Result:
 *--------------------------------------------------------------------------*/  
List * new_List (
        void *(*copy_func) (void *),
        void (*delete_func) (void *),
        FILE *(*write_func) (void *, FILE *)) {
    
    return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   remove_List   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
void * remove_List (List * this_list, long where) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   view   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
void * view (List * this_list, long where) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name: write_List   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
FILE * write_List (List * this_list, FILE * stream) {
        long count;             /* to know how many elements to print */
        Node * working;                 /* working node */

        if (!stream) {
                fprintf (stderr, WRITE_NONEXISTFILE);
                return NULL;
        }

        if (!this_list) {
                fprintf (stderr, WRITE_NONEXISTLIST);
                return NULL;
        }

        if (stream == stderr)
                fprintf (stream, "List %ld has %ld items in it.\n",
                        this_list->list_count, this_list->occupancy);

        if (!this_list->write_func) {
                fprintf (stream, WRITE_MISSINGFUNC);
                return stream;
        }

        if (this_list->occupancy >= 1)
                working = this_list->end->next;

        for (count = 1; count <= this_list->occupancy; count++) {
                if (stream == stderr)
                        fprintf (stream, "\nelement %ld:  ", count);
                write_Node (working, stream, this_list->write_func);
                working = working->next;
        }
                
        return stream;
}
 /* ---------------------------------------------------------------------------
 * Function Name:   write_reverse_List   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
FILE * write_reverse_List (List * this_list, FILE * stream) {
        return stream;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   delete_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static void delete_Node (Node ** npp, void (*delete_func) (void *)) {

        /* does the node exist??? */
        if (!npp || !*npp) {
                fprintf (stderr, DELETE_NONEXISTNODE);
                return;
        }

        /* call function to delete element */
        if (delete_func && (*npp)->data)
                (*delete_func) (&((*npp)->data));

        /* delete element */
        free (*npp);

        /* assign node to NULL */
        *npp = NULL;
}
 /* ---------------------------------------------------------------------------
 * Function Name:   insert_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static Node * insert_Node (Node * this_Node, void * element, 
        void * (*copy_func) (void *)) {

        return this_Node;/* YOUR CODE GOES HERE */
}

 /* ---------------------------------------------------------------------------
 * Function Name:   new_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static Node* new_Node (void * element, void * (*copy_func) (void *)) {

        /* allocate memory */
        Node *this_Node = (Node *) malloc (sizeof (Node));

        /* initialize memory */
        this_Node->next = this_Node->pre = NULL;
        this_Node->data = (copy_func) ? (*copy_func) (element) : element;

        return this_Node;
}
 /* ---------------------------------------------------------------------------
 * Function Name:   remove_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static void * remove_Node (Node * this_Node) {
        return 0;/* YOUR CODE GOES HERE */ 
}
 /* ---------------------------------------------------------------------------
 * Function Name:   view_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static void * view_Node (Node * this_Node) {
        return 0;/* YOUR CODE GOES HERE */
}
 /* ---------------------------------------------------------------------------
 * Function Name:   write_Node   
 *
 * Purpose:
 *
 * Description:
 *
 * Input:
 * 
 * Result:
 *--------------------------------------------------------------------------*/ 
static FILE* write_Node (Node * this_Node, FILE * stream,
        FILE * (*write_func) (void *, FILE *)) {

        if (!stream) {
                fprintf (stderr, WRITE_NONEXISTFILE);
                return NULL;
        }

        if (!this_Node) {
                fprintf (stream, WRITE_NONEXISTNODE);
                return stream;
        }

        if (!write_func) {
                fprintf (stream, WRITE_MISSINGFUNC);
                return stream;
        }

        return (*write_func) (this_Node->data, stream);
}
