//No.1 
#include <iostream>
using namespace std;

class gradeSheet{
    public:
    string name;
    string id;
    double subj;
    double subj;
    double subj;
    double subj;
    double subj;
    double average;
    
    double averageAdd(){
        average = (math + science + english + filipino + hekasi) / 5;
        return average;
    }
    
    void setData(string n, string i, double m, double s, double e, double f, double h) {
        name = n;
        id = i;
        subj = m;
        subj = s;
        subj = e;
        subj = f;
        subj = h;
        averageAdd();
    }
    
    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "Filipino: " << filipino << endl;
        cout << "Hekasi: " << hekasi << endl;
        cout << "Average: " << average<< endl;
    }
};

int main() {
    gradeSheet student1, student2, student3, student4, student5;
    student1.setData("name", "id", 79, 81, 85, 95, 76);
    student2.setData("name", "id", 76, 82, 86, 97, 91);
    student3.setData("name", "id", 77, 80, 87, 92, 82);
    student4.setData("name", "id", 78, 89, 89, 81, 75);
    student5.setData("name", "id", 79, 84, 90, 88, 80);
    
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();
    student4.displayInfo();
    student5.displayInfo();

    return 0;
}