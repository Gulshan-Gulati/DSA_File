#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <unordered_map>

class Book {
public:
    std::string title;
    std::string author;
    int id;
    bool isAvailable;

    Book(int id, const std::string& title, const std::string& author)
        : id(id), title(title), author(author), isAvailable(true) {}

    void display() const {
        std::cout << "ID: " << id << ", Title: " << title << ", Author: " << author << ", Available: " << (isAvailable ? "Yes" : "No") << "\n";
    }
};

class Patron {
public:
    std::string name;
    int id;

    Patron(int id, const std::string& name) : id(id), name(name) {}

    void display() const {
        std::cout << "ID: " << id << ", Name: " << name << "\n";
    }
};

class Library {
private:
    std::vector<std::shared_ptr<Book>> books;
    std::unordered_map<int, std::shared_ptr<Patron>> patrons;

public:
    void addBook(int id, const std::string& title, const std::string& author) {
        books.push_back(std::make_shared<Book>(id, title, author));
        std::cout << "Book added: " << title << " by " << author << "\n";
    }

    void displayBooks() const {
        for (const auto& book : books) {
            book->display();
        }
    }

    void addPatron(int id, const std::string& name) {
        patrons[id] = std::make_shared<Patron>(id, name);
        std::cout << "Patron added: " << name << "\n";
    }

    void displayPatrons() const {
        for (const auto& pair : patrons) {
            pair.second->display();
        }
    }

    void checkOutBook(int bookId, int patronId) {
        auto book = findBookById(bookId);
        if (book && book->isAvailable) {
            auto patron = findPatronById(patronId);
            if (patron) {
                book->isAvailable = false;
                std::cout << patron->name << " checked out " << book->title << "\n";
            } else {
                std::cout << "Patron ID " << patronId << " not found.\n";
            }
        } else {
            std::cout << "Book ID " << bookId << " not available or not found.\n";
        }
    }

    void returnBook(int bookId) {
        auto book = findBookById(bookId);
        if (book && !book->isAvailable) {
            book->isAvailable = true;
            std::cout << book->title << " has been returned.\n";
        } else {
            std::cout << "Book ID " << bookId << " not found or is already available.\n";
        }
    }

private:
    std::shared_ptr<Book> findBookById(int id) const {
        for (const auto& book : books) {
            if (book->id == id) {
                return book;
            }
        }
        return nullptr;
    }

    std::shared_ptr<Patron> findPatronById(int id) const {
        auto it = patrons.find(id);
        if (it != patrons.end()) {
            return it->second;
        }
        return nullptr;
    }
};

int main() {
    Library library;
    int choice;
    int id;
    std::string title, author, name;

    while (true) {
        std::cout << "\n1. Add Book\n";
        std::cout << "2. Display Books\n";
        std::cout << "3. Add Patron\n";
        std::cout << "4. Display Patrons\n";
        std::cout << "5. Check-Out Book\n";
        std::cout << "6. Return Book\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter book ID: ";
            std::cin >> id;
            std::cin.ignore();
            std::cout << "Enter book title: ";
            std::getline(std::cin, title);
            std::cout << "Enter book author: ";
            std::getline(std::cin, author);
            library.addBook(id, title, author);
            break;
        case 2:
            library.displayBooks();
            break;
        case 3:
            std::cout << "Enter patron ID: ";
            std::cin >> id;
            std::cin.ignore();
            std::cout << "Enter patron name: ";
            std::getline(std::cin, name);
            library.addPatron(id, name);
            break;
        case 4:
            library.displayPatrons();
            break;
        case 5:
            std::cout << "Enter book ID: ";
            std::cin >> id;
            std::cout << "Enter patron ID: ";
            std::cin >> id;
            library.checkOutBook(id, id);
            break;
        case 6:
            std::cout << "Enter book ID: ";
            std::cin >> id;
            library.returnBook(id);
            break;
        case 7:
            return 0;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
