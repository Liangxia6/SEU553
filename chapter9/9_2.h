#ifndef DOUBLY_LINKED_NODE_CLASS
#define DOUBLY_LINKED_NODE_CLASS
template <class T>
class DNode
{
private:
    // circular links to the left and right
    DNode<T> *left;
    DNode<T> *right;

public:
    // data is public
    T data;
    // constructors
    DNode(void);
    DNode(const T &item);
    // list modification methods
    void InsertRight(DNode<T> *p);
    void InsertLeft(DNode<T> *p);
    DNode<T> *DeleteNode(void);
    // obtain address of the next node to the left or right
    DNode<T> *NextNodeRight(void) const;
    DNode<T> *NextNodeLeft(void) const;
};
// constructor that creates an empty list and
// leaves the data uninitialized. use for header
template <class T>
DNode<T>::DNode(void)
{
    // initialize the node so it points to itself
    left = right = this;
}
// constructor that creates an empty list and initializes data
template <class T>
DNode<T>::DNode(const T &item)
{
    // set node to point to itself and initialize data
    left = right = this;
    data = item;
}
// insert a node p to the right of current node
template <class T>
void DNode<T>::InsertRight(DNode<T> *p)
{
    // link p to its successor on the right
    p->right = right;
    right->left = p;
    // link p to the current node on its left
    p->left = this;
    right = p;
}
// insert a node p to the left of current node
template <class T>
void DNode<T>::InsertLeft(DNode<T> *p)
{
    // link p to its successor on the left
    p->left = left;
    left->right = p;
    // link p to the current node on its right
    p->right = this;
    left = p;
}
// unlink the current node from the list and return its address
template <class T>
DNode<T> *DNode<T>::DeleteNode(void)
{
    // node to the left must be linked to current node's right
    left->right = right;
    // node to the right must be linked to current node's left
    right->left = left;
    // return the address of the current node
    return this;
}
// return pointer to the next node on the right
template <class T>
DNode<T> *DNode<T>::NextNodeRight(void) const
{
    return right;
}
// return pointer to the next node on the left
template <class T>
DNode<T> *DNode<T>::NextNodeLeft(void) const
{
    return left;
}
#endif // DOUBLY_LINKED_NODE_CLASS