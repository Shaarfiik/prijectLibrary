#include "writer.h"

void writer::change_name(std::string firstname) {
    this->name.firstname = firstname;
}

void writer::change_surname(std::string surname) {
    this->name.surname = surname;
}

void writer::write_book(book book) {
    this->books.push_back(book);
}