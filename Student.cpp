
#include "Student.h"

namespace LeeTaerin2276249 {
    void Student::testId(){
        //id:7 digits
        if (id < 1000000 || id > 9999999) {
            std::cout << "학번은 7자리 숫자여야 합니다. 다시 입력해주세요.\n";
            std::exit(1); //exit(1); 만 써도 실행됨
        }
    }
    void Student::testScore(){
        //score: 0~100
        if (score < 0 || score > 100) {
            std::cout << "점수는 0~100 사이의 값이어야 합니다. 다시 입력해주세요.\n";
            std::exit(1);
        }
    }
    void Student::calGrade(){
        switch (score / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }
    }
    void Student::print() {
        std::cout << "ID: " << id << ", SCORE: " << score << ", GRADE: " << grade << "\n";
    }
    void Student::input() {
        std::cout << "학번을 입력하세요: ";
        std::cin >> id;
        testId();
        std::cout << "점수를 입력하세요: ";
        std::cin >> score;
        testScore();
        calGrade();
    }
    int Student::getId() {
        return id;
    }
    int Student::getScore() {
        return score;
    }
    char Student::getGrade() {
        return grade;
    }
    void Student::setId(int inputId) {
        id = inputId;
        testId();
    }
    void Student::setScore(int inputScore) {
        score = inputScore;
        testScore();
        calGrade();
}
}