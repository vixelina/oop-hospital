#include <iostream>
#include <string>
#include "stdafx.h"
#include "doctor.h" // Включване на хедър файла за класа Doctor

using namespace std;

// Дефиниране на класа "Преглед"
class Apoitntment {
private:
	string patientName; // Име на пациента
	string idn; // ЕГН на пациента
	Doctor* doctorPtr; // Указател към лекар
	string appointmentTime; // Запазен час
	bool isHealthInsurance; // Флаг указващ дали прегледът е по здравна каса
	double paymentFee; // Такса за плащане

public:
	// Конструктор за инициализация на обект от класа
	Apoitntment(const string& name, const string& eth, Doctor* doctor, const string& time, bool healthInsurance)
		: patientName(name), idn(eth), doctorPtr(doctor), appointmentTime(time), isHealthInsurance(healthInsurance), paymentFee(0.0) {}

	// Метод за отпечатване на информация за прегледа
	void printInfo() const {
		cout << "Patient Name: " << patientName << endl; // Извеждане на името на пациента
		cout << "IDN: " << idn << endl; // Извеждане на ЕГН на пациента
		cout << "Doctor: " << doctorPtr->getName() << endl; // Извеждане на името на лекаря
		cout << "Appointment Time: " << appointmentTime << endl; // Извеждане на запазения час за прегледа
		cout << "Health Insurance: " << (isHealthInsurance ? "Yes" : "No") << endl; // Извеждане на информация дали прегледа е по здравна каса
		cout << "Payment Fee: " << paymentFee << " BGN" << endl; // Извеждане на таксата за плащане
	}

	// Метод за запазване на час за преглед
	void reserveAppointment(const string& time) {
		appointmentTime = time; // Запазване на новия час за преглед
	}
};
//нямаше ми го кода а го бях качил Д:

