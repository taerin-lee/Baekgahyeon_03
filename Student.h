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
        student(int i=2276249 , int s=0 , char g='F' ) : id(i), score(s), grade(g) {
            testId();
            testScore();
            calGrade();
        } //기본값이 있는 student 생성자. calGrade(); 있으니까 char g, grade(g) 없어도 된다고..? 근데 값을 집어넣어주고 싶으니까 냅두어라..?
        
        void input();
        void print();
        void setId(int id);
        int getId();
        void setScore(int score);
        int getScore();
        char getGrade();
    };
}
