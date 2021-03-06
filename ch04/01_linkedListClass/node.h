/** @file Node.h */
#ifndef _NODE
#define _NODE

#include <cstddef>

template<class ItemType>

class Node {

private :
    ItemType item; // A data item
    Node<ItemType> *next; // Pointer to next node
public :
    Node();

    Node(const ItemType &anItem);

    Node(const ItemType &anItem, Node<ItemType> *nextNodePtr);

    //mutator can only access the element
    void setItem(const ItemType &anItem);

    void setNext(Node<ItemType> *nextNodePtr);

    //accessor should be const function, since the client cannot modify the data
    ItemType getItem() const;

    Node<ItemType> *getNext() const;

};

template<class ItemType>
Node<ItemType>::Node() : next(nullptr) {
}

template<class ItemType>
Node<ItemType>::Node(const ItemType &anItem) :
        item(anItem),
        next(nullptr) {
}

template<class ItemType>
Node<ItemType>::Node(const ItemType &anItem, Node<ItemType> *nextNodePtr) :
        item(anItem),
        next(nextNodePtr) {
}

template<class ItemType>
void Node<ItemType>::setItem(const ItemType &anItem) {
    item = anItem;
}

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType> *nextNodePtr) {
    next = nextNodePtr;
}

template<class ItemType>
ItemType Node<ItemType>::getItem() const {
    return item;
}

template<class ItemType>
Node<ItemType> *Node<ItemType>::getNext() const {
    return next;
}


#endif