#pragma once
#include <vector>
#include "book.h"

struct library {
    std::vector<book> books;
    void add_book(book book);
    void remove_book(std::string title);
    book* find_book(std::string title);
    void list_books();
};