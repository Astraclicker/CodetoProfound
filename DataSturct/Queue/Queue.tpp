#pragma once
//显式默认构造
template<typename T>
queue<T>::queue() : head(nullptr), end(nullptr) {
}

//返回队首元素
template<typename T>
T queue<T>::front() {
    return this->head->data;
}

//返回队尾元素
template<typename T>
T queue<T>::back() {
    return this->end;
}

//在对尾添加一个元素
template<typename T>
void queue<T>::push(T data) {
    auto *temp = new node_queue<T>;
    temp->data = data;
    temp->last = this->end;
    temp->next = nullptr;

    if (this->head == nullptr) {
        this->head = temp;
    } else {
        this->end->next = temp;
    }
    this->end = temp;
}

//移除队首元素
template<typename T>
void queue<T>::pop() {
    if (this->head->next == nullptr) {
        delete(this->head);
        this->head = nullptr;
        return;
    }
    this->head = this->head->next;
    delete(this->head->last);
    this->head->last = nullptr;
}

//检测队列是否为空
template<typename T>
bool queue<T>::empty() {
    if (this->head == nullptr) {
        return true;
    } else {
        return false;
    }
}

//返回队列长度
template<typename T>
unsigned int queue<T>::length() {
    node_queue<T> *temp = this->head;
    unsigned int cnt = 1;
    if (temp == nullptr) {
        return 0;
    }
    while (temp->next !=nullptr) {
        cnt++;
        temp = temp->next;
    }
    return cnt;

}
