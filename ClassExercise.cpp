#include <iostream>
using namespace std;

void Grade(string &name,int &size,double* mark,char* grade)
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "How many subjects do you take: ";
    cin >> size;

    for (int i=0; i< size; ++i)
    {
        cin >> mark[i];
    }

    for (int i=0; i<size; ++i)
    {
        if (mark[i] >= 90 && mark[i] <= 100)
            grade[i] = 'A';
        else if (mark[i] >= 80 && mark[i] < 90)
            grade[i] = 'B';
        else if (mark[i] >= 70 && mark[i] < 80)
            grade[i] = 'C';
        else if (mark[i] >= 60 && mark[i] < 70)
            grade[i] = 'D';
        else if (mark[i] >= 50 && mark[i] < 60)
            grade[i] = 'E';
        else 
            grade[i] = 'F';
    }



}

int main ()
{
    int size = 100; // if you do not initialize this code there will be an error this is due to the way how pointers work
    // and additionally initiallize size with large number because this wiil affect the size of the array 
    string name;
    double mark[size] ;
    char grade[size];

    Grade(name,size,mark,grade);

    cout << "Here is your grade " << name << " : " << endl;
    cout << "Mark" << "   " <<"Grade" <<endl;
    for (int i=0; i<size; ++i)
    {
        cout << mark[i] << "      " <<grade[i] <<endl;
    }


    return 0;
}
// using dynamic memory allocatiion is very recommended to use it in the following way
/*
#include <iostream>
using namespace std;

void Grade(string &name, int &size, double* &mark, char* &grade)
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "How many subjects do you take: ";
    cin >> size;

    mark = new double[size];
    grade = new char[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> mark[i];
    }

    // Grade calculation code remains the same
}

int main()
{
    int size = 0;
    string name = "NINIB";
    double *mark = nullptr;
    char *grade = nullptr;

    Grade(name, size, mark, grade);

    cout << "Here is your grade " << name << " : " << endl;
    cout << "Mark" << "   " << "Grade" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << mark[i] << "      " << grade[i] << endl;
    }

    delete[] mark;
    delete[] grade;

    return 0;
}
*/