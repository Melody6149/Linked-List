| Melody Eastin |
| :---      |
| s198012 |
| Code desin and data structures |
| Linked List Documentation |

## I. Requirements

- Create linked list that can remove add, and search for a node.

## II. Design

The program makes a linked list and can add things to it and remove things from it. It can also search for things.

    ### Object Information:

        File: Linked List.cpp
            Description: Used to call functions in the other classes

        File: Node.h
        Description: template class that stores data that the npode needs.

            Name: info
                Description Used to store something in the node

            Name: next
                Description: pointer to the next node
                
            Name: previouse
                Description: pointer to the previous node

        File: List.h
            Description: Holds all the functions for the list.

                Name: M_first
                    Description:
                    pointer to the first node

                Name: m_last
                    Description: pointer to the last node

                Name: M_count
                    Description: stores the amount of nodes in the list

                Name: begin
                    Description: used to make a iterator
                
                Name: end

                    Description: returns a iterator at the end of the list

                Name: isEmpty
                    Description: Used to check if the list is empty

        File: UnorderedList.h

                Name: InsertFirst
                    Description: Used to insert a new node at the begining of the list

                Name: insertLast
                    Description: inserts a node at the end of the node

                Name: deleteNode
                    Description: Used to delete a node

                Name: search
                    Description: used to search the list for a node

        File: Iterator.h
            Description: used to make iterators

                Name: Iterator
                    Description: constructor used to make the iterator

                Name:Operator
                    Description: used to return the info

                Name: Operator++
                    Description: used to go to the next node

                Name: Operator--
                    Description: used to go to previous node

                Name: Operator==
                    Description: Used to see if it is equal to what it is being compared to
                Name: Operator!-
                    Description: used to see if it does not equal what it is being compared to
