#include <iostream>
#include "library.h"
#include "writer.h"
#include <locale>
#include <Windows.h>

int main() {
    std::setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    library library;
    writer writer;

    while (true) {
        int choice = 0;
        std::cout << "Ìåíþ:\n";
        std::cout << "1. Äîáàâèòü êíèãó\n";
        std::cout << "2. Óäàëèòü êíèãó\n";
        std::cout << "3. Íàéòè êíèãó\n";
        std::cout << "4. Ïîêàçàòü âñå êíèãè\n";
        std::cout << "5. Âûéòè\n";
        std::cout << "Âûáåðèòå îïöèþ: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cin.ignore();
            book book;
            std::string buffer;
            std::cout << "Ââåäèòå íàçâàíèå êíèãè: ";
            std::getline(std::cin, book.title);
            std::cout << "Ââåäèòå àâòîðà êíèãè: ";
            std::getline(std::cin, book.author);
            std::cout << "Ââåäèòå ãîä èçäàíèÿ: ";
            std::cin >> book.year;
            if (!std::cin) { std::cout << "Ãîä äîëæåí áûòü ÷èñëîì!\n"; continue; }
            std::cin.ignore();
            std::cout << "Ââåäèòå æàíð êíèãè: ";
            std::getline(std::cin, book.genre);
            library.add_book(book);
        }
        else if (choice == 2) {
            std::string title;
            std::cin.ignore();
            std::cout << "Ââåäèòå íàçâàíèå êíèãè: ";
            std::getline(std::cin, title);
            library.remove_book(title);
        }
        else if (choice == 3) {
            std::string title;
            std::cin.ignore();
            std::cout << "Ââåäèòå íàçâàíèå êíèãè: ";
            std::getline(std::cin, title);
            book* finded_book = library.find_book(title);

            finded_book == nullptr
                ? std::cout << "Êíèãà íå íàéäåíà"
                : std::cout << "Íàéäåíà êíèãà: " << finded_book->title << "\n"
                << "Àâòîð: " << finded_book->author << "\n"
                << "Ãîä: " << finded_book->year << "\n"
                << "Æàíð: " << finded_book->genre << "\n";
        }
        else if (choice == 4) {
            std::cin.ignore();
            library.list_books();
        }
        else break;
    };

    return 0;
}