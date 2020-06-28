#include "../Headers/DLinkedListStack.h"




/** This function will take the size of the items in the stack as a parameters,
    then it will initialize the stack and return it's address.
 * @param sizeOfType
 * @return
 */

DLinkedListStack *dlStackInitialization(int sizeOfType) {

    DLinkedListStack *stack = (DLinkedListStack *) malloc(sizeof(DLinkedListStack));

    stack->linkedList = doublyLinkedListInitialization(sizeOfType);

    return stack;

}





/** This function will take the stack address, and the item address a a parameters,
    then it will pushStack the item into the stack.
 * @param stack
 * @param item
 */

void dlStackPush(DLinkedListStack *stack, void *item) {
    if (stack == NULL) {
         fprintf(stderr,"Illegal argument, the stack is NULL.");
        exit(-4);
    }

    doublyLinkedListAddLast(stack->linkedList, item);

}





/** This function will take the stack address, the array address, and the array length as a parameters,
    then it will add all the array items into the stack in order.
 * @param stack
 * @param arr
 * @param arrLength
 */

void dlStackAddAll(DLinkedListStack *stack, void *arr, int arrLength) {
    if (stack == NULL) {
        fprintf(stderr,"Illegal argument, the stack is NULL.");
        exit(-4);
    }

    void *item;
    for (int i = 0; i < arrLength; i++) {
        item = (void *) malloc(stack->linkedList->sizeOfType);
        memcpy(item, arr + stack->linkedList->sizeOfType * i, stack->linkedList->sizeOfType);
        doublyLinkedListAddLast(stack->linkedList, item);
    }

}





/** This function will take the stack address as a parameter,
    then it will return the last item that pushed to the stack,
    then the item will be removed from the stack.
 * Note: if the stack i empty the program will be terminated.
 * @param stack
 * @return
 */

void *dlStackPop(DLinkedListStack *stack) {

    if (stack == NULL) {
         fprintf(stderr,"Illegal argument, the stack is NULL.");
        exit(-4);
    } else if (dlStackIsEmpty(stack)) {
         fprintf(stderr,"Illegal state, the stack is empty.");
        exit(-4);
    }

    void *item = doublyLinkedListGetLast(stack->linkedList);
    doublyLinkedListDeleteLastWtFr(stack->linkedList);

    return item;
}






/** This function will take the stack address as a parameter,
    then it will return a void array pointer that contains all the stack items.
 * @param stack
 * @return
 */

void *dlStackToArray(DLinkedListStack *stack) {

    if (stack == NULL) {
        fprintf(stderr,"Illegal argument, the stack is NULL.");
        exit(-4);
    }

    return doublyLinkedListToArray(stack->linkedList);
}






/** This function will take the stack address as a parameter,
    then it will return the last item that pushed to the stack,
    without removing the item from the stack.
 * Note: if the stack i empty the program will be terminated.
 * @param stack
 * @return
 */

void *dlStackPeek(DLinkedListStack *stack) {

    if (stack == NULL) {
         fprintf(stderr,"Illegal argument, the stack is NULL.");
        exit(-4);
    } else if (dlStackIsEmpty(stack)) {
         fprintf(stderr,"Illegal state, the stack is empty.");
        exit(-4);
    }

    void *item = doublyLinkedListGetLast(stack->linkedList);

    return item;
}





/** This function will take the stack address as a parameter,
    then it will return the number of the items in the stack.
 * @param stack
 * @return
 */

int dlStackGetLength(DLinkedListStack *stack) {
    return stack->linkedList->length;
}


/** This function will take the stack address as a parameter,
    then it will return one (1) if the stack is empty,
    other wise it will return zero (0).
 * @param stack
 * @return
 */

int dlStackIsEmpty(DLinkedListStack *stack) {
    return doublyLinkedListIsEmpty(stack->linkedList);
}





/** This function will take the stack address as a parameter,
    then it will delete and free the stack from all it's items.
 * @param stack
 */

void clearDLStack(DLinkedListStack *stack) {
    doublyLinkedListClear(stack->linkedList);
}




/** This function will take the stack address as a parameter,
 * then it will destroy and free the stack and all it's items.
 * @param stack
 */

void destroyDLStack(DLinkedListStack *stack) {
    destroyDoublyLinkedList(stack->linkedList);
    free(stack);
}