#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int score;
    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }

    bool operator<(Student &student)
    {
        return this->score < student.score;
    }
};

bool compare(Student a, Student b)
{
    return a < b;
}

int main()
{
    Student data[] = {
            Student("3길동", 68),
            Student("4길동", 88),
            Student("1길동", 22),
            Student("5길동", 99),
            Student("2길동", 58)
        };

    sort(data, data + 5, compare);

    for (int i = 0; i < 5; i++)
    {
        cout << data[i].name << ' ';
    }
}