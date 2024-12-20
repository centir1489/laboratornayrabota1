#include"Queue.h"


bool IsEmpty(Queue queue){
    return queue.Head == nullptr;
}

size_t QSize(Queue queue){
    if(IsEmpty(queue)){
            return 0;
    }
    size_t size = 0;
    QNode* ptr = queue.Head;
    while(ptr){
        size++;
        ptr = ptr -> next;
    }
    return size;
}

std::string Front(Queue queue){
    if(queue.Head == nullptr){
        return "";
    }
    return queue.Head -> Data;
}

void QPUSH(Queue& queue, std::string Value){
    QNode* ptr = new QNode({Value, nullptr});
    if(IsEmpty(queue)){ 
       queue.Head = ptr;
       queue.Tail = ptr;
       return;
    }
    queue.Tail -> next = ptr;
    queue.Tail = ptr;
}

void QPOP(Queue& queue){
    if(IsEmpty(queue)){ 
       return;
    }
    QNode* ptr = queue.Head;
    queue.Head = ptr -> next;
    delete ptr; 
}

void QGET(Queue queue){
    if(IsEmpty(queue)){ 
            return;
    }
    QNode* ptr = queue.Head;
    while(ptr){
        std::cout << ptr -> Data << ' ';
        ptr = ptr -> next;
    }
    std::cout << '\n';
}