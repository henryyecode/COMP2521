// testList.c - testing DLList data type
// Written by John Shepherd, March 2013

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "DLList.h"

int main (void)
{
	DLList myList = getDLList (stdin);
	putDLList (stdout, myList);
	assert (validDLList (myList));

	// TODO: more tests needed here


    //insert before into an empty list
    DLList dll = newDLList();
    DLListBefore(dll, "hey");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert before into a list with one element
    DLListBefore(dll, "hi");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert before at beginning of list
    DLListBefore(dll, "hola");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert before into the middle of a list
    DLListMoveTo(dll, 2);
    DLListBefore(dll, "hello");
    assert (validDLList (dll));
    printf("list should be hola, hello, hi, hey\n");
    
    putDLList (stdout, dll);
    
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete middle of list (curr = next item)
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete last item of list (curr = last item)
    DLListMoveTo(dll, 3);
    DLListDelete(dll);
    assert (validDLList (dll));
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete item from list of size 1
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete item in an empty list (should fail)
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert after into an empty list
    DLListAfter(dll, "hey");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert after into a list with one element
    DLListAfter(dll, "hi");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert after at the end of list
    DLListAfter(dll, "hola");
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //insert after into the middle of a list
    DLListMoveTo(dll, 1);
    DLListAfter(dll, "hello");
    assert (validDLList (dll));
    printf("should read hey, hello, hi, hola\n");
    putDLList (stdout, dll);
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    
    //delete middle of list (curr = next item)
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete first item of list (curr = last item)
    DLListMoveTo(dll, 1);
    DLListDelete(dll);
    assert (validDLList (dll));
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete item from list of size 1
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));
    //delete item in an empty list (should fail)
    DLListDelete(dll);
    assert (validDLList (dll));
    printf("nitems = %zu\n", DLListLength(dll));
    
    printf("current value = %s\n", DLListCurrent(dll));

	freeDLList (myList);
	freeDLList(dll);
	return EXIT_SUCCESS;
}

