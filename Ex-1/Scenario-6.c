class Node:
    def __init__(self, book):
        self.book = book
        self.prev = None
        self.next = None

class Library:
    def __init__(self):
        self.head = None
        self.tail = None

    def add_book(self, book):
        new_node = Node(book)
        if not self.head:
            self.head = self.tail = new_node
        else:
            self.tail.next = new_node
            new_node.prev = self.tail
            self.tail = new_node
        print(f"Added: {book}")

    def remove_book(self, book):
        if not self.head:
            print("Library is empty.")
            return
        temp = self.head
        while temp and temp.book != book:
            temp = temp.next
        if not temp:
            print(f"{book} not found.")
            return
        if temp == self.head:
            self.head = self.head.next
            if self.head:
                self.head.prev = None
        elif temp == self.tail:
            self.tail = self.tail.prev
            self.tail.next = None
        else:
            temp.prev.next = temp.next
            temp.next.prev = temp.prev
        print(f"Removed: {book}")

    def display_books_forward(self):
        if not self.head:
            print("No books available.")
            return
        print("\n--- Books in Library (Forward) ---")
        temp = self.head
        while temp:
            print(temp.book)
            temp = temp.next
        print("--------------------------------")

    def display_books_reverse(self):
        if not self.tail:
            print("No books available.")
            return
        print("\n--- Books in Library (Reverse) ---")
        temp = self.tail
        while temp:
            print(temp.book)
            temp = temp.prev
        print("--------------------------------")

library = Library()
library.add_book("Book A")
library.add_book("Book B")
library.add_book("Book C")
library.display_books_forward()
library.remove_book("Book B")
library.display_books_forward()
library.display_books_reverse()
