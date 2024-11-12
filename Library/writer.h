#pragma once
#include <string>
#include <vector>
#include "book.h"

struct fullname {
    std::string firstname;
    std::string surname;
};

struct writer {
    fullname name;
    std::string birthday; //DD:MM:YYYY
    int age;
    std::vector<book> books;

    void change_name(std::string firstname);
    void change_surname(std::string surname);
    void write_book(book book);
};