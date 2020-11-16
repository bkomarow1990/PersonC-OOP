//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//class Person {
//	public:
//		void input() {
//			cout << "Enter name: " << endl;
//			cin >> name;
//			cout << "Enter surname: " << endl;
//			cin >> surname;
//			cout << "Enter age: " << endl;
//			cin >> age;
//		}
//	void print() {
//		cout << "Name: " << name << endl;
//		cout << "Surname:" << surname << endl;
//		cout << "Age: " << age << endl;
//	}
//	// accessors, getter & setter
//	void setName(const string &newName) {
//		if (!newName.empty()) {
//			name = newName;
//		}
//	}
//	void setSurname(const string& newSurname) {
//		if (!newSurname.empty()) {
//			surname = newSurname;
//		}
//	}
//	void setAge(const size_t& newAge) {
//		const size_t MAXAGE=120;
//		if (newAge < MAXAGE) {
//			age = newAge;
//		}
//		else {
//			cout << "Enter Correct Age" << endl;
//		}
//	}
//	const string & getName() {
//		return name;
//	}
//	const string& getSurname() {
//		return surname;
//	}
//	const int& getAge() {
//		return age;
//	}
//	private: //incapsulation
//	string name="NoName";
//	string surname = "NoSurname";
//	size_t age = 0;
//};
//int main() {
//	setlocale(LC_ALL,"Ru");
//	// cout << "Hello world" << endl;
//	Person person;
//	person.setName("Dzherik");
//	person.setSurname("Albertovich");
//	person.setAge(19);
//	cout<<person.getName()<<endl;
//	cout << person.getSurname() << endl;
//	cout << person.getAge() << endl;
//	// cout << <<endl;
//	// cout << person.getName() <<endl;
//	//Person person{"Vova","V.",14};
//	//cout << "Size of" << sizeof(person) << endl;
//	//person.name = "VOVA";
//	//cout << person.name << endl;
//
//	return 0;
//}#include <iostream>
//using namespace std;