Node *pairWiseSwap(struct Node *head)
{
    // The task is to complete this method
    Node *temp = new Node(0);
    temp->next = head;
    Node *prev = temp;
    Node *curr = head;

    while (curr != NULL and curr->next != NULL)
    {

        Node *nodenext = curr->next;
        Node *nnn = curr->next->next;
        nodenext->next = curr;
        curr->next = nnn;
        prev->next = nodenext;
        prev = curr;
        curr = nnn;
    }
    return temp->next;