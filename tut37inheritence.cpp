#include<iostream>
using namespace std;

// Base class for all students
class Curstudent
{
    int id;            // Student ID
    string name;       // Student Name
    static int count;  // Static counter to assign student numbers

public:
    // Default constructor initializes values
    Curstudent()
    {
        id = 0;
        name = "";
    }

    // Function to input student data
    void getdata()
    {
        cout << "\nEnter the name of student: ";
        cin.ignore();              // Clear input buffer
        getline(cin, name);        // Read full name including spaces

        cout << "Enter the id of the student: ";
        cin >> id;
    }

    // Function to display student data
    void showdata()
    {
        count++;   // Increment static counter for each student
        cout << "\n----------------------------------------";
        cout << "\nStudent No : " << count;
        cout << "\nName   : " << name;
        cout << "\nID  : " << id;
    }
};

// Initialize static variable
int Curstudent::count = 19000;


// Derived class for Undergraduate students
class ug : public Curstudent
{
private:
    int semester;                // Semester number (1-8)
    float gpa;                   // GPA (0-4)
    static int fyear;            // Count of final year students
    static int scholarship;      // Count of scholarship eligible students

public:
    // Input data for undergraduate student
    void ug_getdata()
    {
        getdata();   // Call base class function

        // Validate semester input
        do
        {
            cout<<"Enter the Semester no (1-8) : ";
            cin>>semester;
            if(semester>8||semester<0)
            {
                cout<<"Invalid input Please Enter the correct Semester again : ";
                cin>>semester;
            }
        }while(semester>8||semester<0);

        // Validate GPA input
        do
        {
            cout<<" Enter the GPA : ";
            cin>>gpa;
            if(gpa<0||gpa>4)
            {
                cout<<"Invalid input Please Enter the correct GPA again ";
                cin>>gpa;
            }
        }while(gpa<0||gpa>4);
    }

    // Display undergraduate student data
    void ug_showdata()
    {
        showdata();   // Call base class function
        cout << "\nType: UnderGraduate";
        cout << "\nSemester : " << semester;
        cout << "\nGPA : " << gpa;
        cout << "\n----------------------------------------\n";
    }

    // Check scholarship eligibility
    void scholarshipEligibility()
    {
        if (gpa >= 3.5)
        {
            cout << "Eligible for scholarship.\n";
            scholarship++;
        }
        else
        {
            cout << "Not eligible for scholarship.\n";
        }
    }

    // Check if student is in final year
    void finalyear()
    {
        if (semester >= 6 && semester <= 8)
        {
            cout << "Final Year Student.\n";
            fyear++;
        }
        else
        {
            cout << "Not a final year student.\n";
        }
    }

    // Static function to display totals
    static void Fyearandscholarship()
    {
        cout << "\n-----------------------------------------";
        cout << "\nTotal Final Year Students   : " << fyear;
        cout << "\nTotal Scholarship Eligible: " << scholarship;
        cout << "\n-----------------------------------------\n";
    }
};

// Initialize static variables
int ug::fyear = 0;
int ug::scholarship = 0;


// Derived class for Graduate students
class Graduate : public Curstudent
{
private:
    string thesis_title;       //        Thesis title
    string supervisor_name;         // Supervisor name
    int completedChapters;      // Chapters completed
    int totalChapters;           // Total chapters
    string conferenceName;     // Conference name

public:
    // Constructor to input graduate student data
    Graduate()
    {
        getdata();   // Call base class function

        cout << "Enter Thesis title: ";
        cin >> thesis_title;

        cout << "Enter Supervisor name: ";
        cin.ignore();
        getline(cin, supervisor_name);

        cout << "Enter completed chapters: ";
        cin >> completedChapters;

        cout << "Enter total chapters: ";
        cin >> totalChapters;

        cout << "Enter conference name: ";
        cin.ignore();
        getline(cin, conferenceName);
    }

    // Display graduate student data
    void graddata()
    {
        showdata();   // Call base class function
        cout << "\nType : Graduate";
        cout << "\nThesis   : " << thesis_title;
        cout << "\nSupervisor: " << supervisor_name;

        // Calculate thesis progress percentage
        float progress = (float)completedChapters / totalChapters * 100;
        cout << "\nProgress : " << progress << "%";
        cout << "\nConference   : " << conferenceName;
        cout << "\n----------------------------------------\n";
    }
};


// Main function
int main()
{
    int n, m;

    cout << "Enter the number of UnderGraduate Students: ";
    cin >> n;

    cout << "Enter the number of Graduate Students: ";
    cin >> m;

    // Array of Undergraduate students
    ug s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].ug_getdata();
        s[i].scholarshipEligibility();
        s[i].finalyear();
    }

    // Array of Graduate students
    Graduate t[m];

    // Display Undergraduate students
    cout << "\n===== UNDERGRADUATE STUDENTS =====\n";
    for (int i=0;i<n;i++)
    {
        s[i].ug_showdata();
    }

    // Display totals
    ug::Fyearandscholarship();

    // Display Graduate students
    cout << "\n===== GRADUATE STUDENTS =====\n";
    for (int i=0; i<m; i++)
    {
        t[i].graddata();
    }

    return 0;
}
// Thanks alot guys for watching and using my code bye bye !.
