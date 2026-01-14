#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Inputs
    string name;
    int age;
    double height;
    double weight;
    int score;

    // Ask for user input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (meters): ";
    cin >> height;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your test score (0-100): ";
    cin >> score;

    // Calculate BMI
    double bmi = weight / (height * height);

    // Determine BMI category
    string bmiCategory;
    if (bmi < 18.5) {
        bmiCategory = "Underweight";
    } else if (bmi < 25.0) {
        bmiCategory = "Normal weight";
    } else if (bmi < 30.0) {
        bmiCategory = "Overweight";
    } else {
        bmiCategory = "Obese";
    }

    // Convert score to letter grade
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output summary
    cout << fixed << setprecision(2);
    cout << "\nHey " << name << ", you're " << age << " years old with a BMI of "
         << bmi << " (" << bmiCategory << ") and you got a grade "
         << grade << ". Keep it up! 🎉" << endl;

    return 0;
}
