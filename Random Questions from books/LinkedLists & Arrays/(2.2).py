def linked_list_length(node):
    length = 0
    while node:
        length += 1
        node = node.next
    return length

def kth_to_last_node(node, k):
    length = linked_list_length(node)
    if k < 1 or k > length:
        raise IndexError("index out of range")
    for _ in range(length - k):
        node = node.next
    return node
