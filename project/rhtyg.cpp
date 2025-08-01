#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int id;
    vector<double> grades;

    Student(string name, int id) : name(name), id(id) {}

    void addGrade(double grade) {
        grades.push_back(grade);
    }

    double getAverage() const {
        if (grades.empty()) return 0.0;
        double sum = accumulate(grades.begin(), grades.end(), 0.0);
        return sum / grades.size();
    }
};

class GradeTracker {
private:
    vector<Student> students;

public:
    void addStudent(const string &name, int id) {
        students.emplace_back(name, id);
    }

    void addGrade(int id, double grade) {
        for (auto& student : students) {
            if (student.id == id) {
                student.addGrade(grade);
                return;
            }
        }
        cout << "Student with ID " << id << " not found.\n";
    }

    void displayOverallGrades() const {
        for (const auto &student : students) {
            cout << "Student: " << student.name << " (ID: " << student.id << "), Average Grade: " << student.getAverage() << "\n";
        }
    }

    void displayClassAverage() const {
        if (students.empty()) {
            cout << "No students in the class.\n";
            return;
        }
        double totalAverage = 0.0;
        for (const auto &student : students) {
            totalAverage += student.getAverage();
        }
        cout << "Class Average: " << totalAverage / students.size() << "\n";
    }

    void displayClassToppers(int topN = 3) const {
        if (students.empty()) {
            cout << "No students in the class.\n";
            return;
        }
        vector<Student> sortedStudents = students;
        sort(sortedStudents.begin(), sortedStudents.end(), [](const Student& a, const Student& b) {
            return a.getAverage() > b.getAverage();
        });

        cout << "Top " << topN << " Students:\n";
        for (int i = 0; i < min(topN, static_cast<int>(sortedStudents.size())); ++i) {
            cout << "Student: " << sortedStudents[i].name << " (ID: " << sortedStudents[i].id << "), Average Grade: " << sortedStudents[i].getAverage() << "\n";
        }
    }
};

int main() {
    GradeTracker tracker;
    int numStudents, id, numGrades;
    string name;
    double grade;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name and ID for student " << i + 1 << ": ";
        cin >> name >> id;
        tracker.addStudent(name, id);
        cout << "Enter the number of grades for " << name << ": ";
        cin >> numGrades;
        for (int j = 0; j < numGrades; ++j) {
            cout << "Enter grade " << j + 1 << ": ";
            cin >> grade;
            tracker.addGrade(id, grade);
        }
    }
    tracker.displayOverallGrades();
    tracker.displayClassAverage();
    tracker.displayClassToppers();

    return 0;
}