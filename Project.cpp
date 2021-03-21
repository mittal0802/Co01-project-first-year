/* INNOVATIVE PROJECT
SUBMITTED BY: KESHAV MITTAL
ROLL NO: 2K20/B8/53    */

#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

int flag = 0;
struct student
{
    char name[40];
    char id[40];
    int roll;
    char standard[20];
    char adress[200];
    char phone[40];
    char dob[40];
    char pass[20];
    float math, physics, comp, chemistry, english, percent;
};
struct faculty
{
    char name[40];
    int id;
    char depart[40];
    char adress[200];
    char dob[40];
    char phone[40];
    char pass[40];
};

void home();
void intro();
void exit();
void login_as();
void admin();
void faculties();
void students();
void add_student();
void admin_menu();
void add_faculty();
void view_existing_student(int);
void view_existing_faculty(int);
void modify_student(int);
void modify_faculty(int);
void delete_faculty(int);
void delete_student(int);
void upload_marks(int);
void view_specific_marks(int);
void view_all_data();
int main()
{
    system("color a");
    system("cls");
    intro();
    home();
    return 0;
}

void home()
{
    char c;
    system("cls");
    system("color e");
    cout << "\n\n";
    cout << "\t  ====================STUDENT RECORD MANAGEMENT SYSTEM====================" << endl;
    cout << endl;
    cout << "\n\n\t\t\t\t==========HOME PAGE==========\n\n"
         << endl;
    cout << "\t\t\t\t1. Login Page\n\n";
    cout << "\t\t\t\t2. EXIT\n\n";
    cout << "ENTER YOUR CHOICE : ";
    cin >> c;
    system("cls");
    switch (c)
    {
    case '1':
    {
        login_as();
        break;
    }
    case '2':
    {
        exit();
    }
    }
}

void intro()
{

    cout << "\n\n\n";
    Sleep(300);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****   " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *         " << endl;
    Sleep(300);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****     " << endl;
    Sleep(300);
    cout << endl;
    cout << "\t\t\t\t=============================================" << endl;
    Sleep(500);
    cout << "\t\t\t\t  THIS IS STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    Sleep(500);
    cout << "\t\t\t\t=============================================" << endl;
    Sleep(500);
    cout << "\npress enter to continue...";
    cin.get();
}

void login_as()
{
    char c;
    system("cls");
    system("color e");
    cout << "\n\n";
    cout << "\t\t\t\t Select User type from following:" << endl;
    cout << endl;
    cout << "\t\t\t\t1. ADMIN\n\n";
    cout << "\t\t\t\t2. FACULTY\n\n";
    cout << "\t\t\t\t3. STUDENT\n\n";
    cout << "\t\t\t\t4. Back to home page\n\n";
    cout << "ENTER YOUR CHOICE : ";
    cin >> c;
    system("cls");
    switch (c)
    {
    case '1':
    {
        admin();
        break;
    }
    case '2':
    {
        faculties();
        break;
    }
    case '3':
    {
        students();
        break;
    }
    case '4':
    {
        home();
        break;
    }
    }
}

void exit()
{
    char c;
    system("cls");
    system("color e");
    cout << "\n\n\t\t     THANK YOU FOR USING THIS SOFTWARE" << endl;
    cout << "\n\n";
    cout << "\t\t   NAME                         Roll No      \n\n";
    cout << "\t\t  Keshav Mittal                2K20/B8/53 \n\n";
    cout << "\n\n";
    cout << "\t\t\t\t\t\t\t\t\t   SUBMITTED TO: Ms. Anukriti Kaushal\n";
    cout << "\n\n";
    cout << "Input 'H' to back to home page... ";
    cin.ignore();
    cin >> c;
    if (c == 72 || c == 104)
    {
        home();
    }
}

void admin()
{
    char ch;
    string pass, id;
    system("color e");
    cout << "\n\n";
    cout << "\t\t\t\t\t\t Login As Admin \n\n";
    cout << "\t\t\t\t=============================================" << endl;
    cout << endl;
    cout << "\t\t\t\t\t Enter your Id and Password below\n\n";
    cout << endl;
    cout << "\t\t\t\t\t ID: ";
    cin.ignore();
    cin >> id;
    cout << "\t\t\t\t\t Password: ";
    cin.ignore();
    ch = _getch();
    while (ch != 13)
    { //character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }

    if (id == "admin" && pass == "admin") // use both id and password of admin menu as admin
        admin_menu();
    else
    {
        cout << "\n\n\tEnter Valid ID or Password\n\n";
        cout << endl;
        cout << "\t Press 'H' to select login options again...";
        char a;
        cin >> a;
        if (a == 'h' || a == 'H')
            login_as();
    }
}

void admin_menu()
{
begin:
    system("cls");
    system("color c");
    int cc;
    cout << "\n\n\n\t\t\t\t\t\t Welcome Admin\n\n\n";
    cout << "\t\t\t\t=================MAIN MENU================\n\n"
         << endl;
    cout << "\t\t\t\t1. View and Publish Result\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t STUDENT :\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 2. Add a new Student\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 3. View existing Student record\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 4. Modify existing Student record.\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 5. Upload Student Marks.\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 6. View Specific Student Marks.\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 7. Delete Student record.\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t Faculty :"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 8. Add a new Faculty\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 9. View existing Faculty\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 10. Modify existing faculty record\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 11. Delete existing faculty record\n\n\n\n"
         << endl;
    Sleep(300);
    cout << "\t\t\t\t 12. Log Out\n\n"
         << endl;
    cout << "\t\t\t\t==============================" << endl;
    Sleep(300);
    cout << "\t\t\t\tENTER YOUR CHOICE...:) <1-12> : ";
    Sleep(300);
    cin >> cc;
    cout << endl;
    system("cls");
    switch (cc)
    {
    case 1:
    {
        view_all_data();
        goto begin;
        break;
    }
    case 2:
    {
        add_student();
        goto begin;
        break;
    }
    case 3:
    {
        int n;
        cout << "\n\nENTER STUDENT ROLL NUMBER TO VIEW HIS PROFILE : ";
        cin >> n;
        view_existing_student(n);
        goto begin;
        break;
    }
    case 4:
    {
        int n;
        cout << "\n\nENTER STUDENT ROLL NUMBER TO MODIFY HIS PROFILE : ";
        cin >> n;
        modify_student(n);
        goto begin;
        break;
    }
    case 5:
    {
        int n;
        cout << "\n\nENTER STUDENT ROLL NUMBER TO UPLOAD MARKS : ";
        cin >> n;
        upload_marks(n);
        goto begin;
        break;
    }
    case 6:
    {
        int n;
        cout << "ENTER STUDENT ROLL NUMBER : ";
        cin >> n;
        view_specific_marks(n);
        goto begin;
        break;
    }
    case 7:
    {
        int n;
        cout << "\n\nENTER STUDENT ROLL NO TO DELETE HIS RECORD : ";
        cin >> n;
        delete_student(n);
        goto begin;
        break;
    }
    case 8:
    {
        add_faculty();
        goto begin;
        break;
    }
    case 9:
    {
        int n;
        cout << "\n\nENTER FACULTY ID TO VIEW HIS PROFILE : ";
        cin >> n;
        view_existing_faculty(n);
        goto begin;
        break;
    }
    case 10:
    {
        int n;
        cout << "\n\nENTER FACULTY ID TO MODIFY HIS PROFILE DATA : ";
        cin >> n;
        modify_faculty(n);
        goto begin;
        break;
    }
    case 11:
    {
        int n;
        cout << "\n\nENTER FACULTY ID TO DELETE HIS RECORD : ";
        cin >> n;
        delete_faculty(n);
        goto begin;
        break;
    }
    case 12:
    {
        login_as();
        break;
    }
    }
}

void view_all_data()
{
    system("cls");
    student s;
    ifstream infile;
    bool check = false;
    infile.open("Student.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED.....press enter key...";
        cin.ignore();
        cin.get();
    }
    system("cls");
    cout << "\n\n\n\n";
    cout << "\t\t\tALL STUDENTS REPORT CARDS FOR REVIEW " << endl;
    cout << "==================================================================================" << endl;
    while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
    {
        cout << "\t\t\t\tSTUDENT NAME : " << s.name << endl
             << endl;
        cout << "\t\t\t\tSTUDENT ADMISSION ID NUMBER : " << s.id << endl
             << endl;
        cout << "\t\t\t\tSTUDENT ROLL NUMBER : " << s.roll << endl
             << endl;
        cout << "\t\t\t\tMATH      : " << s.math << endl
             << endl;
        cout << "\t\t\t\tPHYSICS   : " << s.physics << endl
             << endl;
        cout << "\t\t\t\tCHEMISTRY : " << s.chemistry << endl
             << endl;
        cout << "\t\t\t\tENGLISH   : " << s.english << endl
             << endl;
        cout << "\t\t\t\tCOMPUTER  : " << s.comp << endl
             << endl;
        cout << "\t\t\t\tPERCENTAGE: " << s.percent << endl
             << endl;
        cout << "==================================================================================\n"
             << endl;
        check = true;
    }
    infile.close();
    if (check == false)
        cout << "\t\t\t\tNO RECORD FOUND... " << endl
             << endl;
    if (check == true)
    {
        cout << "\n\nFor Publishing Result press 1 for not press 0 : ";
        /* this will give access to students to view their marks
            otherwise when student see their result it will show 
            result not uploaded yet */
        cin >> flag;
        if (flag == 1)
        {
            cout << "\n\nResult Published to STUDENT PORTAL\n\n";
        }
    }
    cout << "\tpress enter to continue....";
    cin.ignore();
    cin.get();
}

void add_student()
{
    system("cls");
    student s;
    ofstream outfile;
    outfile.open("Student.txt", ios::app | ios::binary);
    if (outfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }
    cout << "\n\n\n";
    cout << "\t\t\t\t======= Add A Student ========\n\n";
    cout << "ENTER FULL NAME : ";
    cin.ignore();
    cin.getline(s.name, 40);
    cout << "ENTER Admission Id : ";
    cin.getline(s.id, 40);
    cout << "ENTER D.O.B : ";
    cin.getline(s.dob, 40);
    cout << "ENTER PHONE NUMBER : ";
    cin.getline(s.phone, 40);
    cout << "ENTER ADDRESS : ";
    cin.getline(s.adress, 200);
    cout << "ENTER CLASS STANDARD : ";
    cin.getline(s.standard, 20);
    cout << "Set A Password For the User : ";
    cin.getline(s.pass, 20);
    cout << "ENTER ROLL NUMBER (INT Value) : ";
    cin >> s.roll;
    outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
    outfile.close();
    cout << endl;
    cout << "\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void view_existing_student(int n)
{
    system("cls");
    student s;
    ifstream infile;
    infile.open("Student.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality = false;
    cout << "\n\n\n\t\t\t\t========== STUDENT PROFILE ==========\n\n";
    while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
    {
        if (s.roll == n)
        {
            cout << "\t\t\t\t NAME : " << s.name << endl;
            cout << "\t\t\t\t ADMISSION ID NUMBER : " << s.id << endl;
            cout << "\t\t\t\t ROLL NUMBER : " << s.roll << endl;
            cout << "\t\t\t\t D.O.B : " << s.dob << endl;
            cout << "\t\t\t\t STANDARD : " << s.standard << endl;
            cout << "\t\t\t\t PHONE NUMBER : " << s.phone << endl;
            cout << "\t\t\t\t ADDRESS : " << s.adress << endl;
            cout << "\t\t\t\t PASSWORD : " << s.pass << endl;
            cout << "\t\t\t\t======================================" << endl;
            equality = true;
        }
    }
    infile.close();
    if (equality == false)
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
    cout << endl;
    cout << "press enter to continue...";
    cin.ignore();
    cin.get();
}

void modify_student(int n)
{
    system("cls");
    student s;
    fstream infile;
    infile.open("Student.txt", ios::binary | ios::in | ios::out);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    bool checker = false;
    cout << "\n\n\n\t\t\t\t==========MODIFY STUDENT PROFILE==========\n\n";
    while (!infile.eof() && checker == false)
    {
        infile.read(reinterpret_cast<char *>(&s), sizeof(student));
        {
            if (s.roll == n)
            {
                cout << "\t\t\t\t NAME : " << s.name << endl;
                cout << "\t\t\t\t ADMISSION ID NUMBER : " << s.id << endl;
                cout << "\t\t\t\t ROLL NUMBER : " << s.roll << endl;
                cout << "\t\t\t\t D.O.B : " << s.dob << endl;
                cout << "\t\t\t\t STANDARD : " << s.standard << endl;
                cout << "\t\t\t\t PHONE NUMBER :" << s.phone << endl;
                cout << "\t\t\t\t ADDRESS :" << s.adress << endl;
                cout << "\t\t\t\t PASSWORD : " << s.pass << endl;
                cout << "\n\t\t\t\t=============================================" << endl;
                cout << "\t\t\t\t\tENTER THE NEW INFORMATION" << endl;
                cout << "\t\t\t\t=============================================" << endl;
                cout << "\n\t\t\t\tENTER FULL NAME : ";
                cin.ignore();
                cin.getline(s.name, 40);
                cout << "\t\t\t\tENTER Admission Id : ";
                cin.getline(s.id, 40);
                cout << "\t\t\t\tENTER D.O.B : ";
                cin.getline(s.dob, 40);
                cout << "\t\t\t\tENTER PHONE NUMBER : ";
                cin.getline(s.phone, 40);
                cout << "\t\t\t\tENTER ADDRESS : ";
                cin.getline(s.adress, 200);
                cout << "\t\t\t\tENTER CLASS STANDARD : ";
                cin.getline(s.standard, 20);
                cout << "\t\t\t\tSet A Password For the User : ";
                cin.getline(s.pass, 20);
                cout << "\t\t\t\tENTER ROLL NUMBER (INT Value) : ";
                cin >> s.roll;
                int pos = (-1) * static_cast<int>(sizeof(student));
                infile.seekp(pos, ios::cur);
                infile.write(reinterpret_cast<char *>(&s), sizeof(student));
                cout << endl;
                cout << "\t\t\t\tTHE FILE IS SUCCESSFULLY updated" << endl;
                checker = true;
            }
        }
    }
    infile.close();
    if (checker == false)
        cout << "\t\t\t\tRECORD NOT FOUND" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void delete_student(int n)
{
    system("cls");
    student s;
    ifstream infile;
    infile.open("Student.txt", ios::binary);
    if (!infile)
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    ofstream outfile;
    outfile.open("Record3.txt", ios::binary);
    infile.seekg(0, ios::beg);
    cout << "\n\n\t\t\t\t===========DELETE A STUDENT RECORD==========\n\n";
    while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
    {
        if (s.roll != n)
        {
            outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
        }
    }
    infile.close();
    outfile.close();
    remove("Student.txt");
    rename("Record3.txt", "Student.txt");
    cout << endl;
    cout << "\t\t\t\tRECORD SUCCESSFULLY DELETED" << endl;
    cout << "press enter to continue...";
    cin.ignore();
    cin.get();
}

void upload_marks(int n)
{
    system("cls");
    student s;
    fstream infile;
    infile.open("Student.txt", ios::binary | ios::in | ios::out);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    bool checker = false;
    cout << "\n\n\t\t\t\t==========UPLOAD STUDENT MARKS==========\n\n";
    while (!infile.eof() && checker == false)
    {
        infile.read(reinterpret_cast<char *>(&s), sizeof(student));
        {
            if (s.roll == n)
            {
                cout << "\t\t\t\t NAME : " << s.name << endl;
                cout << "\t\t\t\t ROLL NUMBER : " << s.roll << endl;
                cout << "\t\t\t\t D.O.B : " << s.dob << endl;
                cout << "\t\t\t\t STANDARD : " << s.standard << endl;
                cout << "\n\t\t\t\t=============================================" << endl;
                cout << "\t\t\t\t\t  UPLOAD MARKS BELOW" << endl;
                cout << "\t\t\t\t=============================================" << endl;
                cout << "\n\t\t\t\tENGLISH : ";
                cin >> s.english;
                cout << "\t\t\t\tMATH : ";
                cin >> s.math;
                cout << "\t\t\t\tPHYSICS : ";
                cin >> s.physics;
                cout << "\t\t\t\tCHEMISTRY : ";
                cin >> s.chemistry;
                cout << "\t\t\t\tCOMPUTER : ";
                cin >> s.comp;
                s.percent = (s.math + s.english + s.comp + s.physics + s.chemistry) / 5;
                int pos = (-1) * static_cast<int>(sizeof(student));
                infile.seekp(pos, ios::cur);
                infile.write(reinterpret_cast<char *>(&s), sizeof(student));
                cout << endl;
                cout << "\n\t\t\t\tMarks Uploaded Successfully" << endl;
                checker = true;
            }
        }
    }
    infile.close();
    if (checker == false)
        cout << "\t\t\t\tRECORD NOT FOUND" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void view_specific_marks(int n)
{
    system("cls");
    student s;
    ifstream infile;
    infile.open("Student.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality = false;
    cout << "\n\n\t\t\t\t========== STUDENT REPORT CARD ==========\n\n";
    while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
    {
        if (s.roll == n)
        {
            cout << "\t\t\t\t NAME : " << s.name << endl;
            cout << "\t\t\t\t ROLL NUMBER : " << s.roll << endl;
            cout << "\t\t\t\t D.O.B : " << s.dob << endl;
            cout << "\t\t\t\t STANDARD : " << s.standard << endl;
            cout << "\t\t\t\t==============================" << endl;
            cout << "\t\t\t\t PHYSICS   : " << s.physics << endl;
            cout << "\t\t\t\t MATH      : " << s.math << endl;
            cout << "\t\t\t\t CHEMISTRY : " << s.chemistry << endl;
            cout << "\t\t\t\t ENGLISH   : " << s.english << endl;
            cout << "\t\t\t\t COMPUTER  : " << s.comp << endl;
            cout << endl;
            cout << "\t\t\t\t PERCENTAGE : " << s.percent << "%" << endl;
            cout << "\t\t\t\t==============================" << endl;
            equality = true;
        }
    }
    infile.close();
    if (equality == false)
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
    cout << endl;
    cout << "press enter to continue...";
    cin.ignore();
    cin.get();
}

void add_faculty()
{
    system("cls");
    faculty f;
    ofstream outfile;
    outfile.open("Faculty.txt", ios::app | ios::binary);
    if (outfile.fail())
    {
        cout << "THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }
    cout << "\n\n";
    cout << "\t\t\t\t=======Add A Faculty ========\n\n";
    cout << "ENTER FULL NAME : ";
    cin.ignore();
    cin.getline(f.name, 40);
    cout << "ENTER PHONE NUMBER : ";
    cin.getline(f.phone, 40);
    cout << "ENTER D.O.B : ";
    cin.getline(f.dob, 40);
    cout << "ENTER ADDRESS : ";
    cin.getline(f.adress, 200);
    cout << "ENTER Department: ";
    cin.getline(f.depart, 40);
    cout << "Set a Password: ";
    cin.getline(f.pass, 40);
    cout << "ENTER Faculty Id (INT type): ";
    cin >> f.id;
    outfile.write(reinterpret_cast<char *>(&f), sizeof(faculty));
    outfile.close();
    cout << endl;
    cout << "\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void view_existing_faculty(int n)
{
    system("cls");
    faculty f;
    ifstream infile;
    infile.open("Faculty.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality = false;
    cout << "\n\n\t\t\t\t========== FACULTY PROFILE ==========\n\n";
    while (infile.read(reinterpret_cast<char *>(&f), sizeof(faculty)))
    {
        if (f.id == n)
        {
            cout << "\t\t\t\t NAME : " << f.name << endl;
            cout << "\t\t\t\t FACULTY ID NUMBER : " << f.id << endl;
            cout << "\t\t\t\t D.O.B : " << f.dob << endl;
            cout << "\t\t\t\t DEPARTMENT : " << f.depart << endl;
            cout << "\t\t\t\t PHONE NUMBER : " << f.phone << endl;
            cout << "\t\t\t\t ADDRESS : " << f.adress << endl;
            cout << "\t\t\t\t PASSWORD : " << f.pass << endl;
            cout << "\t\t\t\t======================================" << endl;
            equality = true;
        }
    }
    infile.close();
    if (equality == false)
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void modify_faculty(int n)
{
    system("cls");
    faculty f;
    fstream infile;
    infile.open("Faculty.txt", ios::binary | ios::in | ios::out);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    bool checker = false;
    cout << "\n\n\t\t\t\t==========MODIFY FACULTY PROFILE==========\n\n";
    while (!infile.eof() && checker == false)
    {
        infile.read(reinterpret_cast<char *>(&f), sizeof(faculty));
        {
            if (f.id == n)
            {
                cout << "\t\t\t\t NAME : " << f.name << endl;
                cout << "\t\t\t\t FACULTY ID NUMBER : " << f.id << endl;
                cout << "\t\t\t\t D.O.B : " << f.dob << endl;
                cout << "\t\t\t\t DEPARTMENT : " << f.depart << endl;
                cout << "\t\t\t\t PHONE NUMBER : " << f.phone << endl;
                cout << "\t\t\t\t ADDRESS : " << f.adress << endl;
                cout << "\t\t\t\t PASSWORD : " << f.pass << endl;
                cout << "\n\t\t\t\t=========================================" << endl;
                cout << "\t\t\t\t\tENTER THE NEW INFORMATION" << endl;
                cout << "\t\t\t\t=========================================" << endl;
                cout << "\n\t\t\t\tENTER FULL NAME : ";
                cin.ignore();
                cin.getline(f.name, 40);
                cout << "\t\t\t\tENTER PHONE NUMBER : ";
                cin.getline(f.phone, 40);
                cout << "\t\t\t\tENTER D.O.B : ";
                cin.getline(f.dob, 40);
                cout << "\t\t\t\tENTER ADDRESS : ";
                cin.getline(f.adress, 200);
                cout << "\t\t\t\tENTER Department: ";
                cin.getline(f.depart, 40);
                cout << "\t\t\t\tSet a Password: ";
                cin.getline(f.pass, 40);
                cout << "\t\t\t\tENTER Faculty Id (INT type): ";
                cin >> f.id;
                int pos = (-1) * static_cast<int>(sizeof(faculty));
                infile.seekp(pos, ios::cur);
                infile.write(reinterpret_cast<char *>(&f), sizeof(faculty));
                cout << endl;
                cout << "\t\t\t\tTHE FILE IS SUCCESSFULLY updated" << endl;
                checker = true;
            }
        }
    }
    infile.close();
    if (checker == false)
        cout << "\t\t\t\tRECORD NOT FOUND" << endl;
    cout << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void delete_faculty(int n)
{
    system("cls");
    faculty f;
    ifstream infile;
    infile.open("Faculty.txt", ios::binary);
    if (!infile)
    {
        cout << "THE FILE COULD NOT BE OPENED..." << endl;
        cin.ignore();
        cin.get();
    }
    ofstream outfile;
    outfile.open("Record2.txt", ios::binary);
    infile.seekg(0, ios::beg);
    cout << "\n\n\t\t\t\t===========DELETE A FACULTY RECORD==========\n\n";
    while (infile.read(reinterpret_cast<char *>(&f), sizeof(faculty)))
    {
        if (f.id != n)
        {
            outfile.write(reinterpret_cast<char *>(&f), sizeof(faculty));
        }
    }
    infile.close();
    outfile.close();
    remove("Faculty.txt");
    rename("Record2.txt", "Faculty.txt");
    cout << endl;
    cout << "\t\t\t\tRECORD SUCCESSFULLY DELETED" << endl;
    cout << "press any key to continue...";
    cin.ignore();
    cin.get();
}

void faculties()
{
    char cc, ch;
    string password;
    int id;
    system("cls");
    system("color e");
    cout << "\n\n";
    cout << "\t\t\t\t\t\t Login As Faculty \n\n";
    cout << "\t\t\t\t=============================================" << endl;
    cout << endl;
    cout << "\t\t\t\t Enter your Faculty Id and Password below\n\n";
    cout << endl;
    cout << "\t\t\t\t Faculty Id: ";
    cin.ignore();
    cin >> id;
    cout << "\t\t\t\t Password: ";
    cin.ignore();
    ch = _getch();
    while (ch != 13)
    { //character 13 is enter
        password.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    system("cls");
    faculty f;
    ifstream infile;
    infile.open("Faculty.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality = false;
    while (infile.read(reinterpret_cast<char *>(&f), sizeof(faculty)))
    {
        if (f.id == id && f.pass == password)
        {
        start:
            system("cls");
            cout << "\n\n\n\t\t\t\t\t  Welcome " << f.name << "\n\n\n";
            cout << "\t\t\t\t=================FACULTY MENU================\n\n"
                 << endl;
            cout << "\t\t\t\t1. View profile\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t STUDENT :\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 2. View existing Student record\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 3. Upload Student Marks.\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 4. View Specific Student Marks.\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 5. Log Out\n\n"
                 << endl;
            cout << "\t\t\t\t==============================" << endl;
            Sleep(300);
            cout << "\t\t\t\tENTER YOUR CHOICE...:) <1-5> : ";
            Sleep(300);
            cin >> cc;
            cout << endl;
            system("cls");
            switch (cc)
            {
            case '1':
            {
                view_existing_faculty(f.id);
                goto start;
                break;
            }
            case '2':
            {
                int k;
                cout << "\n\nENTER STUDENT ROLL NUMBER TO VIEW HIS PROFILE : ";
                cin >> k;
                view_existing_student(k);
                goto start;
                break;
            }
            case '3':
            {
                int k;
                cout << "\n\nENTER STUDENT ROLL NUMBER TO UPLOAD MARKS : ";
                cin >> k;
                upload_marks(k);
                goto start;
                break;
            }
            case '4':
            {
                int k;
                cout << "\n\nENTER STUDENT ROLL NUMBER TO VIEW HIS RESULT : ";
                cin >> k;
                view_specific_marks(k);
                goto start;
                break;
            }
            case '5':
            {
                login_as();
                break;
            }
            }

            equality = true;
        }
    }
    infile.close();
    if (equality == false)
    {
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
        cout << endl;
        cout << "press 'H' key to continue...";
        char a;
        cin >> a;
        if (a == 'h' || a == 'H')
            login_as();
    }
}

void students()
{
    char cc, ch;
    string password;
    int id;
    system("cls");
    system("color e");
    cout << "\n\n";
    cout << "\t\t\t\t\t    Login As Student \n\n";
    cout << "\t\t\t\t=============================================" << endl;
    cout << endl;
    cout << "\t\t\t\t Enter your Roll No and Password below\n\n";
    cout << endl;
    cout << "\t\t\t\t Roll No: ";
    cin.ignore();
    cin >> id;
    cout << "\t\t\t\t Password: ";
    cin.ignore();
    ch = _getch();
    while (ch != 13)
    { //character 13 is enter
        password.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    system("cls");
    student s;
    ifstream infile;
    infile.open("Student.txt", ios::app | ios::binary);
    if (infile.fail())
    {
        cout << "THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality = false;
    system("cls");
    while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
    {
        if (s.roll == id && s.pass == password)
        {
        start:
            system("cls");
            cout << "\n\n\n\t\t\t\t\t\t Welcome " << s.name << "\n\n\n";
            cout << "\t\t\t\t================= STUDENT MENU ================\n\n"
                 << endl;
            cout << "\t\t\t\t 1. View profile\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 2. View Result.\n\n"
                 << endl;
            Sleep(300);
            cout << "\t\t\t\t 3. Log Out\n\n"
                 << endl;
            cout << "\t\t\t\t==============================" << endl;
            Sleep(300);
            cout << "\t\t\t\tENTER YOUR CHOICE...:) <1-3> : ";
            Sleep(300);
            cin >> cc;
            cout << endl;
            system("cls");
            switch (cc)
            {
            case '1':
            {
                view_existing_student(s.roll);
                goto start;
                break;
            }
            case '2':
            {
                if (flag == 1)
                    view_specific_marks(s.roll);
                else
                {
                    cout << "\n\n\n\t\tResult Not Uploaded Yet. Contact Admin \n\n";
                    cout << "\t\tpress enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                goto start;
                break;
            }
            case '3':
            {
                login_as();
                break;
            }
            }

            equality = true;
        }
    }
    infile.close();
    if (equality == false)
    {
        cout << "\t\t\t\tRECORD NOT FOUND..." << endl;
        cout << endl;
        cout << "press 'H' key to continue...";
        char a;
        cin >> a;
        if (a == 'h' || a == 'H')
            login_as();
    }
}
