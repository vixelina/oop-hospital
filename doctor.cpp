//Частта на Недко 
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Doctor {
private:
	string name;
	string specialty;
	int roomNumber;
	string appointments[10]; // Масив от 10 приемни часове
public:
	// Конструктор
	Doctor(const string& doctorName, const string& doctorSpecialty, int doctorRoomNumber)
		: name(doctorName), specialty(doctorSpecialty), roomNumber(doctorRoomNumber) {
		// Инициализираме масива с празни низове, което означава, че няма запазени часове.
		for (int i = 0; i < 10; ++i) {
			appointments[i] = "Free";
		}
	}

	// Метод за запазване на час прием
	bool reserveAppointment(const string& time) {
		for (int i = 0; i < 10; ++i) {
			if (appointments[i] == "Free") {
				appointments[i] = time;
				return true; // Успешно запазване на часа
			}
		}
		return false; // Няма свободни часове за запазване
	}

	// Метод за извеждане на информация за лекаря
	void printInfo() const {
		cout << "Name: " << name << endl;
		cout << "Specialty: " << specialty << endl;
		cout << "Room Number: " << roomNumber << endl;
		cout << "Appointments: " << endl;
		for (int i = 0; i < 10; ++i) {
			cout << "  " << appointments[i] << endl;
		}
	}
};

int main() {
	// Създаване на обект от тип Doctor
	Doctor drSmith("Dr. Smith", "Pediatrician", 101);

	// Запазване на някои приемни часове
	drSmith.reserveAppointment("10:00");
	drSmith.reserveAppointment("11:30");
	drSmith.reserveAppointment("14:00");

	// Извеждане на информация за лекаря
	drSmith.printInfo();

	return 0;
}

