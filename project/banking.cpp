#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Account {
protected:
    std::string owner;
    double balance;

public:
    Account(const std::string& owner, double initialBalance) : owner(owner), balance(initialBalance) {}

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " to " << owner << "'s account.\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " from " << owner << "'s account.\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    virtual void displayBalance() const {
        std::cout << owner << "'s account balance: $" << balance << "\n";
    }

    const std::string& getOwner() const {
        return owner;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    SavingsAccount(const std::string& owner, double initialBalance) : Account(owner, initialBalance) {}

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " from " << owner << "'s savings account.\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(const std::string& owner, double initialBalance) : Account(owner, initialBalance) {}

    void withdraw(double amount) override {
        if (amount > 0) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " from " << owner << "'s checking account.\n";
        } else {
            std::cout << "Invalid withdrawal amount.\n";
        }
    }
};

class BankingSystem {
private:
    std::vector<std::shared_ptr<Account>> accounts;

public:
    void createSavingsAccount(const std::string& owner, double initialBalance) {
        accounts.push_back(std::make_shared<SavingsAccount>(owner, initialBalance));
        std::cout << "Created savings account for " << owner << " with initial balance $" << initialBalance << "\n";
    }

    void createCheckingAccount(const std::string& owner, double initialBalance) {
        accounts.push_back(std::make_shared<CheckingAccount>(owner, initialBalance));
        std::cout << "Created checking account for " << owner << " with initial balance $" << initialBalance << "\n";
    }

    void deposit(const std::string& owner, double amount) {
        for (auto& account : accounts) {
            if (account->getOwner() == owner) {
                account->deposit(amount);
                return;
            }
        }
        std::cout << "Account for " << owner << " not found.\n";
    }

    void withdraw(const std::string& owner, double amount) {
        for (auto& account : accounts) {
            if (account->getOwner() == owner) {
                account->withdraw(amount);
                return;
            }
        }
        std::cout << "Account for " << owner << " not found.\n";
    }

    void displayBalance(const std::string& owner) const {
        for (const auto& account : accounts) {
            if (account->getOwner() == owner) {
                account->displayBalance();
                return;
            }
        }
        std::cout << "Account for " << owner << " not found.\n";
    }
};

int main() {
    BankingSystem system;
    int choice;
    std::string owner;
    double amount;

    while (true) {
        std::cout << "1. Create Savings Account\n";
        std::cout << "2. Create Checking Account\n";
        std::cout << "3. Deposit\n";
        std::cout << "4. Withdraw\n";
        std::cout << "5. Check Balance\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter owner's name: ";
            std::cin >> owner;
            std::cout << "Enter initial balance: ";
            std::cin >> amount;
            system.createSavingsAccount(owner, amount);
            break;
        case 2:
            std::cout << "Enter owner's name: ";
            std::cin >> owner;
            std::cout << "Enter initial balance: ";
            std::cin >> amount;
            system.createCheckingAccount(owner, amount);
            break;
        case 3:
            std::cout << "Enter owner's name: ";
            std::cin >> owner;
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            system.deposit(owner, amount);
            break;
        case 4:
            std::cout << "Enter owner's name: ";
            std::cin >> owner;
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            system.withdraw(owner, amount);
            break;
        case 5:
            std::cout << "Enter owner's name: ";
            std::cin >> owner;
            system.displayBalance(owner);
            break;
        case 6:
            return 0;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
