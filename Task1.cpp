#include <iostream>

using namespace std;


/*This class contains private atributes*/
class Computer {
private:
	double processor;
	int RAM;
	int memory;


public:

	Computer() {
		processor = 0;
		RAM = 0;
		memory = 0;
	}
	/*constructor*/
	Computer(double CPU, int ram, int hdd) {
		processor = CPU;
		RAM = ram;
		memory = hdd;
	}

	/*GETTTERS*/
	int getRAM() {
		return RAM;
	}
	double getProcessor() {
		return processor;
	}
	int getMemory(){
        return memory;
	}

	/*SETTERS*/
	void setRAM(int sizeofRAM) {	/*setting values for atributes*/
		RAM = sizeofRAM;
	}
	void setProcessor(double sizeofProccessor) {
		processor = sizeofProccessor;
	}
	void setMemory(int sizeofMemory){
        memory=sizeofMemory;
	}
};

int main() {
	int numberOfComp;
	cout << "Enter number of computers: ";
	cin >> numberOfComp;
	Computer*arrOfComp = new Computer[numberOfComp];	/*Making dynamic array to store the computers*/

	int hdd, ram;
	double CPU;

	/*tis variable is for redni broj kompa in array*/
	int number;

    /*Using for loop entering information about the computers*/

	for (int i = 0; i < numberOfComp; i++) {
		cout << "For computer number number" << i << " input processor, ram and disk size." << endl;
		cout << "Processor: ";
		cin >> CPU;
		cout << "RAM:";
		cin>> ram;
		cout << "HDD: ";
		cin >> hdd;
		arrOfComp[i].setProcessor(CPU);
		arrOfComp[i].setRAM(ram);
		arrOfComp[i].setMemory(hdd);
	}

	cout << "Select a computer number which you want to display: ";
	cin >> number;
	for (int x = 0; x < numberOfComp; x++) {
		if (number == x) {
			cout << "This is the computer number " << x  <<": "<< endl;
			cout <<"PROCCESSOR: "<< arrOfComp[number].getProcessor() << " GHz"<<endl;
			cout <<"RAM:"<< arrOfComp[number].getRAM() << endl;
			cout << "HDD: "<< arrOfComp[number].getMemory();
		}
	}
}


