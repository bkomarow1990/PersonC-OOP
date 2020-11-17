#include <iostream>
#include <string>
using namespace std;
class Student {
	class Date {
		static const size_t CURRENT_YEAR = 2020;
		static const size_t OLDEST_YEAR = 1910;
		bool isLeap(size_t& year) {
			return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
		}
	public:
		void setMonth(const size_t& month_) {
			if (month_ >= 1 && month_ <= 12)
			{
				month = month_;
			}
		}
		void setYear(const size_t& year_) {
			if (year_ < CURRENT_YEAR && year_ < OLDEST_YEAR) {
				year = year_;
			}
		}
		void setDay(size_t& day_) {
			size_t dayInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (day >= 1 && day <= dayInMonth[month - 1])
			{
				day = day_;
			}
			else if (month == 2 && day_ == 29 && isLeap(year)) {
				day = day_;

			}
			else {
				cout << "ENTER CORRECT DATE" << endl;
			}
		}
		void inputDate() {
			cout << "Enter Month" << endl;
			cin >> month;
			cout << "Enter Day" << endl;
			cin >> day;
			cout << "Enter Year" << endl;
			cin >> year;
		}
	private:
		size_t day, month, year;
	}; // end Date
	bool isDigit(const size_t& SIZE_, const string& string_) {
		for (size_t i = 0; i < SIZE_; i++)
		{
			if (!isdigit(string_[i]))
			{
				return false;
			}
		}
		return true;
	}

private:
	string name;
	string surname;
	string fathername;
	string phone;
	string city;
	string country;
	Date birth;
public:
	void input() {
		bool isCorrect = false;
		while (!isCorrect) {
			cout << "ENTER NAME: " << endl;
			if (!name.empty())
			{
				if (isDigit(name.length(),name))
				{

				}
			}
			cin >> name;
			cout << "ENTER SURNAME: " << endl;
			cin >> surname;
			cout << "ENTER DATE OF B-DAY: " << endl;
			
			cout << "ENTER PHONE: " << endl;
			cout << "ENTER PHONE: " << endl;
		}
	}

};
int main() {
	Student Boris;
	
	return 0;
}