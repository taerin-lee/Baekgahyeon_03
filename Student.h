#pragma once
#include <iostream>

namespace LeeTaerin2276249 
{
    class Student{

    private: // <<안써도됨
        int id;
        int score;
        char grade{};
        void testId();
        void testScore();
        void calGrade();

    public:     

        void input();
        void print();
        void setId(int id);
        int getId();
        void setScore(int score);
        int getScore();
        char getGrade();
    };
}
