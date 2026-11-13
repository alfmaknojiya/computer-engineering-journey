#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int choice;
    string studentname;
    int studentID;
    double marks;

    string names[100];
    int IDs[100];
    double allmarks[100];

    int studentCount = 0;

    // Load saved students
    ifstream file("students.txt");

    while (studentCount < 100 && (file >> names[studentCount])) {

        file >> IDs[studentCount];
        file >> allmarks[studentCount];

        studentCount++;
    }

    file.close();

    // Your existing menu starts here
    do { 
   
    cout << "======================================= " << endl;
    cout << "      STUDENT MANAGEMENT SYSTEM        " << endl;
    cout << " ======================================= " << endl;

    cout << " Welcome!" << endl;

    cout << "\n1. Add Student" << endl;
    cout << "2. Display Students" << endl;
    cout << "3. Search Student" << endl;
    cout << "4. Calculate Average Marks" << endl;
    cout << "5. Delete Student" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "You selected option: " << choice << endl;
    if (choice == 1){ 
        if(studentCount >= 100){
            cout<< "Student limit reached!" << endl;
        }
        else{

        
        cout<< "Enter student name:" << endl;
        cin >> studentname;

        cout << "Enter student ID: ";
        cin >> studentID;
        if (!(cin >> studentID)) {
     cout << "Invalid ID! Please enter numbers only." << endl;
     cin.clear();
     cin.ignore(1000, '\n');
     continue;
}

        cout << "Enter student marks: ";
        cin >> marks;
        names[studentCount] = studentname;
        IDs[studentCount] = studentID;
        allmarks[studentCount]= marks;
        ofstream file("students.txt", ios::app);

        file << studentname << endl;
        file << studentID << endl;
        file << marks << endl;

file.close();
        studentCount++;
        cout << "\n added successfully!"<< endl;

    }
}
    else if (choice == 2){

        if(studentCount == 0) { 
            cout<< "No students found!"<< endl;

        }
        else{
            cout<< "\n--- Student Records ---" << endl;
            for (int i = 0; i < studentCount; i++) {
                cout << "\n Student " << i + 1  << endl;
                cout << "Name:" << names[i] << endl;
                cout << "ID:" << IDs[i] << endl;
                cout << "Marks:"<< allmarks[i]<<endl;

            }
        }

    }
    else if (choice == 3){
        int searchID;
        bool found = false;
        cout << "Enter student ID to search:";
        cin >> searchID;

     
    for (int i = 0; i < studentCount; i++) {
        if (IDs[i] == searchID) {
            cout << "\nStudent Found!" << endl;
            cout << "Name: " << names[i] << endl;
            cout << "ID: " << IDs[i] << endl;
            cout << "Marks: " << allmarks[i] << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }


    }
    else if (choice == 4) {
    if (studentCount == 0) {
        cout << "No student records available!" << endl;
    }
    else {
        double total = 0;

        for (int i = 0; i < studentCount; i++) {
            total += allmarks[i];
        }

        double average = total / studentCount;

        cout << "Average Marks: " << average << endl;
    }
    }
    else if (choice == 5) {
    int deleteID;
    bool found = false;

    cout << "Enter student ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < studentCount; i++) {
        if (IDs[i] == deleteID) {

            for (int j = i; j < studentCount - 1; j++) {
                names[j] = names[j + 1];
                IDs[j] = IDs[j + 1];
                allmarks[j] = allmarks[j + 1];
            }

            studentCount--;
            found = true;

            cout << "Student deleted successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }
    }
    else{
        cout << " Exiting the program"<< endl;

    }
} while (choice != 6);
    return 0;


} 