#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }

    void put_number()
    {
        cout << "Roll No: " << roll_number << "\n";
    }
};

class Test : public Student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }

    void put_marks()
    {
        cout << "Marks obtained:\nPart1: " << part1 << "\nPart2: " << part2 << "\n";
    }
};

class Sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }

    void put_score()
    {
        cout << "Sports wt: " << score << "\n\n";
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display();
};

void Result::display()
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total Score: " << total << "\n";
}

int main()
{
    Result student1;
    student1.get_number(789);
    student1.get_marks(30.5, 25.5);
    student1.get_score(7.0);
    student1.display();

    return 0;
}
