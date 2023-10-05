void rearrange(struct Node *odd)
{
    Node *end = odd;
    while (end->next)
    {
        end = end->next;
    }
    Node *temp = odd;
    Node *bet = NULL;
    while (temp->next != end && temp != end)
    {
        Node *curr = temp->next;
        temp->next = temp->next->next;
        curr->next = bet;
        bet = curr;
        temp = temp->next;
    }
    end->next = bet;
}