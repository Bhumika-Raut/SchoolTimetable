#include <iostream>
using namespace std;

class Lecture {
private:
    string subject;
    string time;

public:
    Lecture(string subject, string time) {
        this->subject = subject;
        this->time = time;
    }

    void setSubject(string subject) {
        this->subject = subject;
    }

    void setTime(string time) {
        this->time = time;
    }

    string getSubject() {
        return subject;
    }

    string getTime() {
        return time;
    }

    void displayLecture() {
        cout << "--- Lecture ---" << endl;
        cout << "Subject: " << getSubject() << endl;
        cout << "Time: " << getTime() << endl;
    }
};

class Lab {
private:
    string subject;
    string time;

public:
    Lab(string subject, string time) {
        this->subject = subject;
        this->time = time;
    }

    void setSubject(string subject) {
        this->subject = subject;
    }

    void setTime(string time) {
        this->time = time;
    }

    string getSubject() {
        return subject;
    }

    string getTime() {
        return time;
    }

    void displayLab() {
        cout << "--- Lab ---" << endl;
        cout << "Subject: " << getSubject() << endl;
        cout << "Time: " << getTime() << endl;
    }
};

int main() {
    Lecture lec1("English", "10:00 AM");
    Lecture lec2("Maths", "11:00 AM");

    Lab lab1("Chemistry", "1:00 PM");
    Lab lab2("Science", "2:00 PM");

    lec1.displayLecture();
    lec2.displayLecture();
    lab1.displayLab();
    lab2.displayLab();

    return 0;
}
