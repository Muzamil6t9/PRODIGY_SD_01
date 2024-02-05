#include<iostream>
using namespace std;

double celsTofahr(double cels) {
    return (cels * 9/5) + 32;
}
double celsTokel(double cels) {
    return cels + 273.15;
}

double fahrTocels(double fahr) {
    return (fahr - 32) * 5/9;
}

double fahrTokel(double fahr) {
    return (fahr + 459.67) * 5/9;
}

double kelTocels(double kel) {
    return kel - 273.15;
}

double kelTofahr(double kel) {
    return (kel * 9/5) - 459.67;
}

int main() {
	
	cout<<"\t\t******WELCOME******\n\t******Temprature Convertor******\n\n";
	cout<<"******************************************************\n";
		
	double temp;
    char unit;
	
    cout << "Enter the temperature value: ";
    cin >> temp;
    cout << "Enter unit of temprature [C, F, or K] (Use UPPERCASE only)   -> ";
    cin >> unit;
    cout<<endl;
    switch(unit) {
        case 'C':
            cout << "The temprature in Fahrenheit is: " << celsTofahr(temp) << " F" << endl;
            cout << "The temprature in Kelvin is: " << celsTokel(temp) << " K" << endl;
            break;
            
        case 'F':
            cout << "The temprature in Celsius is: " << fahrTocels(temp) << " C" << endl;
            cout << "The temprature in Kelvin is: " << fahrTokel(temp) << " K" << endl;
            break;
            
        case 'K':
            cout << "The temprature in Celsius is: " << kelTocels(temp) << " C" << endl;
            cout << "The temprature in Fahrenheit is: " << kelTofahr(temp) << " F" << endl;
            break;
            
        default:
            cout << "Invalid unit!! \nPlease enter C, F, or K (Use UPPERCASE only)" << endl;
    }

    return 0;

}
