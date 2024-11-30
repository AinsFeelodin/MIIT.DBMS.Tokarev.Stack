#pragma once


template <typename T>
class Node {
public:
    T data;           
    Node* next;       

    Node(T value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
};

