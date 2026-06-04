#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
int main() {
    cout << "=== Student Grade Average Calculator === " << endl;

    int totalSubjects = 0;
    cout << "Enter the number of subjects: ";
    cin >> totalSubjects;
    //Guard rail:check for valid input
    if (totalSubjects <= 0) {
       cout << "Invalid number of subjects." << endl;
       return 0;
    }
    double sum = 0.0;
    double marks = 0.0;

    //Using a simple loop to calculate total marks 
    for (int i = 1; i <= totalSubjects; i++) {
        cout << "Enter marks for subject: "<< i << ": ";
        cin >> marks;
        if (marks < 0 || marks > 100) {
    cout << "Invalid marks. Enter 0 to 100.\n";
    i--;   // repeat same subject again
    continue;
}
        sum = sum + marks;
    }
   //Calculate average 
   double average = sum / totalSubjects;

    cout << fixed << setprecision(2);

   cout << "\n--- Results ---" << endl;
   cout << "Total Marks: " << sum << endl;
   cout << "Average Score: " << average << "%" << endl;

   return 0;
}



