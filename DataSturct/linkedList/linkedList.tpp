#pragma once
// 节点构造函数
template <typename T>
node<T>::node(T data) : data(T()), index(0), next(nullptr), last(nullptr)
{
    this->data = data;
}

// 默认节点构造函数
template <typename T>
node<T>::node() : data(T()), index(0), next(nullptr), last(nullptr)
{
}

// 头插法插入节点
template <typename T>
void node<T>::push_front(T new_data)
{
    if (&this->data == nullptr)
    {
        this->data = new_data;
        return;
    }
    node *mynode = new node;
    mynode->data = new_data;
    mynode->index = 0;
    node *temp = this;

    while (temp->last != nullptr)
    {
        temp = temp->last;
    }
    mynode->next = temp;
    mynode->last = temp->last;
    temp->last = mynode;
    while (temp != nullptr)
    {
        temp->index = temp->index + 1;
        temp = temp->next;
    }
}

// 尾插法插入节点
template <typename T>
void node<T>::push_back(T new_data)
{
    if (&this->data == nullptr)
    {
        this->data = new_data;
        return;
    }
    node *mynode = new node;
    mynode->data = new_data;
    node *temp = this;
    // 将temp遍历到尾节点
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    mynode->index = (temp->index) + 1;
    mynode->last = temp;
    mynode->next = temp->next;
    temp->next = mynode;
}

// 链接节点
template <typename T>
void node<T>::link_node(unsigned int index_x, unsigned int index_y, const bool condition)
{
    node *temp_x = this;
    node *temp_y = this;
    // 将temp_x和temp_y分配到index_x和index_y所在的节点
    if (temp_x->index > index_x)
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->last;
        }
    }
    else
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->next;
        }
    }
    if (temp_y->index > index_y)
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->last;
        }
    }
    else
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->next;
        }
    }

    if (condition)
    {
        // 链接
        temp_x->next = temp_y;
        temp_y->last = temp_x;
        // 处理index
        if (index_x < index_y)
        {
            temp_y->index = temp_x->index + 1;
            while (temp_y->next != nullptr)
            {
                temp_y = temp_y->next;
                temp_y->index = temp_y->last->index + 1;
            }
        }
        else
        {
            return;
        }
    }
    else
    {
        // 链接
        temp_y->next = temp_x;
        temp_x->last = temp_y;
        // 处理index
        if (index_x > index_y)
        {
            temp_x->index = temp_y->index + 1;
            while (temp_x->next != nullptr)
            {
                temp_x = temp_x->next;
                temp_x->index = temp_x->last->index + 1;
            }
        }
        else
        {
            return;
        }
    }
}

// 更新节点
template <typename T>
void node<T>::update_node(unsigned int up_index, T new_data)
{
    // 寻找需要更新的节点
    node *temp = this;
    if (this->index > up_index)
    {
        while (temp->index != up_index)
        {
            temp = temp->last;
        }
    }
    else
    {
        while (temp->index != up_index)
        {
            temp = temp->next;
        }
    }
    // 更新数据
    temp->data = new_data;
}

// 删除节点
template <typename T>
void node<T>::del_node(unsigned int del_index)
{
    // 删除this指针所在节点
    if (del_index == this->index)
    {
        this->last->next = this->next;
        this->next->last = this->last;
        // index重排
        node *temp1 = this->next;
        temp1->index = this->index;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
            temp1->index = temp1->last->index + 1;
            if (temp1->next->index < temp1->index)
            {
                break;
            }
        }
        return;
    }
    node *temp = this;
    // 定位temp到要删除的节点位置
    if (temp->index > del_index)
    {
        while (temp->index != del_index)
        {
            temp = temp->last;
        }
    }
    else
    {
        while (temp->index != del_index)
        {
            temp = temp->next;
        }
    }
    // index重排
    node *temp1 = temp->next;
    temp1->index = temp->index;
    while (temp1->next != nullptr)
    {
        temp1 = temp1->next;
        temp1->index = temp1->last->index + 1;
        // 循环链表判断
        if (temp1->next->index < temp1->index)
        {
            break;
        }
    }
    // 执行指针重排
    if (del_index == 0)
    {
        temp->next->last = temp->last;
        return;
    }
    temp->last->next = temp->next;
    temp->next->last = temp->last;
}

// 插入节点
template <typename T>
bool node<T>::insert_node(unsigned int index_x, unsigned int index_y, T new_data)
{
    if (index_x + 1 != index_y && index_x - 1 != index_y)
    {
        std::cerr << "insert error" << std::endl;
        return false;
    }
    node *temp_x = this;
    node *temp_y = this;
    // 将temp_x和temp_y分配到index_x和index_y所在的节点
    if (temp_x->index > index_x)
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->last;
        }
    }
    else
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->next;
        }
    }
    if (temp_y->index > index_y)
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->last;
        }
    }
    else
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->next;
        }
    }
    // 插入节点
    node *new_node = new node;
    new_node->data = new_data;
    if (index_x < index_y)
    {
        temp_x->next = new_node;
        temp_y->last = new_node;
        new_node->last = temp_x;
        new_node->next = temp_y;
        // 更新index
        node *temp1 = temp_x;
        while (temp1->next != nullptr)
        {
            temp1->next->index = temp1->index + 1;
            temp1 = temp1->next;
            // 循环链表判断
            if (temp1->index > temp1->next->index)
            {
                break;
            }
        }
    }
    else
    {
        temp_x->last = new_node;
        temp_y->next = new_node;
        new_node->last = temp_y;
        new_node->next = temp_x;
        // 更新index
        node *temp2 = temp_y;
        while (temp2->next != nullptr)
        {
            temp2->next->index = temp2->index + 1;
            temp2 = temp2->next;
            // 循环链表判断
            if (temp2->index > temp2->next->index)
            {
                break;
            }
        }
    }
    return true;
}

// 交换节点
template <typename T>
void node<T>::swap_node(unsigned int index_x, unsigned int index_y)
{
    node *temp_x = this;
    node *temp_y = this;
    // 将temp_x和temp_y分配到index_x和index_y所在的节点
    if (temp_x->index > index_x)
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->last;
        }
    }
    else
    {
        while (temp_x->index != index_x)
        {
            temp_x = temp_x->next;
        }
    }
    if (temp_y->index > index_y)
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->last;
        }
    }
    else
    {
        while (temp_y->index != index_y)
        {
            temp_y = temp_y->next;
        }
    }
    T temp_data = temp_x->data;
    temp_x->data = temp_y->data;
    temp_y->data = temp_data;
    delete (temp_data);
}

// 合并链表
template <typename T>
bool node<T>::merge_list(node &obj)
{
    node *temp1 = this;
    node *temp2 = &obj;
    // 将temp1遍历到尾节点，将temp2遍历到头节点
    while (temp1->next != nullptr)
    {
        if (temp1->next->index < temp1->index)
        {
            std::cerr << "Main list is Circular linked list" << std::endl;
            return false;
        }
        temp1 = temp1->next;
    }
    while (temp2->last != nullptr)
    {
        if (temp2->last->index > temp2->index)
        {
            std::cerr << "From list is Circular linked list" << std::endl;
            return false;
        }
        temp2 = temp2->last;
    }
    temp1->next = temp2;
    temp2->last = temp1;
    // 对其index
    while (temp2 != nullptr)
    {
        temp2->index = temp2->last->index + 1;
        temp2 = temp2->next;
    }
    return true;
}

// 打印链表
template <typename T>
void node<T>::print_list()
{
    node *temp = this;
    while (temp->last != nullptr)
    {
        // 循环链表判断
        if (temp->last->index > temp->index)
        {
            break;
        }
        temp = temp->last;
    }
    do
    {
        std::cout << temp->index << ":" << temp->data << std::endl;
        temp = temp->next;
    } while (temp != nullptr);
}

// 返回链表长度
template <typename T>
unsigned int node<T>::size()
{
    node *temp = this;
    while (temp->next != nullptr)
    {
        if (temp->next->index < temp->index)
        {
            break;
        }
        temp = temp->next;
    }
    return temp->index + 1;
}

// 清空链表
template <typename T>
void node<T>::clear()
{
    node *temp1 = this;
    node *temp2 = this;
    // 将temp1遍历到链表头并处理循环链表
    while (temp1->last != nullptr)
    {
        if (temp1->last->index > temp1->index)
        {
            temp1 = this->next;
            while (temp1 != this)
            {
                temp1 = temp1->next;
                delete (temp1->last);
                temp1->last = nullptr;
                goto end;
            }
        }
        temp1 = temp1->last;
    }
    // 销毁this指针前的节点
    while (temp1 != this)
    {
        temp1 = temp1->next;
        delete (temp1->last);
        temp1->last = nullptr;
    }
    // 将temp2遍历到表尾
    while (temp2->next != nullptr)
    {
        temp2 = temp2->next;
    }

    while (temp2 != this)
    {
        temp2 = temp2->last;
        delete (temp2->next);
        temp2->next = nullptr;
    }
end:
    // 对齐颗粒度
    this->index = 0;
    this->data = T();
    this->last = nullptr;
    this->next = nullptr;
}
