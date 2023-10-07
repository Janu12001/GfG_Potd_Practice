Node *new_node = new Node(data);

// Case 1: If the linked list is empty or data is less than the head node
if (head == NULL || head->data > data)
{
    new_node->next = head;
    return new_node;
}

// Case 2: Insert the new node in the appropriate position
Node *current = head;
while (current->next != NULL && current->next->data < data)
{
    current = current->next;
}

new_node->next = current->next;
current->next = new_node;

return head;
}