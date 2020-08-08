#include "ListsTest/VectorTest/VectorTest.h"
#include "ListsTest/ArrayListTest/ArrayListTest.h"
#include "LinkedListsTest/LinkedListTest/LinkedListTest.h"
#include "LinkedListsTest/DoublyLinkedListTest/DoublyLinkedListTest.h"
#include "StacksTest/StackTest/StackTest.h"
#include "StacksTest/DLinkedListStackTest/DLinkedListStackTest.h"
#include "QueuesTest/QueueTest/QueueTest.h"
#include "QueuesTest/StackQueueTest/StackQueueTest.h"
#include "QueuesTest/LinkedListQueueTest/LinkedListQueueTest.h"
#include "QueuesTest/PriorityQueueTest/PriorityQueueTest.h"
#include "DequesTest/DequeTest/DequeTest.h"
#include "DequesTest/DoublyLinkedListDequeTest/DoublyLinkedListDequeTest.h"
#include "MatricesTest/MatrixTest/MatrixTest.h"
#include "StringsTest/StringTest/StringTest.h"
#include "TablesTest/HashMapTest/HashMapTest.h"
#include "TablesTest/DounlyLinkedListHashMapTest/DoublyLinkedListHashMapTest.h"
#include "TablesTest/HashSetTest/HashSetTest.h"
#include "GraphsTest/DirectedGraphTest/DirectedGraphTest.h"
#include "GraphsTest/UndirectedGraphTest/UndirectedGraphTest.h"
#include "TreesTest/TrieTest/TrieTest.h"
#include "TreesTest/RedBlackTreeTest/RedBlackTreeTest.h"
#include "TreesTest/BinaryTreeTest/BinaryTreeTest.h"
#include "TreesTest/BinaryHeapTest/BinaryHeapTest.h"
#include "TreesTest/AVLTreeTest/AVLTreeTest.h"
#include "TreesTest/SplayTreeTest/SplayTreeTest.h"
#include "SortAlgTests/SortAlgTest.h"
#include "SearchAlgTests/SearchAlgTest.h"
#include "IntegerAlgTest/IntegerAlgTest.h"
#include "InputScannerTest/InputScannerTest.h"
#include "ArraysAlgTest/ArraysAlgTest.h"
#include "TxtFileLoaderTest/TxtFileLoaderTest.h"
#include "CharArrayAlgTest/CharArrayAlgTest.h"




int main(void) {

    // Data structure tests:
    vectorUnitTest();
    arrayListUnitTest();
    linkedListUnitTest();
    doublyLinkedListUnitTest();
    stackUnitTest();
    doublyLinkedListStackUnitTest();
    queueUnitTest();
    stackQueueUnitTest();
    linkedListQueueUnitTest();
    priorityQueueUnitTest();
    dequeUnitTest();
    doublyLinkedListDequeUnitTest();
    matrixUnitTest();
    stringUnitTest();
    hashMapUnitTest();
    doublyLinkedListHashMapUnitTest();
    hashSetUnitTest();
    directedGraphUnitTest();
    undirectedGraphUnitTest();
    trieUnitTest();
    redBlackTreeUnitTest();
    binaryTreeUnitTest();
    binaryHeapUnitTest();
    avlTreeUnitTest();
    splayTreeUnitTest();


    // Sorting and searching tests:
    sortAlgUnitTest();
    searchAlgUnitTest();


    // Integer algorithms test:
    integerAlgUnitTest();


    // Arrays algorithms tests:
    arraysAlgUnitTest();
    charArrayAlgUnitTest();


    // Files Handlers tests:
    txtFileLoaderAlgUnitTest();
    inputScannerUnitTest();


    return 0;

}

