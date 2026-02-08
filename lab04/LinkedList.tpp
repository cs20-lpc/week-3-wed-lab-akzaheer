template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    // TODO
    Node* newNode = new Node(elem);
    if(head == nullptr){        // if empty attatch the node to head
        head = newNode;
    }
    else{                       // if not then traverse through it and attatch when there is null
        Node* cur = head;
        while(cur->next != nullptr){            // use current to traverse over and over
            cur = cur->next;
        }
        cur->next = newNode;        // making the ptr point to new node;
    }
    this->length++;
}

template <typename T>
void LinkedList<T>::clear() {
    // TODO
    Node* cur = head;       // make current at the same place as head

    while(cur != nullptr){      // go through list until null; throughout list save current node to delete it and then move to next one and delete previous
        Node* temp = cur;
        cur = cur->next;
        delete temp;
    }
    head = nullptr;     // set head to null and make length 0
    this->length = 0;
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    // TODO
    Node* cur = head;           // same stuff as before, make the current where the head is and also set index to 0 for later
    int index = 0;

    while (cur != nullptr){
        if(index == position){
            return cur->value;          // if element found then return it
        }
        cur = cur->next;                // if not found then move forward and increase index
        index++;
    }

    throw string("invalid position");        // throw invalid if not found becasue if found it returns before this
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    // TODO
    Node* cur = head;           // same stuff as before, make the current where the head is and also set index to 0 for later
    int index = 0;

    while (cur != nullptr){
        if(index == position){
            cur->value = elem;
            return;         // change value then return if found what to change
        }
        cur = cur->next;                // if not found then move forward and increase index
        index++;
    }
    throw string("invalid position");        // throw invalid if not found becasue if found it returns before this
}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
