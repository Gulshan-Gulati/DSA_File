#include <iostream>
#include <iomanip>

class Odometer {
private:
    double totalDistance; // Total distance traveled
    double tripDistance;  // Trip distance

public:
    // Constructor to initialize distances
    Odometer() : totalDistance(0.0), tripDistance(0.0) {}

    // Function to add distance
    void addDistance(double distance) {
        if (distance > 0) {
            totalDistance += distance;
            tripDistance += distance;
        } else {
            std::cerr << "Distance must be positive!" << std::endl;
        }
    }

    // Function to reset the trip distance
    void resetTrip() {
        tripDistance = 0.0;
    }

    // Function to get the total distance
    double getTotalDistance() const {
        return totalDistance;
    }

    // Function to get the trip distance
    double getTripDistance() const {
        return tripDistance;
    }

    // Function to display the distances
    void display() const {
        std::cout << "Total Distance: " << std::fixed << std::setprecision(2) << totalDistance << " km" << std::endl;
        std::cout << "Trip Distance: " << std::fixed << std::setprecision(2) << tripDistance << " km" << std::endl;
    }
};

int main() {
    Odometer odometer;

    while (true) {
        int choice;
        std::cout << "1. Add Distance\n2. Reset Trip\n3. Display Distances\n4. Exit\nChoose an option: ";
        std::cin >> choice;

        if (choice == 1) {
            double distance;
            std::cout << "Enter distance to add: ";
            std::cin >> distance;
            odometer.addDistance(distance);
        } else if (choice == 2) {
            odometer.resetTrip();
            std::cout << "Trip distance has been reset." << std::endl;
        } else if (choice == 3) {
            odometer.display();
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid option, please try again." << std::endl;
        }
    }

    return 0;
}
