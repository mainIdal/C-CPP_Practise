#include <iostream>
using namespace std;
#define DEFAULT 100  //Default Starvation Rate

class HealthCenterInfo{
    protected:
        string name, surname;
        int age, starvationRate;
    public:
        HealthCenterInfo(string name, string surname, int age)
        {
            this->name = name;
            this->surname = surname;
            this->age = age;
            setStarvationRate(DEFAULT);
        }
        string getName()
        {
            return name;
        }
        string getSurname()
        {
            return surname;
        }
        string getFullName()
        {
            return (name + ' ' + surname);
        }
        //it was getCity() in the explanation but we don't have any member about city.
        //So I changed it to getAge.
        int getAge()
        {
            return age;
        }
        void setStarvationRate(int starvationRate)
        {
            this->starvationRate = starvationRate;
        }
        int getStarvationRate()
        {
            return starvationRate;
        }
        bool checkStarvation()
        {
            if (starvationRate < 20)
                return true;
            return false;
        }
        ~HealthCenterInfo()
        {
            cout << name << ' ' << surname << " quit the health center.\n";
        }
};

class Patient : public HealthCenterInfo{
    private:
        string diseaseName;
    public:
        Patient(string name, string surname, int age, string diseaseName) : HealthCenterInfo(name, surname, age)
        {
            setDiseaseName(diseaseName);
        }
        void setDiseaseName(string diseaseName)
        {
            this->diseaseName = diseaseName;
        }
        bool checkStarvation()
        {
            if (starvationRate < 50)
                return true;
            return false;
        }
        void takeACare()
        {
            starvationRate -= 15;
            if (checkStarvation())
                cout << "Patient: " << getFullName() << " is hungry!\n";
        }
        ~Patient()
        {
            cout << getFullName() << " was discharged!\n";
        }
};

class Employee : public HealthCenterInfo{
    protected:
        int employeeId;
    public:
        Employee(string name, string surname, int age, int employeeId) : HealthCenterInfo(name, surname, age)
        {
            this->employeeId = employeeId;
        }
        int getEmployeeId()
        {
            return employeeId;
        }
        bool checkStarvation()
        {
            if (starvationRate < 20)
                return true;
            return false;
        }
        void checkPatient(Patient& a)
        {
            starvationRate -= 5;
            cout << "The patient named " << a.getFullName() << " is checking!\n";
            if (checkStarvation())
                cout << getFullName() << " is starving!\n";
        }
        ~Employee()
        {
            cout << getFullName() << " quits the job in the health center.\n";
        }
};

class Doctor : public Employee{
    public:
        Doctor(string name, string surname, int age, int employeeId) : Employee(name, surname, age, employeeId){}
        void checkPatient(Patient& a)
        {
            starvationRate -= 5;
            cout << "The patient named " << a.getFullName() << " is checking!\n";
            a.takeACare();
            cout << getFullName() << " gives medicine to patient.\n";
            if (checkStarvation())
                cout << getFullName() << " is starving!\n";
        }
        ~Doctor()
        {
            cout << getFullName() << " quit being a Doctor in this center!\n";
        }
};

class Nurse : public Employee{
    public:
        Nurse(string name, string surname, int age, int employeeId) : Employee(name, surname, age, employeeId){}
        void checkPatient(Patient& a)
        {
            starvationRate -= 10;
            cout << "The patient named " << a.getFullName() << " is checking!\n";
            a.takeACare();
            cout << getFullName() << " took care of the patient.\n";
            if (checkStarvation())
                cout << getFullName() << " is starving!\n";
        }
        ~Nurse()
        {
            cout << getFullName() << " quit being a Nurse in this center!\n";
        }
};

int main()
{
   Doctor doctor("David", "Tennant", 49, 181971);
   Nurse nurse("Jodie", "Whittaker", 38, 171982);
   Patient patient("Matt", "Smith", 37, "xyzxyz");
   cout << "All people in this health center:\n";
   cout << doctor.getFullName() << endl;
   cout << nurse.getFullName() << endl;
   cout << patient.getFullName() << endl;
   cout << "\nAll employees works:\n";
   for (int i = 0; i<5; i++)
   {
       cout << '\n';
       cout << nurse.getFullName() << endl;
       nurse.checkPatient(patient);
       cout << '\n';
       cout << doctor.getFullName() << endl;
       doctor.checkPatient(patient);
   }
   cout << '\n';
   return 0;
}
