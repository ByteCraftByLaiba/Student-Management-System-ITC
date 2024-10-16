#include <iostream>
using namespace std;
int main()
{
    int sec10[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, sec11[] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40}, sec12[] = {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    // Intializing array of Quiz 01 marks of section 10, section 11 and section 12
    float quiz1_sec10[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 10, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5},
          quiz1_sec11[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 10, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5}, quiz1_sec12[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 10, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5};
    // Intializing array of Quiz 02 marks of section 10, section 11 and section 12
    float quiz2_sec10[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 10, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5},
          quiz2_sec11[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 9.5, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5}, quiz2_sec12[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 8.5, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5};
    // Intializing array of Quiz 03 marks of section 10, section 11 and section 12
    float quiz3_sec10[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 8, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5},
          quiz3_sec11[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 9, 10, 9.5, 9, 8.5, 8, 1, 5.5, 6, 7, 2.5}, quiz3_sec12[] = {2, 3, 4, 6, 7.5, 4.5, 0, 2, 3, 10, 10, 9.5, 9, 10, 8, 1, 5.5, 6, 7, 2.5};
    // Intializing array of Mid-term marks of section 10, section 11 and section 12
    float mids_sec10[] = {60, 85, 90, 55, 41, 76, 59, 65, 75, 80, 33, 21, 54, 87, 44, 21, 55, 32, 80,
                          67},
          mids_sec11[] = {60, 85, 90, 55, 41, 76, 59, 65, 75, 80, 33, 21, 54, 87, 44, 21, 55, 32, 80,
                          67},
          mids_sec12[] = {60, 85, 90, 55, 41, 76, 59, 65, 75, 80, 33, 21, 54, 87, 44, 21, 55, 32, 80,
                          67};
    // Intializing array of CGPA of students of section 10, section 11 and section 12
    float cgpa_sec10[] = {0.75, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 3.8, 2.3, 4.0, 3.2, 1.8, 3.4, 4.0, 2.8, 3.0,
                          2.0, 0.75, 1.9, 2.6},
          cgpa_sec11[] = {0.75, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 3.8, 2.3, 4.0, 3.2, 1.8, 3.4,
                          4.0, 2.8, 3.0, 2.0, 0.75, 1.9, 2.6},
          cgpa_sec12[] = {0.75, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 3.8, 2.3, 4.0,
                          3.2, 1.8, 3.4, 4.0, 2.8, 3.0, 2.0, 0.75, 1.9, 2.6};
    // intializing helping variables
    int caution = 0, option = 0, roll_no = 0, data_index = 0, j = 1, size_of_sec10 = 20,
        size_of_sec11 = 20, size_of_sec12 = 20, MaxIndex_sec10 = 19, MaxIndex_sec11 = 39, count = 0, course_code = 0, MaxIndex_sec12 = 59, count2 = 0, opt = 0, count4 = 0, sec = 0, count6 = 0,
        loc = -1, n1 = 0, count5 = 0, count3 = 0, count7 = 0, section = 0, num = 0, e = 0, count8 = 0;
    // intializing integer-type variables for insertion
    int index_to_insert = 0, index10 = 0, index11 = 0, index12 = 0;
    // intializing float variables for insertion
    float new_rollno10 = 0.0, new_rollno11 = 0.0, new_rollno12 = 0.0, new_1quiz10 = 0.0,
          new_2quiz10 = 0.0, new_3quiz10 = 0.0, new_1quiz11 = 0.0, new_2quiz11 = 0.0, new_3quiz11 = 0.0, new_1quiz12 = 0.0, new_2quiz12 = 0.0, new_3quiz12 = 0.0, new_mids10 = 0.0,
          new_mids11 = 0.0, new_mids12 = 0.0, new_cgpa10 = 0.0, new_cgpa11 = 0.0, new_cgpa12 = 0.0, updated_marks = 0.0, max_rollno = 60;
    // intializing float variables
    float max = 0.0, min = 0.0;
    // intializing char variables
    char alter3;
    cout << "---------WELCOME TO STUDENT RECORD MANAGEMENT SYSTEM--------" << endl;
    cout << endl;
    cout << "MENU:" << endl;
    cout << "(Note = Kindly select from following options.)" << endl;
    cout << endl;
    cout << " 1- View a student record." << endl;
    cout << " 2- Insert a new record." << endl;
    cout << " 3- Alter a record." << endl;
    cout << " 4- Show records of a respective section." << endl;
    cout << " 5- Show records of a respective course." << endl;
    cout << " 6- Show student with highest CGPA." << endl;
    cout << " 7- Show student with lowest CGPA." << endl;
    cout << " 8- Show students with mid-term marks less than 50." << endl;
    cout << " 9- Show students with zero marks in Quiz 2." << endl;
    cout << " 10- Show students having a prob." << endl;
    cout << " 11- Alter the mid-term marks of a student only." << endl;
    cout << " 12- Alter the Quiz 1 marks of a student only." << endl;
    cout << " 13- Alter the Quiz 2 marks of a student only." << endl;
    cout << " 14- Alter the Quiz 3 marks of a student only." << endl;
    cout << " 15- Show all the records." << endl;
    cout << " 16- Exit." << endl;
    cout << endl;
    cout << endl;
    do
    {
        cout << "___________________________________________________________" << endl;
        cout << endl;
        cout << " Enter an option=";
        cin >> option;
        cout << endl;
        // OPTION 1
        if (option == 1)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 1." << endl;
            cout << "___________________________________________________________" << endl;
            j = 1;
            cout << "Enter the roll no=";
            cin >> roll_no;
            data_index = roll_no - 1;
            cout << endl;
            cout << "The student record is as follows:" << endl;
            if (data_index >= 0 || data_index <= MaxIndex_sec10)
            {
                cout << " * Roll number=" << sec10[data_index] << endl;
                cout << " * semester=2" << endl;
                cout << " * CGPA=" << cgpa_sec10[data_index] << endl;
                cout << " * section=10" << endl;
                cout << " * course code=10213" << endl;
                cout << " * Quiz1 marks=" << quiz1_sec10[data_index] << endl;
                cout << " * Quiz2 marks=" << quiz2_sec10[data_index] << endl;
                cout << " * Quiz3 marks=" << quiz3_sec10[data_index] << endl;
                cout << " * mids marks=" << mids_sec10[data_index] << endl;
            }
            else if (data_index >= 20 || data_index <= MaxIndex_sec11)
            {
                cout << " * roll number=" << sec11[data_index] << endl;
                cout << " * semester=3" << endl;
                cout << " * CGPA=" << cgpa_sec11[data_index] << endl;
                cout << " * section=11" << endl;
                cout << " * course code=10811" << endl;
                cout << " * Quiz1 marks=" << quiz1_sec11[data_index] << endl;
                cout << " * Quiz2 marks=" << quiz2_sec11[data_index] << endl;
                cout << " * Quiz3 marks=" << quiz3_sec11[data_index] << endl;
                cout << " * mids marks=" << mids_sec11[data_index] << endl;
            }
            else if (data_index >= 40 || data_index <= MaxIndex_sec12)
            {
                cout << " * roll number=" << sec12[data_index] << endl;
                cout << " * semester=4" << endl;
                cout << " * CGPA=" << cgpa_sec12[data_index] << endl;
                cout << " * section=12" << endl;
                cout << " * course code=23011" << endl;
                cout << " * Quiz1 marks=" << quiz1_sec12[data_index] << endl;
                cout << " * Quiz2 marks=" << quiz2_sec12[data_index] << endl;
                cout << " * Quiz3 marks=" << quiz3_sec12[data_index] << endl;
                cout << " * mids marks=" << mids_sec12[data_index] << endl;
            }
            else
            {
                cout << "Roll number no found!" << endl;
            }
        }
        // OPTION 2
        else if (option == 2)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 2." << endl;
            cout << "___________________________________________________________" << endl;
            j = 1;
            do
            {
                count2++;
                if (count2 == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(in which you want to insert new record):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << "THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(in which you want to insert new record):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            if (sec == 10)
            {
                index10 = size_of_sec10;
                cout << endl;
                cout << "Enter index(where you want to insert new record):" << endl;
                cin >> index_to_insert;
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << " Kindly fill out the details of new record inserted:" << endl;
                cout << "***********************************************************" << endl;
                cout << " *Enter Quiz 01 marks=";
                cin >> new_1quiz10;
                cout << " *Enter Quiz 02 marks=";
                cin >> new_2quiz10;
                cout << " *Enter Quiz 03 marks=";
                cin >> new_3quiz10;
                cout << " *Enter Mid-term marks=";
                cin >> new_mids10;
                cout << " *Enter CGPA=";
                cin >> new_cgpa10;
                new_rollno10 = max_rollno++;
                cout << endl;
                size_of_sec10 = size_of_sec10 + 1;
                while (index10 >= index_to_insert)
                {
                    sec10[index10 + 1] = sec10[index10];
                    quiz1_sec10[index10 + 1] = quiz1_sec10[index10];
                    quiz2_sec10[index10 + 1] = quiz2_sec10[index10];
                    quiz3_sec10[index10 + 1] = quiz3_sec10[index10];
                    mids_sec10[index10 + 1] = mids_sec10[index10];
                    cgpa_sec10[index10 + 1] = cgpa_sec10[index10];
                    index10--;
                }
                sec10[index_to_insert] = new_rollno10;
                quiz1_sec10[index_to_insert] = new_1quiz10;
                quiz2_sec10[index_to_insert] = new_2quiz10;
                quiz3_sec10[index_to_insert] = new_3quiz10;
                mids_sec10[index_to_insert] = new_mids10;
                cgpa_sec10[index_to_insert] = new_cgpa10;
                cout << "_______________NEW RECORD INSERTED SUCCESFULLY.__________" << endl;
            }
            else if (sec == 11)
            {
                index11 = size_of_sec11;
                cout << endl;
                cout << "Enter index(where you want to insert new record):" << endl;
                cin >> index_to_insert;
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << " Kindly fill out the details of new record inserted:" << endl;
                cout << "***********************************************************" << endl;
                cout << " *Enter Quiz 01 marks=";
                cin >> new_1quiz11;
                cout << " *Enter Quiz 02 marks=";
                cin >> new_2quiz11;
                cout << " *Enter Quiz 03 marks=";
                cin >> new_3quiz11;
                cout << " *Enter Mid-term marks=";
                cin >> new_mids11;
                cout << " *Enter CGPA=";
                cin >> new_cgpa11;
                new_rollno11 = max_rollno++;
                cout << endl;
                size_of_sec11 = size_of_sec11 + 1;
                while (index11 >= index_to_insert)
                {
                    sec11[index11 + 1] = sec11[index11];
                    quiz1_sec11[index11 + 1] = quiz1_sec11[index11];
                    quiz2_sec11[index11 + 1] = quiz2_sec11[index11];
                    quiz3_sec11[index11 + 1] = quiz3_sec11[index11];
                    mids_sec11[index11 + 1] = mids_sec11[index11];
                    cgpa_sec11[index11 + 1] = cgpa_sec11[index11];
                    index11--;
                }
                sec11[index_to_insert] = new_rollno11;
                quiz1_sec11[index_to_insert] = new_1quiz11;
                quiz2_sec11[index_to_insert] = new_2quiz11;
                quiz3_sec11[index_to_insert] = new_3quiz11;
                mids_sec11[index_to_insert] = new_mids11;
                cgpa_sec11[index_to_insert] = new_cgpa11;
                cout << "_______________NEW RECORD INSERTED SUCCESFULLY.__________" << endl;
            }
            else
            {
                index12 = size_of_sec12;
                cout << endl;
                cout << "Enter index(where you want to insert new record):" << endl;
                cin >> index_to_insert;
                cout << endl;
                cout << "***********************************************************" << endl;
                cout << " Kindly fill out the details of new record inserted:" << endl;
                cout << "***********************************************************" << endl;
                cout << " *Enter Quiz 01 marks=";
                cin >> new_1quiz12;
                cout << " *Enter Quiz 02 marks=";
                cin >> new_2quiz12;
                cout << " *Enter Quiz 03 marks=";
                cin >> new_3quiz12;
                cout << " *Enter Mid-term marks=";
                cin >> new_mids12;
                cout << " *Enter CGPA=";
                cin >> new_cgpa12;
                new_rollno12 = max_rollno++;
                cout << endl;
                size_of_sec12 = size_of_sec12 + 1;
                while (index12 >= index_to_insert)
                {
                    sec12[index12 + 1] = sec12[index12];
                    quiz1_sec12[index12 + 1] = quiz1_sec12[index12];
                    quiz2_sec12[index12 + 1] = quiz2_sec12[index12];
                    quiz3_sec12[index12 + 1] = quiz3_sec12[index12];
                    mids_sec12[index12 + 1] = mids_sec12[index12];
                    cgpa_sec12[index12 + 1] = cgpa_sec12[index12];
                    index12--;
                }
                sec12[index_to_insert] = new_rollno12;
                quiz1_sec12[index_to_insert] = new_1quiz12;
                quiz2_sec12[index_to_insert] = new_2quiz12;
                quiz3_sec12[index_to_insert] = new_3quiz12;
                mids_sec12[index_to_insert] = new_mids12;
                cgpa_sec12[index_to_insert] = new_cgpa12;
                cout << "_______________NEW RECORD INSERTED SUCCESFULLY.__________" << endl;
            }
        }
        // OPTION 3
        else if (option == 3)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 3." << endl;
            cout << "___________________________________________________________" << endl;
            do
            {
                count++;
                if (count == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(whose record is required):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << " THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(whose record is required ):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            count3 = 0;
            if (sec == 10)
            {
                e = size_of_sec10 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec10[e]);
                do
                {
                    cout << "***********************************************************" << endl;
                    cout << " Kindly choose any one option:" << endl;
                    cout << "***********************************************************" << endl;
                    caution = 0;
                    cout << "What do want to alter?" << endl;
                    cout << " *Choose O to alter quiz 01 marks." << endl;
                    cout << " *Choose T to alter quiz 02 marks." << endl;
                    cout << " *Choose Q to alter quiz 03 marks." << endl;
                    cout << " *Choose M to alter Mid-term marks." << endl;
                    cout << " *Choose C to alter CGPA." << endl;
                    cout << "Your choice=";
                    cin >> alter3;
                    switch (alter3)
                    {
                    case 'O':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'o':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'T':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 't':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'Q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'M':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'm':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'C':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec10[data_index] = updated_marks;
                        cout << "________________Record updated successfully!________________" << endl;
                        break;
                    }
                    case 'c':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec10[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    default:
                    {
                        caution = 1;
                        cout << "_______________No such option found.________________" << endl;
                        break;
                    }
                    }
                } while (caution != 0);
            }
            else if (sec == 11)
            {
                e = size_of_sec11 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec11[e]);
                do
                {
                    cout << "***********************************************************" << endl;
                    cout << " Kindly choose any one option:" << endl;
                    cout << "***********************************************************" << endl;
                    caution = 0;
                    cout << "What do want to alter?" << endl;
                    cout << " *Choose O to alter quiz 01 marks." << endl;
                    cout << " *Choose T to alter quiz 02 marks." << endl;
                    cout << " *Choose Q to alter quiz 03 marks." << endl;
                    cout << " *Choose M to alter Mid-term marks." << endl;
                    cout << " *Choose C to alter CGPA." << endl;
                    cout << "Your choice=";
                    cin >> alter3;
                    switch (alter3)
                    {
                    case 'O':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'o':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'T':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 't':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'Q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'M':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'm':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'C':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec11[data_index] = updated_marks;
                        cout << "________________Record updated successfully!________________" << endl;
                        break;
                    }
                    case 'c':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec11[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    default:
                    {
                        caution = 1;
                        cout << "_______________No such option found.________________" << endl;
                        break;
                    }
                    }
                } while (caution != 0);
            }
            else
            {
                e = size_of_sec12 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec12[e]);
                do
                {
                    cout << "***********************************************************" << endl;
                    cout << " Kindly choose any one option:" << endl;
                    cout << "***********************************************************" << endl;
                    caution = 0;
                    cout << "What do want to alter?" << endl;
                    cout << " *Choose O to alter quiz 01 marks." << endl;
                    cout << " *Choose T to alter quiz 02 marks." << endl;
                    cout << " *Choose Q to alter quiz 03 marks." << endl;
                    cout << " *Choose M to alter Mid-term marks." << endl;
                    cout << " *Choose C to alter CGPA." << endl;
                    cout << "Your choice=";
                    cin >> alter3;
                    switch (alter3)
                    {
                    case 'O':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'o':
                    {
                        cout << "Enter the updated quiz 01 marks of student:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz1_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'T':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 't':
                    {
                        cout << "Enter the updated quiz 02 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz2_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'Q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'q':
                    {
                        cout << "Enter the updated quiz 03 marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        quiz3_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'M':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'm':
                    {
                        cout << "Enter the updated Mid-term marks:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        mids_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    case 'C':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec12[data_index] = updated_marks;
                        cout << "________________Record updated successfully!________________" << endl;
                        break;
                    }
                    case 'c':
                    {
                        cout << "Enter the updated CGPA:" << endl;
                        cin >> updated_marks;
                        data_index = num - 1;
                        cgpa_sec12[data_index] = updated_marks;
                        cout << "_______________Record updated successfully!_______________" << endl;
                        break;
                    }
                    default:
                    {
                        caution = 1;
                        cout << "_______________No such option found.________________" << endl;
                        break;
                    }
                    }
                } while (caution != 0);
            }
        }
        // OPTION 4
        else if (option == 4)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 4." << endl;
            cout << "___________________________________________________________" << endl;
            j = 1;
            cout << "**Press 1 to see the record of any one section." << endl;
            cout << "**Press anyother key to see the records of all the sections." << endl;
            cout << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count4++;
                    if (count4 == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << " *Course Code=10213" << endl;
                    cout << " *Semester=2" << endl;
                    cout << "The roll numbers of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec10[i] << endl;
                    }
                    cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec10[i] << "=" << quiz1_sec10[i] << endl;
                    }
                    cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec10[i] << "=" << quiz2_sec10[i] << endl;
                    }
                    cout << "Quiz 03 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec10[i] << "=" << quiz3_sec10[i] << endl;
                    }
                    cout << "The CGPA of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec10[i] << "=" << cgpa_sec10[i] << endl;
                    }
                    cout << "The Mid-term marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec10[i] << "=" << mids_sec10[i] << endl;
                    }
                }
                else if (section == 11)
                {
                    cout << " *Course Code=10811" << endl;
                    cout << " *Semester=3" << endl;
                    cout << "The roll numbers of students of section 11 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec11[i] << endl;
                    }
                    cout << "Quiz 02 marks of students of section 11 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec11[i] << "=" << quiz1_sec11[i] << endl;
                    }
                    cout << "Quiz 02 marks of students of section 11 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec11[i] << "=" << quiz2_sec11[i] << endl;
                    }
                    cout << "Quiz 03 marks of students of section 11 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec11[i] << "=" << quiz3_sec11[i] << endl;
                    }
                    cout << "The CGPA of students of section 11 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec11[i] << "=" << cgpa_sec11[i]
                             << endl;
                    }
                    cout << "The Mid-term marks of students of section 11 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec11[i] << "=" << mids_sec11[i] << endl;
                    }
                }
                else
                {
                    cout << " *Course Code=20311" << endl;
                    cout << " *Semester=4" << endl;
                    cout << "The roll numbers of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec12[i] << endl;
                    }
                    cout << "Quiz 01 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec12[i] << "=" << quiz1_sec12[i] << endl;
                    }
                    cout << "Quiz 02 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec12[i] << "=" << quiz2_sec12[i] << endl;
                    }
                    cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec12[i] << "=" << quiz3_sec12[i] << endl;
                    }
                    cout << "The CGPA of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec12[i] << "=" << cgpa_sec12[i] << endl;
                    }
                    cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec12[i] << "=" << mids_sec12[i] << endl;
                    }
                }
            }
            else
            {
                cout << "SECTION: 10" << endl;
                cout << " *Course Code=10213" << endl;
                cout << " *Semester=2" << endl;
                cout << "The roll numbers of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec10[i] << endl;
                }
                cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec10[i] << "=" << quiz1_sec10[i] << endl;
                }
                cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec10[i] << "=" << quiz2_sec10[i] << endl;
                }
                cout << "Quiz 03 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec10[i] << "=" << quiz3_sec10[i] << endl;
                }
                cout << "The CGPA of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *CGPA of student of roll number." << sec10[i] << "=" << cgpa_sec10[i]
                         << endl;
                }
                cout << "The Mid-term marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec10[i] << "=" << mids_sec10[i] << endl;
                }
                cout << endl;
                cout << "SECTION: 11" << endl;
                cout << " *Course Code=10811" << endl;
                cout << " *Semester=3" << endl;
                cout << "The roll numbers of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec11[i] << endl;
                }
                cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec11[i] << "=" << quiz1_sec11[i] << endl;
                }
                cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec11[i] << "=" << quiz2_sec11[i] << endl;
                }
                cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec11[i] << "=" << quiz3_sec11[i] << endl;
                }
                cout << "The CGPA of students of section 12 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *CGPA of student of roll number." << sec11[i] << "=" << cgpa_sec11[i]
                         << endl;
                }
                cout << "The mid-term marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec11[i] << "=" << mids_sec11[i] << endl;
                }
                cout << endl;
                cout << "SECTION: 12" << endl;
                cout << " *Course Code=23011" << endl;
                cout << " *Semester=4" << endl;
                cout << "The roll numbers of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec12[i] << endl;
                }
                cout << "Quiz 01 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec12[i] << "=" << quiz1_sec12[i] << endl;
                }
                cout << "Quiz 02 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec12[i] << "=" << quiz2_sec12[i] << endl;
                }
                cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec12[i] << "=" << quiz3_sec12[i] << endl;
                }
                cout << "The CGPA of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *CGPA of student of roll number." << sec12[i] << "=" << cgpa_sec12[i]
                         << endl;
                }
                cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec12[i] << "=" << mids_sec12[i] << endl;
                }
            }
        }
        // OPTION 5
        else if (option == 5)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 5." << endl;
            cout << "___________________________________________________________" << endl;
            j = 1;
            cout << "**Press 1 to see the record of any one course." << endl;
            cout << "**Press anyother key to see the records of all the courses." << endl;
            cout << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count5++;
                    if (count5 == 1)
                    {
                        cout << "(NOTE: Kindly choose between course code 10213, 10811 and 23011.)"
                             << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> course_code;
                    }
                    else
                    {
                        cout << "THIS COURSE DOESN'T EXIST!" << endl;
                        cout << "Enter course code(whose record is required ):" << endl;
                        cin >> course_code;
                    }
                } while (course_code != 10213 && course_code != 10811 && course_code != 23011);
                if (course_code == 10213)
                {
                    cout << " *Section=10" << endl;
                    cout << " *Semester=2" << endl;
                    cout << "The roll numbers of students of section 10 is as follows:" << endl;
                    cout << "***********************************************************" << endl;
                    cout << " Roll numbers" << endl;
                    cout << "***********************************************************" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec10[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 01 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec10[i] << "=" << quiz1_sec10[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 02 markd" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec10[i] << "=" << quiz2_sec10[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 03 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 03 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec10[i] << "=" << quiz3_sec10[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " CGPA" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The CGPA of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec10[i] << "=" << cgpa_sec10[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Mid-term marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The Mid-term marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec10[i] << "=" << mids_sec10[i] << endl;
                    }
                }
                else if (course_code == 10811)
                {
                    cout << " *Section=11" << endl;
                    cout << " *Semester=3" << endl;
                    cout << "***********************************************************" << endl;
                    cout << " Roll numbers" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The roll numbers of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec11[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 01 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec11[i] << "=" << quiz1_sec11[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 02 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec11[i] << "=" << quiz2_sec11[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 03 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec11[i] << "=" << quiz3_sec11[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " CGPA" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The CGPA of students of section 12 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec11[i] << "=" << cgpa_sec11[i]
                             << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Mid-term marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i <= size_of_sec11; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec11[i] << "=" << mids_sec11[i] << endl;
                    }
                }
                else
                {
                    cout << " *Section=12" << endl;
                    cout << " *Semester=4" << endl;
                    cout << "***********************************************************" << endl;
                    cout << " Roll numbers" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The roll numbers of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Roll number." << i + 1 << "=" << sec12[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 01 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 01 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz1 marks of roll number." << sec12[i] << "=" << quiz1_sec12[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 02 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 02 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz2 marks of student of Roll number." << sec12[i] << "=" << quiz2_sec12[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Quiz 03 marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Quiz3 marks of student of Roll number." << sec12[i] << "=" << quiz3_sec12[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " CGPA" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The CGPA of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *CGPA of student of roll number." << sec12[i] << "=" << cgpa_sec12[i] << endl;
                    }
                    cout << "***********************************************************" << endl;
                    cout << " Mid-term marks" << endl;
                    cout << "***********************************************************" << endl;
                    cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        cout << " *Mid-term marks of student of roll number." << sec12[i] << "=" << mids_sec12[i] << endl;
                    }
                }
            }
            else
            {
                cout << "COURSE CODE: 10213" << endl;
                cout << " *Section=10" << endl;
                cout << " *Semester=2" << endl;
                cout << "***********************************************************" << endl;
                cout << " Roll numbers" << endl;
                cout << "***********************************************************" << endl;
                cout << "The roll numbers of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec10[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 01 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec10[i] << "=" << quiz1_sec10[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 02 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec10[i] << "=" << quiz2_sec10[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 04 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 03 marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec10[i] << "=" << quiz3_sec10[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " CGPA" << endl;
                cout << "***********************************************************" << endl;
                cout << "The CGPA of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *CGPA of student of roll number." << sec10[i] << "=" << cgpa_sec10[i]
                         << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Mid-term marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "The Mid-term marks of students of section 10 is as follows:" << endl;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec10[i] << "=" << mids_sec10[i] << endl;
                }
                cout << endl;
                cout << "COURSE CODE: 10811" << endl;
                cout << " *Section=11" << endl;
                cout << " *Semester=3" << endl;
                cout << "***********************************************************" << endl;
                cout << " Roll numbers" << endl;
                cout << "***********************************************************" << endl;
                cout << "The roll numbers of students of section 11 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec11[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 01 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 01 marks of students of section 11 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec11[i] << "=" << quiz1_sec11[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 02 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 02 marks of students of section 11 is as follows:" << endl;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec11[i] << "=" << quiz2_sec11[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 03 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 03 marks of students of section 11 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec11[i] << "=" << quiz3_sec11[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " CGPA" << endl;
                cout << "***********************************************************" << endl;
                cout << "The CGPA of students of section 11 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *CGPA of student of roll number." << sec11[i] << "=" << cgpa_sec11[i]
                         << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Roll numbers" << endl;
                cout << "***********************************************************" << endl;
                cout << "The mid-term marks of students of section 11 is as follows:" << endl;
                for (int i = 0; i <= size_of_sec11; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec11[i] << "=" << mids_sec11[i] << endl;
                }
                cout << endl;
                cout << "COURSE CODE: 23011" << endl;
                cout << " *Section=12" << endl;
                cout << " *Semester=4" << endl;
                cout << "***********************************************************" << endl;
                cout << " Roll numbers" << endl;
                cout << "***********************************************************" << endl;
                cout << "The roll numbers of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Roll number." << i + 1 << "=" << sec12[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 01 marls" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 01 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz1 marks of roll number." << sec12[i] << "=" << quiz1_sec12[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 02 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 02 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz2 marks of student of Roll number." << sec12[i] << "=" << quiz2_sec12[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Quiz 03 marks" << endl;
                cout << "***********************************************************" << endl;
                cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Quiz3 marks of student of Roll number." << sec12[i] << "=" << quiz3_sec12[i] << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " CGPA" << endl;
                cout << "***********************************************************" << endl;
                cout << "The CGPA of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *CGPA of student of roll number." << sec12[i] << "=" << cgpa_sec12[i]
                         << endl;
                }
                cout << "***********************************************************" << endl;
                cout << " Mid-term marks:" << endl;
                cout << "***********************************************************" << endl;
                cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    cout << " *Mid-term marks of student of roll number." << sec12[i] << "=" << mids_sec12[i] << endl;
                }
            }
        }
        // OPTION 6
        else if (option == 6)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 6." << endl;
            cout << "___________________________________________________________" << endl;
            j = 1;
            cout << "**Press 1 to see the highest CGPA of any one section." << endl;
            cout << "**Press anyother key to see the highest CGPA of all the sections." << endl;
            cout << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count6++;
                    if (count6 == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=10 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the maximum CGPA of students of section 10
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec10; j++)
                        {
                            if (cgpa_sec10[i] >= cgpa_sec10[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec10)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    max = cgpa_sec10[loc];
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        if (max == cgpa_sec10[i])
                        {
                            cout << "The details of student with highest CGPA are as follows:" << endl;
                            cout << " * Roll number=" << sec10[i] << endl;
                            cout << " * semester=2" << endl;
                            cout << " * CGPA=" << cgpa_sec10[i] << endl;
                            cout << " * section=10" << endl;
                            cout << " * course code=10213" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec10[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec10[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec10[i] << endl;
                            cout << " * mids marks=" << mids_sec10[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else if (sec == 11)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=11 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the maximum CGPA of students of section 11
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec11; j++)
                        {
                            if (cgpa_sec11[i] >= cgpa_sec11[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec11)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    max = cgpa_sec11[loc];
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        if (max == cgpa_sec11[i])
                        {
                            cout << "The details of student with highest CGPA are as follows:" << endl;
                            cout << " * Roll number=" << sec11[i] << endl;
                            cout << " * semester=3" << endl;
                            cout << " * CGPA=" << cgpa_sec11[i] << endl;
                            cout << " * section=11" << endl;
                            cout << " * course code=10811" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec11[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec11[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec11[i] << endl;
                            cout << " * mids marks=" << mids_sec11[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=12 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the maximum CGPA of students of section 12
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec12; j++)
                        {
                            if (cgpa_sec12[i] >= cgpa_sec12[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec12)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    max = cgpa_sec12[loc];
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        if (max == cgpa_sec12[i])
                        {
                            cout << "The details of student with highest CGPA are as follows:" << endl;
                            cout << "* Roll number=" << sec12[i] << endl;
                            cout << " * semester=4" << endl;
                            cout << " * CGPA=" << cgpa_sec12[i] << endl;
                            cout << " * section=12" << endl;
                            cout << " * course code=20311" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec12[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec12[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec12[i] << endl;
                            cout << " * mids marks=" << mids_sec12[i] << endl;
                        }
                    }
                }
            }
            else
            {
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=10 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the maximum CGPA of students of section 10
                for (int i = 0; i < size_of_sec10; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec10; j++)
                    {
                        if (cgpa_sec10[i] >= cgpa_sec10[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec10)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                max = cgpa_sec10[loc];
                for (int i = 0; i < size_of_sec10; i++)
                {
                    if (max == cgpa_sec10[i])
                    {
                        cout << "The details of student with highest CGPA are as follows:" << endl;
                        cout << " * Roll number=" << sec10[i] << endl;
                        cout << " * semester=2" << endl;
                        cout << " * CGPA=" << cgpa_sec10[i] << endl;
                        cout << " * section=10" << endl;
                        cout << " * course code=10213" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec10[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec10[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec10[i] << endl;
                        cout << " * mids marks=" << mids_sec10[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=11 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the maximum CGPA of students of section 11
                for (int i = 0; i < size_of_sec11; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec11; j++)
                    {
                        if (cgpa_sec11[i] >= cgpa_sec11[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec11)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                max = cgpa_sec11[loc];
                for (int i = 0; i < size_of_sec11; i++)
                {
                    if (max == cgpa_sec11[i])
                    {
                        cout << "The details of student with highest CGPA are as follows:" << endl;
                        cout << " * Roll number=" << sec11[i] << endl;
                        cout << " * semester=3" << endl;
                        cout << " * CGPA=" << cgpa_sec11[i] << endl;
                        cout << " * section=11" << endl;
                        cout << " * course code=10811" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec11[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec11[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec11[i] << endl;
                        cout << " * mids marks=" << mids_sec11[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=12 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the maximum CGPA of students of section 12
                for (int i = 0; i < size_of_sec12; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec12; j++)
                    {
                        if (cgpa_sec12[i] >= cgpa_sec12[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec12)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                max = cgpa_sec12[loc];
                for (int i = 0; i < size_of_sec12; i++)
                {
                    if (max == cgpa_sec12[i])
                    {
                        cout << "The details of student with highest CGPA are as follows:" << endl;
                        cout << "* Roll number=" << sec12[i] << endl;
                        cout << " * semester=4" << endl;
                        cout << " * CGPA=" << cgpa_sec12[i] << endl;
                        cout << " * section=12" << endl;
                        cout << " * course code=20311" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec12[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec12[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec12[i] << endl;
                        cout << " * mids marks=" << mids_sec12[i] << endl;
                    }
                }
            }
        }
        // OPTION 7
        else if (option == 7)
        {
            j = 1;
            cout << " **Press 1 to see the lowest CGPA of any one section." << endl;
            cout << " **Press anyother key to see the lowest CGPA of all the sections." << endl;
            cout << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count7++;
                    if (count7 == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=10 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the minimum CGPA of students of section 10
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec10; j++)
                        {
                            if (cgpa_sec10[i] <= cgpa_sec10[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec10)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    min = cgpa_sec10[loc];
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        if (min == cgpa_sec10[i])
                        {
                            cout << "The details of student with lowest CGPA are as follows:" << endl;
                            cout << " * Roll number=" << sec10[i] << endl;
                            cout << " * semester=2" << endl;
                            cout << " * CGPA=" << cgpa_sec10[i] << endl;
                            cout << " * section=10" << endl;
                            cout << " * course code=10213" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec10[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec10[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec10[i] << endl;
                            cout << " * mids marks=" << mids_sec10[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else if (sec == 11)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=11 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the minimum CGPA of students of section 11
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec11; j++)
                        {
                            if (cgpa_sec11[i] <= cgpa_sec11[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec11)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    min = cgpa_sec11[loc];
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        if (min == cgpa_sec11[i])
                        {
                            cout << "The details of student with lowest CGPA are as follows:" << endl;
                            cout << " * Roll number=" << sec11[i] << endl;
                            cout << " * semester=3" << endl;
                            cout << " * CGPA=" << cgpa_sec11[i] << endl;
                            cout << " * section=11" << endl;
                            cout << " * course code=10811" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec11[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec11[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec11[i] << endl;
                            cout << " * mids marks=" << mids_sec11[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=12 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the minimum CGPA of students of section 12
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        count = 0;
                        for (int j = 0; j < size_of_sec12; j++)
                        {
                            if (cgpa_sec12[i] <= cgpa_sec12[j])
                            {
                                count++;
                            }
                        }
                        if (count == size_of_sec12)
                        {
                            loc = i;
                        }
                        n1 = count;
                    }
                    min = cgpa_sec12[loc];
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        if (min == cgpa_sec12[i])
                        {
                            cout << "The details of student with lowest CGPA are as follows:" << endl;
                            cout << " * Roll number=" << sec12[i] << endl;
                            cout << " * semester=4" << endl;
                            cout << " * CGPA=" << cgpa_sec12[i] << endl;
                            cout << " * section=12" << endl;
                            cout << " * course code=20311" << endl;
                            cout << " * Quiz1 marks=" << quiz1_sec12[i] << endl;
                            cout << " * Quiz2 marks=" << quiz2_sec12[i] << endl;
                            cout << " * Quiz3 marks=" << quiz3_sec12[i] << endl;
                            cout << " * mids marks=" << mids_sec12[i] << endl;
                        }
                    }
                }
            }
            else
            {
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=10 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the minimum CGPA of students of section 10
                for (int i = 0; i < size_of_sec10; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec10; j++)
                    {
                        if (cgpa_sec10[i] <= cgpa_sec10[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec10)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                min = cgpa_sec10[loc];
                for (int i = 0; i < size_of_sec10; i++)
                {
                    if (min == cgpa_sec10[i])
                    {
                        cout << "The details of student with lowest CGPA are as follows:" << endl;
                        cout << " * Roll number=" << sec10[i] << endl;
                        cout << " * semester=2" << endl;
                        cout << " * CGPA=" << cgpa_sec10[i] << endl;
                        cout << " * section=10" << endl;
                        cout << " * course code=10213" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec10[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec10[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec10[i] << endl;
                        cout << " * mids marks=" << mids_sec10[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=11 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the minimum CGPA of students of section 11
                for (int i = 0; i < size_of_sec11; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec11; j++)
                    {
                        if (cgpa_sec11[i] <= cgpa_sec11[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec11)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                min = cgpa_sec11[loc];
                for (int i = 0; i < size_of_sec11; i++)
                {
                    if (min == cgpa_sec11[i])
                    {
                        cout << "The details of student with lowest CGPA are as follows:" << endl;
                        cout << " * Roll number=" << sec11[i] << endl;
                        cout << " * semester=3" << endl;
                        cout << " * CGPA=" << cgpa_sec11[i] << endl;
                        cout << " * section=11" << endl;
                        cout << " * course code=10811" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec11[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec11[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec11[i] << endl;
                        cout << " * mids marks=" << mids_sec11[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=12 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the minimum CGPA of students of section 12
                for (int i = 0; i < size_of_sec12; i++)
                {
                    count = 0;
                    for (int j = 0; j < size_of_sec12; j++)
                    {
                        if (cgpa_sec12[i] <= cgpa_sec12[j])
                        {
                            count++;
                        }
                    }
                    if (count == size_of_sec12)
                    {
                        loc = i;
                    }
                    n1 = count;
                }
                min = cgpa_sec12[loc];
                for (int i = 0; i < size_of_sec12; i++)
                {
                    if (min == cgpa_sec12[i])
                    {
                        cout << "The details of student with lowest CGPA are as follows:" << endl;
                        cout << " * Roll number=" << sec12[i] << endl;
                        cout << " * semester=4" << endl;
                        cout << " * CGPA=" << cgpa_sec12[i] << endl;
                        cout << " * section=12" << endl;
                        cout << " * course code=20311" << endl;
                        cout << " * Quiz1 marks=" << quiz1_sec12[i] << endl;
                        cout << " * Quiz2 marks=" << quiz2_sec12[i] << endl;
                        cout << " * Quiz3 marks=" << quiz3_sec12[i] << endl;
                        cout << " * mids marks=" << mids_sec12[i] << endl;
                    }
                }
            }
        }
        // OPTION 8
        else if (option == 8)
        {
            j = 1;
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 8." << endl;
            cout << "___________________________________________________________" << endl;
            cout << endl;
            cout << " **Press 1 to see the details of students securing less than 50 of any one section." << endl;
                    cout
                 << " **Press anyother key to see the details of students securing less than 50 of all the sections." << endl;
                    cout
                 << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count8++;
                    if (count8 == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=10 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the Mid-term marks less than 50 of students of section 10
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        if (mids_sec10[i] < 50)
                        {
                            cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                                          cout
                                 << " * Roll number="
                                 << sec10[i]
                                 << endl;
                            cout << " * semester=2" << endl;
                            cout << " * CGPA=" << cgpa_sec10[i] << endl;
                            cout << " * section=10" << endl;
                            cout << " * course code=10213" << endl;
                            cout << " * mids marks=" << mids_sec10[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else if (sec == 11)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=11 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the Mid-term marks less than 50 of students of section 11
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        if (mids_sec11[i] < 50)
                        {
                            cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                                          cout
                                 << " * Roll number="
                                 << sec11[i]
                                 << endl;
                            cout << " * semester=3" << endl;
                            cout << " * CGPA=" << cgpa_sec11[i] << endl;
                            cout << " * section=11" << endl;
                            cout << " * course code=10811" << endl;
                            cout << " * mids marks=" << mids_sec11[i] << endl;
                        }
                    }
                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=12 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the Mid-term marks less than 50 of students of section 12
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        if (mids_sec12[i] < 50)
                        {
                            cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                            cout
                                 << " * Roll number="
                                 << sec12[i]
                                 << endl;
                            cout << " * semester=4" << endl;
                            cout << " * CGPA=" << cgpa_sec12[i] << endl;
                            cout << " * section=12" << endl;
                            cout << " * course code=20311" << endl;
                            cout << " * mids marks=" << mids_sec12[i] << endl;
                        }
                    }
                }
            }
            else
            {
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=10 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the Mid-term marks less than 50 of students of section 10
                for (int i = 0; i < size_of_sec10; i++)
                {
                    if (mids_sec10[i] < 50)
                    {
                        cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                                      cout
                             << " * Roll number="
                             << sec10[i]
                             << endl;
                        cout << " * semester=2" << endl;
                        cout << " * CGPA=" << cgpa_sec10[i] << endl;
                        cout << " * section=10" << endl;
                        cout << " * course code=10213" << endl;
                        cout << " * mids marks=" << mids_sec10[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=11 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the Mid-term marks less than 50 of students of section 11
                for (int i = 0; i < size_of_sec11; i++)
                {
                    if (mids_sec11[i] < 50)
                    {
                        cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                                      cout
                             << " * Roll number="
                             << sec11[i]
                             << endl;
                        cout << " * semester=3" << endl;
                        cout << " * CGPA=" << cgpa_sec11[i] << endl;
                        cout << " * section=11" << endl;
                        cout << " * course code=10811" << endl;
                        cout << " * mids marks=" << mids_sec11[i] << endl;
                    }
                }
                cout << endl;
                cout << endl;
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=12 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the Mid-term marks less than 50 of students of section 12
                for (int i = 0; i < size_of_sec12; i++)
                {
                    if (mids_sec12[i] < 50)
                    {
                        cout << "The details of student with marks less than 50 in Mid-terms are as follows : " << endl;
                                      cout
                             << " * Roll number="
                             << sec12[i]
                             << endl;
                        cout << " * semester=4" << endl;
                        cout << " * CGPA=" << cgpa_sec12[i] << endl;
                        cout << " * section=12" << endl;
                        cout << " * course code=20311" << endl;
                        cout << " * mids marks=" << mids_sec12[i] << endl;
                    }
                }
            }
        }
        // OPTION 9
        else if (option == 9)
        {
            j = 1;
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 9." << endl;
            cout << "___________________________________________________________" << endl;
            cout << endl;
            cout << " **Press 1 to see the details of students securing 0 marks in Quiz 02 of any one section." << endl;
                    cout
                 << " **Press anyother key to see the details of students 0 marks in Quiz 02 of all the sections." << endl;
                    cout
                 << "Enter the option:" << endl;
            cin >> opt;
            if (opt == 1)
            {
                do
                {
                    count6++;
                    if (count6 == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=10 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the Quiz 02 marks of students of section 10
                    count = 0;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        if (quiz2_sec10[i] == 0)
                        {
                            cout << "The details of student securing 0 marks in Quiz 02 are as follows:"
                                 << endl;
                            cout << " * Roll number=" << sec10[i] << endl;
                            cout << " * semester=2" << endl;
                            cout << " * CGPA=" << cgpa_sec10[i] << endl;
                            cout << " * section=10" << endl;
                            cout << " * course code=10213" << endl;
                            cout << " * Quiz 02 marks=" << quiz2_sec10[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec10)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                    cout << endl;
                    cout << endl;
                }
                else if (sec == 11)
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=11 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the students securing 0 marks in Quiz 02 of section 11
                    count = 0;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        if (quiz2_sec11[i] == 0)
                        {
                            cout << "The details of student securing 0 marks in Quiz 02 are as follows:" << endl;
                            cout << " * Roll number=" << sec11[i] << endl;
                            cout << " * semester=3" << endl;
                            cout << " * CGPA=" << cgpa_sec11[i] << endl;
                            cout << " * section=11" << endl;
                            cout << " * course code=10811" << endl;
                            cout << " * Quiz 02 marks=" << quiz2_sec11[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec11)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "___________________________________________________________" << endl;
                    cout << " SECTION=12 " << endl;
                    cout << "___________________________________________________________" << endl;
                    // finding the students securing 0 marks in Quiz 02 of section 12
                    count = 0;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        if (quiz2_sec12[i] == 0)
                        {
                            cout << "The details of student securing 0 marks in Quiz 02 are as follows:" << endl;
                            cout << " * Roll number=" << sec12[i] << endl;
                            cout << " * semester=4" << endl;
                            cout << " * CGPA=" << cgpa_sec12[i] << endl;
                            cout << " * section=12" << endl;
                            cout << " * course code=20311" << endl;
                            cout << " * Quiz 02 marks=" << quiz2_sec12[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec12)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                }
            }
            else
            {
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=10 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the studentssecuring 0 marks in Quiz 02 of section 10
                count = 0;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    if (quiz2_sec10[i] == 0)
                    {
                        cout << "The details of student securing 0 marks in Quiz 02 are as follows:" << endl;
                        cout << " * Roll number=" << sec10[i] << endl;
                        cout << " * semester=2" << endl;
                        cout << " * CGPA=" << cgpa_sec10[i] << endl;
                        cout << " * section=10" << endl;
                        cout << " * course code=10213" << endl;
                        cout << " * Quiz 02 marks=" << quiz2_sec10[i] << endl;
                    }
                    else
                        count++;
                }
                cout << endl;
                cout << endl;
                if (count == size_of_sec10)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=11 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the students securing 0 marks in Quiz 02 of section 11
                count = 0;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    if (quiz2_sec11[i] == 0)
                    {
                        cout << "The details of student securing 0 marks in Quiz 02 are as follows:" << endl;
                        cout << " * Roll number=" << sec11[i] << endl;
                        cout << " * semester=3" << endl;
                        cout << " * CGPA=" << cgpa_sec11[i] << endl;
                        cout << " * section=11" << endl;
                        cout << " * course code=10811" << endl;
                        cout << " * Quiz 02 marks=" << quiz2_sec11[i] << endl;
                    }
                    else
                        count++;
                }
                cout << endl;
                cout << endl;
                if (count == size_of_sec11)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
                cout << "___________________________________________________________"
                     << endl;
                cout << " SECTION=12 " << endl;
                cout << "___________________________________________________________"
                     << endl;
                // finding the students securing 0 marks in Quiz 02 of section 12
                count = 0;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    if (quiz2_sec12[i] == 0)
                    {
                        cout << "The details of student securing 0 marks in Quiz 02 are as follows:" << endl;
                        cout << " * Roll number=" << sec12[i] << endl;
                        cout << " * semester=4" << endl;
                        cout << " * CGPA=" << cgpa_sec12[i] << endl;
                        cout << " * section=12" << endl;
                        cout << " * course code=20311" << endl;
                        cout << " * Quiz 02 marks=" << quiz2_sec12[i] << endl;
                    }
                    else
                    {
                        count++;
                    }
                }
                if (count == size_of_sec12)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
            }
        }
        // OPTION 10
        else if (option == 10)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 10." << endl;
            cout << "___________________________________________________________" << endl;
            cout << endl;
            cout << " **Press 1 to see the details of students having prob of any one section." << endl;
            cout << " **Press anyother key to see the details of students having prob of all the sections." << endl;
                    cout
                 << "Enter the option:" << endl;
            cin >> opt;
            count = 0;
            if (opt == 1)
            {
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                        cout << "Enter section(whose record is required):" << endl;
                        cin >> sec;
                    }
                    else
                    {
                        cout << "THIS SECTION DOESN'T EXIST!" << endl;
                        cout << "Enter section(whose record is required ):" << endl;
                        cin >> sec;
                    }
                } while (sec != 10 && sec != 11 && sec != 12);
                if (sec == 10)
                {
                    cout << "___________________________________________________________"
                         << endl;
                    cout << " SECTION=10 " << endl;
                    cout << "___________________________________________________________"
                         << endl;
                    // finding the students having prob of section 10
                    count = 0;
                    for (int i = 0; i < size_of_sec10; i++)
                    {
                        if (cgpa_sec10[i] < 2.0)
                        {
                            cout << "The details of student having prob are as follows:" << endl;
                            cout << " * Roll number=" << sec10[i] << endl;
                            cout << " * semester=2" << endl;
                            cout << " * CGPA=" << cgpa_sec10[i] << endl;
                            cout << " * section=10" << endl;
                            cout << " * course code=10213" << endl;
                            cout << " * Mid-term marks=" << mids_sec10[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec10)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                    cout << endl;
                    cout << endl;
                }
                else if (sec == 11)
                {
                    cout << "___________________________________________________________"
                         << endl;
                    cout << " SECTION=11 " << endl;
                    cout << "___________________________________________________________"
                         << endl;
                    // finding the students having prob of section 11
                    count = 0;
                    for (int i = 0; i < size_of_sec11; i++)
                    {
                        if (cgpa_sec11[i] < 2.0)
                        {
                            cout << "The details of student having prob are as follows:" << endl;
                            cout << " * Roll number=" << sec11[i] << endl;
                            cout << " * semester=3" << endl;
                            cout << " * CGPA=" << cgpa_sec11[i] << endl;
                            cout << " * section=11" << endl;
                            cout << " * course code=10811" << endl;
                            cout << " * Mid-term marks=" << mids_sec11[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec11)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                    cout << endl;
                    cout << endl;
                }
                else
                {
                    cout << "___________________________________________________________"
                         << endl;
                    cout << " SECTION=12 " << endl;
                    cout << "___________________________________________________________"
                         << endl;
                    // finding the students having prob of section 12
                    count = 0;
                    for (int i = 0; i < size_of_sec12; i++)
                    {
                        if (cgpa_sec12[i] < 2.0)
                        {
                            cout << "The details of student having prob are as follows:" << endl;
                            cout << " * Roll number=" << sec12[i] << endl;
                            cout << " * semester=4" << endl;
                            cout << " * CGPA=" << cgpa_sec12[i] << endl;
                            cout << " * section=12" << endl;
                            cout << " * course code=20311" << endl;
                            cout << " * Mid-term marks=" << mids_sec12[i] << endl;
                        }
                        else
                            count++;
                    }
                    if (count == size_of_sec12)
                    {
                        cout << "NO RECORD FOUND." << endl;
                    }
                }
            }
            else
            {
                cout << "___________________________________________________________" << endl;
                cout << " SECTION=10 " << endl;
                cout << "___________________________________________________________" << endl;
                // finding the students having prob of section 10
                count = 0;
                for (int i = 0; i < size_of_sec10; i++)
                {
                    if (cgpa_sec10[i] < 2.0)
                    {
                        cout << "The details of student having prob are as follows:" << endl;
                        cout << " * Roll number=" << sec10[i] << endl;
                        cout << " * semester=2" << endl;
                        cout << " * CGPA=" << cgpa_sec10[i] << endl;
                        cout << " * section=10" << endl;
                        cout << " * course code=10213" << endl;
                        cout << " * Mid-term marks=" << mids_sec10[i] << endl;
                    }
                    else
                        count++;
                }
                cout << endl;
                cout << endl;
                if (count == size_of_sec10)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
                cout << "___________________________________________________________" << endl;
                cout << " SECTION=11 " << endl;
                cout << "___________________________________________________________" << endl;
                // finding the students having prob of section 11
                count = 0;
                for (int i = 0; i < size_of_sec11; i++)
                {
                    if (cgpa_sec11[i] < 2.0)
                    {
                        cout << "The details of student having prob are as follows:" << endl;
                        cout << " * Roll number=" << sec11[i] << endl;
                        cout << " * semester=3" << endl;
                        cout << " * CGPA=" << cgpa_sec11[i] << endl;
                        cout << " * section=11" << endl;
                        cout << " * course code=10811" << endl;
                        cout << " * Mid-term marks=" << mids_sec11[i] << endl;
                    }
                    else
                        count++;
                }
                cout << endl;
                cout << endl;
                if (count == size_of_sec11)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
                cout << "___________________________________________________________" << endl;
                cout << " SECTION=12 " << endl;
                cout << "___________________________________________________________" << endl;
                // finding the students securing 0 marks in Quiz 02 of section 12
                count = 0;
                for (int i = 0; i < size_of_sec12; i++)
                {
                    if (cgpa_sec12[i] < 2.0)
                    {
                        cout << "The details of student having prob are as follows:" << endl;
                        cout << " * Roll number=" << sec12[i] << endl;
                        cout << " * semester=4" << endl;
                        cout << " * CGPA=" << cgpa_sec12[i] << endl;
                        cout << " * section=12" << endl;
                        cout << " * course code=20311" << endl;
                        cout << " * Mid-term marks=" << mids_sec12[i] << endl;
                    }
                    else
                    {
                        count++;
                    }
                }
                if (count == size_of_sec12)
                {
                    cout << "NO RECORD FOUND." << endl;
                }
            }
        }
        // OPTION 11
        else if (option == 11)
        {
            j = 1;
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 11." << endl;
            cout << "___________________________________________________________" << endl;
            count = 0;
            do
            {
                count++;
                if (count == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(whose record is required):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << "THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(whose record is required ):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            if (sec == 10)
            {
                e = size_of_sec10 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec10[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                mids_sec10[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else if (sec == 11)
            {
                e = size_of_sec11 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec11[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                mids_sec11[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else
            {
                e = size_of_sec12 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec12[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                mids_sec12[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
        }
        // OPTION 12
        else if (option == 12)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 11." << endl;
            cout << "___________________________________________________________" << endl;
            count = 0;
            do
            {
                count++;
                if (count == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(whose record is required):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << "THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(whose record is required ):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            if (sec == 10)
            {
                e = size_of_sec10 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec10[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz1_sec10[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else if (sec == 11)
            {
                e = size_of_sec11 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec11[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz1_sec11[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else
            {
                e = size_of_sec12 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec12[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz1_sec12[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
        }
        // OPTION 13
        else if (option == 13)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 13." << endl;
            cout << "___________________________________________________________" << endl;
            count = 0;
            do
            {
                count++;
                if (count == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(whose record is required):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << "THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(whose record is required ):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            if (sec == 10)
            {
                e = size_of_sec10 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec10[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz2_sec10[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else if (sec == 11)
            {
                e = size_of_sec11 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec11[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz2_sec11[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else
            {
                e = size_of_sec12 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec12[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz2_sec12[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
        }
        // OPTION 14
        else if (option == 14)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 11." << endl;
            cout << "___________________________________________________________" << endl;
            count = 0;
            do
            {
                count++;
                if (count == 1)
                {
                    cout << "(NOTE: Kindly choose between section 10, 11 and 12.)" << endl;
                    cout << "Enter section(whose record is required):" << endl;
                    cin >> sec;
                }
                else
                {
                    cout << "THIS SECTION DOESN'T EXIST!" << endl;
                    cout << "Enter section(whose record is required ):" << endl;
                    cin >> sec;
                }
            } while (sec != 10 && sec != 11 && sec != 12);
            if (sec == 10)
            {
                e = size_of_sec10 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec10[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz3_sec10[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else if (sec == 11)
            {
                e = size_of_sec11 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec11[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz3_sec11[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
            else
            {
                e = size_of_sec12 - 1;
                count = 0;
                do
                {
                    count++;
                    if (count == 1)
                    {
                        cout << "Enter the roll number:" << endl;
                        cin >> num;
                    }
                    else
                    {
                        cout << "ROLL NUMBER NOT FOUND." << endl;
                        cout << "Enter the roll number(again):" << endl;
                        cin >> num;
                    }
                } while (num > sec12[e]);
                cout << "Enter the updated marks of student:" << endl;
                cin >> updated_marks;
                data_index = num - 1;
                quiz3_sec12[data_index] = updated_marks;
                cout << "Record updated successfully!" << endl;
            }
        }
        // OPTION 15
        else if (option == 15)
        {
            cout << "___________________________________________________________" << endl;
            cout << " SECTION=10 " << endl;
            cout << "___________________________________________________________" << endl;
            cout << " *Course Code=10213" << endl;
            cout << " *Semester=2" << endl;
            cout << "The roll numbers of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *Roll number." << i + 1 << "=" << sec10[i] << endl;
            }
            cout << "Quiz 01 marks of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *Quiz1 marks of roll number." << sec10[i] << "=" << quiz1_sec10[i] << endl;
            }
            cout << "Quiz 02 marks of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *Quiz2 marks of student of Roll number." << sec10[i] << "=" << quiz2_sec10[i] << endl;
            }
            cout << "Quiz 03 marks of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *Quiz3 marks of student of Roll number." << sec10[i] << "=" << quiz3_sec10[i] << endl;
            }
            cout << "The CGPA of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *CGPA of student of roll number." << sec10[i] << "=" << cgpa_sec10[i] << endl;
            }
            cout << "The Mid-term marks of students of section 10 is as follows:" << endl;
            for (int i = 0; i < size_of_sec10; i++)
            {
                cout << " *Mid-term marks of student of roll number." << sec10[i] << "=" << mids_sec10[i] << endl;
            }
            cout << endl;
            cout << "___________________________________________________________" << endl;
            cout << " SECTION=11 " << endl;
            cout << "___________________________________________________________" << endl;
            cout << " *Course Code=10811" << endl;
            cout << " *Semester=3" << endl;
            cout << "The roll numbers of students of section 11 is as follows:" << endl;
            for (int i = 0; i < size_of_sec11; i++)
            {
                cout << " *Roll number." << i + 1 << "=" << sec11[i] << endl;
            }
            cout << "Quiz 02 marks of students of section 11 is as follows:" << endl;
            for (int i = 0; i < size_of_sec11; i++)
            {
                cout << " *Quiz1 marks of roll number." << sec11[i] << "=" << quiz1_sec11[i] << endl;
            }
            cout << "Quiz 02 marks of students of section 11 is as follows:" << endl;
            for (int i = 0; i < size_of_sec11; i++)
            {
                cout << " *Quiz2 marks of student of Roll number." << sec11[i] << "=" << quiz2_sec11[i] << endl;
            }
            cout << "Quiz 03 marks of students of section 11 is as follows:" << endl;
            for (int i = 0; i <= size_of_sec11; i++)
            {
                cout << " *Quiz3 marks of student of Roll number." << sec11[i] << "=" << quiz3_sec11[i] << endl;
            }
            cout << "The CGPA of students of section 11 is as follows:" << endl;
            for (int i = 0; i <= size_of_sec11; i++)
            {
                cout << " *CGPA of student of roll number." << sec11[i] << "=" << cgpa_sec11[i]
                     << endl;
            }
            cout << "The Mid-term marks of students of section 11 is as follows:" << endl;
            for (int i = 0; i <= size_of_sec11; i++)
            {
                cout << " *Mid-term marks of student of roll number." << sec11[i] << "=" << mids_sec11[i] << endl;
            }
            cout << endl;
            cout << "___________________________________________________________" << endl;
            cout << " SECTION=12 " << endl;
            cout << "___________________________________________________________" << endl;
            cout << " *Course Code=20311" << endl;
            cout << " *Semester=4" << endl;
            cout << "The roll numbers of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *Roll number." << i + 1 << "=" << sec12[i] << endl;
            }
            cout << "Quiz 01 marks of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *Quiz1 marks of roll number." << sec12[i] << "=" << quiz1_sec12[i] << endl;
            }
            cout << "Quiz 02 marks of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *Quiz2 marks of student of Roll number." << sec12[i] << "=" << quiz2_sec12[i] << endl;
            }
            cout << "Quiz 03 marks of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *Quiz3 marks of student of Roll number." << sec12[i] << "=" << quiz3_sec12[i] << endl;
            }
            cout << "The CGPA of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *CGPA of student of roll number." << sec12[i] << "=" << cgpa_sec12[i] << endl;
            }
            cout << "The Mid-term marks of students of section 12 is as follows:" << endl;
            for (int i = 0; i < size_of_sec12; i++)
            {
                cout << " *Mid-term marks of student of roll number." << sec12[i] << "=" << mids_sec12[i] << endl;
            }
        }
        // OPTION 16
        else if (option == 16)
        {
            cout << "___________________________________________________________" << endl;
            cout << " YOU HAVE CHOOSED OPTION 16." << endl;
            cout << "___________________________________________________________" << endl;
            j = 0;
            cout << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~GOOD BYE ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout
                 << endl;
        }
        // OPTION OTHER THAN 1-16
        else
        {
            j = 1;
            cout << "NO OPTION FOUND." << endl;
        }
    } while (j != 0);
    system("pause");
    return 0;
}