#include "Student.h"

int main() {

    using LeeTaerin2276249::Student;
    using namespace std;

    Student s1;
    s1.input();
    s1.print();

    Student s2;
    s2.setId(2276250);
    s2.setScore(85);
    s2.print();

    //비교하는 부분에 따라(같은 학번인지, 같은 점수인지, 같은 학점인지)

    if(s1.getId() == s2.getId()
       && s1.getScore() == s2.getScore() 
       && s1.getGrade() == s2.getGrade()){
        cout << "두 학생은 같습니다.\n";
    } else {
        cout << "두 학생은 다릅니다.\n";
    }

    return 0;
}