#include <iostream>
#include <vector>
#include <iomanip>  // for std::setprecision
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<int> credits(numCourses);
    double totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (on a 10-point scale): ";
        cin >> grades[i];
        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n--- Semester Summary ---\n";
    cout << fixed << setprecision(2); 
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 << ": Grade = " << grades[i]
             << ", Credit Hours = " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
