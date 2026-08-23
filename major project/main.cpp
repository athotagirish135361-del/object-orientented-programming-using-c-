#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

class Doctor {
private:
    long long id;
    string name;
    string specialization;

public:
    int startTime;
    int endTime;

    Doctor() {}

    Doctor(long long i, string n, string s) {
        id = i;
        name = n;
        specialization = s;
        startTime = 8;
        endTime = 13;
    }

    long long getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getSpecialization() {
        return specialization;
    }

    friend void showDoctor(Doctor d);
};

class Patient {
public:
    long long id;
    string name;
    int age;

    Patient() {}

    Patient(long long i, string n, int a) {
        id = i;
        name = n;
        age = a;
    }
};

class Appointment {
public:
    long long doctorId;
    long long patientId;
    int time;

    Appointment() {}

    Appointment(long long d, long long p, int t) {
        doctorId = d;
        patientId = p;
        time = t;
    }
};

Doctor doctors[MAX];
Patient patients[MAX];
Appointment appointments[MAX];

int doctorCount = 0;
int patientCount = 0;
int appointmentCount = 0;

void showDoctor(Doctor d) {
    cout << "Doctor ID: " << d.id << endl;
}


void addDefaultDoctors() {

    doctors[doctorCount++] = Doctor(101, "DrMehta", "Cardiologist");
    doctors[doctorCount++] = Doctor(102, "DrShah", "Neurologist");
    doctors[doctorCount++] = Doctor(103, "DrPatel", "Orthopedist");
    doctors[doctorCount++] = Doctor(104, "DrJoshi", "Gynaecologist");
    doctors[doctorCount++] = Doctor(105, "DrDesai", "Neurologist");

}



void showDoctors() {

    cout << "\nAvailable Doctors\n";

    for(int i = 0; i < doctorCount; i++) {

        cout << "Doctor ID: " << doctors[i].getId()
             << " | Name: " << doctors[i].getName()
             << " | Specialization: " << doctors[i].getSpecialization()
             << " | Time: 8AM - 1PM\n";
    }
}

void addPatient() {

    long long id;
    int age;
    string name;

    cout << "Enter Patient ID: ";
    cin >> id;

    cout << "Enter Patient Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    patients[patientCount++] = Patient(id, name, age);

    cout << "Patient registered successfully!\n";
}

void scheduleAppointment() {

    long long dId, pId;
    int time;

    cout << "Enter Doctor ID: ";
    cin >> dId;

    cout << "Enter Patient ID: ";
    cin >> pId;

    cout << "Enter Time (24hr format): ";
    cin >> time;

    for (int i = 0; i < doctorCount; i++) {

        if (doctors[i].getId() == dId) {

            if (time >= doctors[i].startTime && time <= doctors[i].endTime) {

                appointments[appointmentCount++] = Appointment(dId, pId, time);

                cout << "Appointment Scheduled!\n";
                return;

            }
            else {
                cout << "Doctor available only from 8AM to 1PM\n";
                return;
            }
        }
    }

    cout << "Doctor not found!\n";
}



void showAppointments(long long doctorId) {

    cout << "\nAppointments for Doctor " << doctorId << endl;

    for (int i = 0; i < appointmentCount; i++) {

        if (appointments[i].doctorId == doctorId) {

            cout << "Patient ID: " << appointments[i].patientId
                 << " | Time: " << appointments[i].time << ":00\n";
        }
    }
}

int main() {

    addDefaultDoctors();

    int choice;

    while (true) {

        cout << "\n--- Doctor Appointment System ---\n";
        cout << "1. Show Doctors\n";
        cout << "2. Register Patient\n";
        cout << "3. Schedule Appointment\n";
        cout << "4. Show Doctor Appointments\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            showDoctors();
            break;

        case 2:
            addPatient();
            break;

        case 3:
            scheduleAppointment();
            break;

        case 4:
        {
            long long id;
            cout << "Enter Doctor ID: ";
            cin >> id;
            showAppointments(id);
            break;
        }

        case 5:
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }
}
