#include <iostream>
using namespace std;

int main() {
    string name;
    int total;
    int level;
    int ctrl = 0;
    int year;


    /****************************
    A = 5 Points
    B = 4 Points
    C = 3 Points
    D = 2 Points
    E = 1 Points
    F = 0 Points
    1st  Class – 4.50 – 5.00
    2nd Class Upper – 3.50 – 4.49
    2nd Class Lower – 2.40 – 3.49
    3rd Class – 1.50 – 2.39
    Pass – 1.00 – 1.49
    ******************************/


    while(ctrl != 1){
        cout << "\n\t Input your level: ";
        cin >> level;

        if(level == 100 || level == 200 || level == 300 || level == 400 || level == 500){
            year = level / 100;
            ctrl = 1;
        }
        else {
            cout << "\n\t Invalid  Level\n\n" << endl;
        }
    }

    cout << "\n\t Input your name: ";
    cin >> name;
    cout << "\n\t " << name << ", you're about to Calculate your " << level <<" GPA for a Semester\n";
    cout << "\n\t Input Number of courses Offered: ";
    cin >> total;
    if(total < 1) {
            cout << "\n\t Invalid Number\n";
    }
    int i;
    string courses[total];
    int scores[total];
    int units[total];

    // get data from User
    for (i=0; i < total; i++) {
        cout << "\n\t Input Course Code: ";
        cin >> courses[i];
        cout << "\n\t Input its unit: ";
        cin >> units[i];
        cout << "\n\t Input its Score: ";

        int score;
        cin >> score;

       if(score > 100){
            cout << "\n\tInvalid Score, Try Again" << endl;
        }
        else if(score >= 70) { // A
            scores[i] = 5;
        }
        else if(score >= 60) { // B
            scores[i] = 4;
        }
        else if(score >= 50) { // C
            scores[i] = 3;
        }
        else if(score >= 45) { // D
            scores[i] = 2;
        }
        else if(score >= 40) { // E
            scores[i] = 1;
        }
        else{ // F
            scores[i] = 0;
        }
    }

    // calculating the GPA
    int sum = 0;
    int unit_sum = 0;
    for (i = 0; i < total; i++) {
        sum = sum + (scores[i] * units[i]);
        unit_sum += units[i];
    }
    double gpa = (double) sum / (double) unit_sum;
    cout << "\a\a\a\n\n\n\n\t\t\t" << name << ", your GPA Detail is shown below\n" << endl;
    cout << "\n\t " << name <<", your GPA for " << level << " Level is: " << gpa << endl;
    cout << "\n\t Total Units offered: " << unit_sum << endl;
    if(gpa >= 4.5){
        cout << "\n\t You're in First Class" << endl;
    }
    else if(gpa >= 3.5){
        cout << "\n\t You're in Second Class Upper" << endl;
    }
    else if(gpa >= 2.5){
        cout << "\n\t You're in Second Class Lower" << endl;
    }
    else if(gpa >= 1.5){
        cout << "\n\t You're in Third Class" << endl;
    }
    else{
        cout << "\n\t You're Subjected to Probation" << endl;
    }
    cout << "\n\n\t\tEnter a character to terminate the Program: ";
    char ch;
    cin >> ch;
    return 0;
}
