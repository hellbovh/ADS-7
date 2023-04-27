// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <string>

template<typename T>
class TPQueue {
 private:
    struct Item {
        T value;
        Item* next;
    };
    Item* head;
    TPQueue::Item* create(const T&);

 public:
    TPQueue(): head(nullptr) {}
    ~TPQueue() {}
    void push(const T&);
    const T& pop();
};

template<typename T>
typename TPQueue<T>::Item* TPQueue<T>::create(const T& value) {
    Item* temp = new Item;
    temp->value = value;
    temp->next = nullptr;
    return temp;
}

struct SYM {
    char ch;
    int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
