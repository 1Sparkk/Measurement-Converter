#include<iostream>
using namespace std;

class Measurement {
private:
	double value;
	int switchno, i;
public:
	void MeasureFunction() {

		cout << "\n========== MEASUREMENT CONVERTER ==========\n";
		cout << "✓ 0 - Exit the program.\n";
		cout << "✓ 1 - Millimeters to Centimeters.\n";
		cout << "✓ 2 - Kilometers to Meters.\n";
		cout << "✓ 3 - Kilograms to Grams.\n";
		cout << "✓ 4 - Liters to Milliliters.\n";
		cout << "✓ 5 - Centimeters to Millimeters.\n";
		cout << "✓ 6 - Miles to Kilometers.\n";
		cout << "✓ 7 - Feet to Inches.\n";
		cout << "✓ 8 - Pounds to Grams.\n";
		cout << "✓ 9 - Acres to Square Feet.\n";
		cout << "✓ 10 - Quintals to Kilograms.\n";
		cout << "===========================================\n" << endl;

		bool condition = true;

		while (condition) {
			cout << "\n|-- Enter the conversion number: "; cin >> switchno;
			switch (switchno) {
			case 0:
				cout << "\n| Program terminated successfully...";
				break;
			case 1:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Millimeters (mm) to Centimeters (cm): " << value / 10 << "\n" << endl;
				break;
			case 2:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Kilometers (km) to Meters (m): " << value * 1000 << endl;
				break;
			case 3:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Kilograms (kg) to Grams (g): " << value * 1000 << endl;
				break;
			case 4:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Liters (L) to Milliliters (mL): " << value * 1000 << endl;
				break;
			case 5:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Centimeters (cm) to Millimeters (mm): " << value * 10 << endl;
				break;
			case 6:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Miles (mi) to Kilometers (km): " << value * 1.609 << endl;
				break;
			case 7:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Feet (ft) to Inches (in): " << value * 12 << endl;
				break;
			case 8:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Pounds (lb) to Grams (g): " << value * 453.592 << endl;
				break;
			case 9:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Acres to Square Feet (sq. ft.): " << value * 43560 << endl;
				break;
			case 10:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Quintals to Kilograms (kg): " << value * 100 << endl;
				break;
			default:
				cout << "|\n|\n";
				cout << "Invalid input! Please enter a valid conversion number.\n|\n|\n";
				break;
			} if (switchno == 0) {
				condition = false;
			}
		}
	}
};

class Sciencevalues {
private:
	int switchno;
	double value;
public:
	void energy_power() {

		cout << "\n========== ENERGY & POWER CONVERTER ==========\n";
		cout << "✓ 0 - Exit the program.\n";
		cout << "✓ 1 - Watts to Kilowatts.\n";
		cout << "✓ 2 - Kilowatts to Watts.\n";
		cout << "✓ 3 - Horsepower to Kilowatts.\n";
		cout << "✓ 4 - Kilowatts to Horsepower.\n";
		cout << "✓ 5 - Megawatts to Kilowatts.\n";
		cout << "==============================================\n" << endl;

		bool condition = true;

		while (condition) {
			cout << "\n|-- Enter the conversion number: "; cin >> switchno;
			switch (switchno) {
			case 0:
				cout << "Program terminated successfully..." << endl;
				break;
			case 1:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Watts (W) to Kilowatts (kW): " << value * 0.001 << endl;
				break;
			case 2:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Kilowatts (kW) to Watts (W): " << value * 1000 << endl;
				break;
			case 3:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Horsepower (hp) to Kilowatts (kW): " << value * 0.7457 << endl;
				break;
			case 4:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Kilowatts (kW) to Horsepower (hp): " << value * 1.341 << endl;
				break;
			case 5:
				cout << "\n-> Enter the value: "; cin >> value;
				cout << "| Megawatts (MW) to Kilowatts (kW): " << value * 1000 << endl;
				break;
			default:
				cout << "|\n|\n";
				cout << "Invalid input! Please enter a valid conversion number.\n|\n|\n";
				break;

			} if (switchno == 0) {
				condition = false;
			}
		}

	}
};

class Temperature {
private:
	int switchno;
	double value;
public:
	void temperature_function() {

		cout << "\n========== TEMPERATURE CONVERTER ==========\n";
		cout << "✓ 0 - Exit the program.\n";
		cout << "✓ 1 - Celsius to Fahrenheit.\n";
		cout << "✓ 2 - Fahrenheit to Celsius.\n";
		cout << "✓ 3 - Celsius to Kelvin.\n";
		cout << "✓ 4 - Fahrenheit to Kelvin.\n";
		cout << "✓ 5 - Kelvin to Fahrenheit.\n";
		cout << "===========================================\n" << endl;

		bool condition = true;

		while (condition) {
			cout << "|-- Enter the conversion number: "; cin >> switchno;
			switch (switchno) {
			case 0:
				cout << "Program terminated successfully..." << endl;
				break;
			case 1:
				cout << "\n-> Enter the temperature in Celsius (°C): "; cin >> value;
				cout << "| Celsius (°C) to Fahrenheit (°F): " << (value * 1.8) + 32 << " °F" << endl;
				break;
			case 2:
				cout << "\n-> Enter the temperature in Fahrenheit (°F): "; cin >> value;
				cout << "| Fahrenheit (°F) to Celsius (°C): " << (value - 32) * 5 / 9 << " °C" << endl;
				break;
			case 3:
				cout << "\n-> Enter the temperature in Celsius (°C): "; cin >> value;
				cout << "| Celsius (°C) to Kelvin (K): " << value + 273.15 << " K" << endl;
				break;
			case 4:
				cout << "\n-> Enter the temperature in Fahrenheit (°F): "; cin >> value;
				cout << "| Fahrenheit (°F) to Kelvin (K): " << (value - 32) * 5 / 9 + 273.15 << " K" << endl;
				break;
			case 5:
				cout << "\n-> Enter the temperature in Kelvin (K): "; cin >> value;
				cout << "| Kelvin (K) to Fahrenheit (°F): " << (value - 273.15) * 1.8 + 32 << " °F" << endl;
				break;
			default:
				cout << "|\n|\n";
				cout << "Invalid input! Please enter a valid conversion number.\n|\n|\n";
				break;
			} if (switchno == 0) {
				condition = false;
			}
		}
	}

};

int main() {
	Measurement mf;
	Sciencevalues sv;
	Temperature temp;

	int functionno;
	bool condition = true;

	while (condition) {

		cout << "\n========== MEASUREMENT CONVERTER ==========\n";
		cout << "| 0 - Exit the program\n";
		cout << "| 1 - Measurement Conversions\n";
		cout << "| 2 - Energy and Power Conversions\n";
		cout << "| 3 - Temperature Conversions\n";
		cout << "|==========================================\n";

		cout << "|-- Enter your choice: ";
		cin >> functionno;

		switch (functionno) {

		case 0:
			cout << "\nProgram terminated successfully...";
			condition = false;
			break;

		case 1:
			mf.MeasureFunction();
			break;

		case 2:
			sv.energy_power();
			break;

		case 3:
			temp.temperature_function();
			break;

		default:
			cout << "\nInvalid choice! Please try again.\n";
		}
	}

	return 0;
}