/** @file Node.h */
#ifndef _NODE
#define _NODE

template <class ItemType>

class Node
{

private:
	ItemType item; // A data item
	Node<ItemType>* next; // Pointer to next node
	Node<ItemType>* prev; // Pointer to prev node

public:
	//@post: sets next to NULL
	Node();
	
	Node(const ItemType& anItem);
	
	//@pre: anItem is a data type; nextNodePtr is a pointer
	//@post: Creates a new Node with ItemType anItem and a head pointer pointing to *nextNodePtr
	Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
	
	//@pre: anItem is an object or data type
	//@post: sets node with data item of anItem type
	void setItem(const ItemType& anItem);
	
	//@pre: nextNodePtr is a pointer
	//@post: sets head ptr of Node to nextNodePtr
	void setNext(Node<ItemType>* nextNodePtr);
	
	//@pre: prevNodePtr is a pointer
	//@post: set tail pointer of Node to prevNodePtr
	void setPrev(Node<ItemType>* prevNodePtr);
	
	//@post: returns item of Node
	ItemType getItem() const;
	
	//@post: returns next Node
	Node<ItemType>* getNext() const;
	
	//@post: returns previous Node
	Node<ItemType>* getPrev() const;

}
; // end Node
#endif //_NODE_H__