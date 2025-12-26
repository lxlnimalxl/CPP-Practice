//#include <iostream>
//using namespace std;
//
//
//class Car {
//
//public:
//	string brand;
//	string model;
//	int year;
//	void displayInfo() {
//		cout << "BRAND : " << brand << endl;
//		cout << "MODEL : " << model << endl;
//		cout << "YEAR : " << year << endl;
//	}
//};
//
//
//int main()
//{
//	Car car1;
//	car1.brand = "pride";
//	car1.model = "hajpak";
//	car1.year = 2006;
//	car1.displayInfo();
//
//	Car car2;
//	car2.brand = "benz";
//	car2.model = "cls";
//	car2.year = 2024;
//	car2.displayInfo();
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//class BOOK {
//public:
//	string author;
//	string title;
//	int year;
//
//
//	BOOK(string a, string t, int y) {
//		author = a;
//		title = t;
//		year = y;
//	}
//
//
//	~BOOK() {
//		cout << "BOOK IS DESTROYED!" << endl;
//	}
//
//
//	void displayInfo() {
//		cout << "Author : " << author << endl;
//		cout << "Title : " << title << endl;
//		cout << "Year : " << year << endl;
//	}
//};
//
//int main()
//{
//	BOOK book1("nima", "hacker in world", 2024);
//	book1.displayInfo();
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class MOVIE {
//public:
//	string director;
//	string title;
//	int year;
//
//	MOVIE(string d, string t, int y) {
//		director = d;
//		title = t;
//		year = y;
//
//		cout << "movie created!!!!" << endl;
//	}
//
//	~MOVIE() {
//		cout << "movie destroyed!!!!" << endl;
//	}
//
//	void displayInfo() {
//		cout << "Director : " << director << endl;
//		cout << "Title : " << title << endl;
//		cout << "Year : " << year << endl;
//	}
//
//};
//
//
//
//int main()
//{
//	MOVIE m1("nima", "the king in night", 2000);
//	m1.displayInfo();
//
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//	int salary;
//	string name;
//	string department;
//public:
//	void setSalary(int s) {
//		salary = s;
//	}
//	int getSalary() {
//		return salary;
//	}
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setDepartment(string d) {
//		department = d;
//	}
//	string getDepartment() {
//		return department;
//	}
//
//	void displayInfo() {
//		cout << "Salary : " << getSalary() << endl;
//		cout << "Name : " << getName() << endl;
//		cout << "Department : " << getDepartment() << endl;
//	}
//};
//
//
//int main()
//{
//	Employee E1;
//	E1.setSalary(99999999);
//	E1.setName("Nima");
//	E1.setDepartment("Bank");
//	E1.displayInfo();
//	return 0;
//}


//ta jaleseh 3



//#include <iostream>
//using namespace std;
//
//class Rectangle {
//private:
//	int width;
//	int height;
//public:
//	void setW(int w) {
//		width = w;
//	}
//	int getW() {
//		return width;
//	}
//	void setH(int h) {
//		height = h;
//	}
//	int getH() {
//		return height;
//	}
//	Rectangle(int w, int h) {
//		width = w;
//		height = h;
//	}
//	~Rectangle() {
//		cout << "Rectangle object destroyed!" << endl;
//	}
//	void area() {
//		cout << height * width << endl;
//	}
//};
//
//int main() {
//	Rectangle R1(2, 3);
//	R1.area();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//	string name;
//	int age;
//	float grade;
//public:
//	Student(string n, int a, float g) {
//		name = n;
//		age = a;
//		grade = g;
//	}
//	void setName(string n) {
//		name = n;
//	}
//	string getName() {
//		return name;
//	}
//	void setAge(int a) {
//		age = a;
//	}
//	int getAge() {
//		return age;
//	}
//	void setGrade(float g) {
//		grade = g;
//	}
//	float getGrade() {
//		return grade;
//	}
//	void displayInfo() {
//		cout << "name : " << name << endl;
//		cout << "age : " << age << endl;
//		cout << "grade : " << grade << endl;
//	}
//	~Student() {
//		cout << "Student object destroyed!" << endl;
//	}
//};
//
//int main() {
//	Student s1("ali", 20, 19.75);
//	s1.displayInfo();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {
//public:
//	string make;
//	int year;
//};
//class Car : public Vehicle {
//public:
//	string model;
//	void displayInfo() {
//		cout << make << endl;
//		cout << model << endl;
//		cout << year << endl;
//	}
//};
//int main() {
//	Car car1;
//	car1.make = "benz";
//	car1.model = "cls";
//	car1.year = 2024;
//	car1.displayInfo();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual void draw() {
//		cout << "this is draw!" << endl;
//	}
//};
//
//class Circle : public Shape {
//public:
//	void draw() override {
//		cout << "this is a Circle!" << endl;
//	}
//};
//
//class Rectangle : public Shape {
//public :
//	void draw() override {
//		cout << "this is a Rectangle!" << endl;
//	}
//};
//
//int main() {
//	Shape* shape1;
//	Circle c1;
//	Rectangle r1;
//	shape1 = &c1;
//	shape1->draw();
//	shape1 = &r1;
//	shape1->draw();
//	return 0;
//}

// ta jaleseh 5 l


//#include <iostream>
//using namespace std;
//
//class Integer {
//private:
//	int value;
//public:
//	Integer(int v = 0) {
//		value = v;
//	}
//	Integer operator + (const Integer& i){
//		return Integer(this->value + i.value);
//	}
//	Integer operator == (const Integer& i) {
//		return Integer(this->value == i.value);
//	}
//	void display() {
//		cout << value << endl;
//	}
//};
//
//int main() {
//	Integer i1(11), i2(11);
//	Integer sum = i1 + i2;
//	sum.display();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Employee {
//public:
//	virtual void work() = 0;
//};
//class Manager : public Employee {
//public:
//	void work() override {
//		cout << "Manager is working!!!" << endl;
//	}
//};
//
//class Developer : public Employee {
//public:
//	void work() override {
//		cout << "Developer is working!!!" << endl;
//	}
//};
//
//int main() {
//	Employee* E1 = new Manager;
//	Employee* E2 = new Developer;
//	E1->work();
//	E2->work();
//	delete E1;
//	delete E2;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class Car {
//public:
//	string medel;
//	string brand;
//	int year;
//	Car(string b, string m, int y) : brand(b), medel(m), year(y) {}
//	friend void  fff(Car& c);
//};
//
//void  fff(Car& c) {
//	cout << c.brand;
//	cout << c.medel;
//	cout << c.year;
//}
//
//int main() {
//	Car cc1("benz", "cls", 1952);
//	fff(cc1);
//} 

//12



//#include <iostream>
//using namespace std;
//
//
//class BankAccount {
//private:
//	static int count;
//public:
//	BankAccount() {
//		count++;
//	}
//	static int getCount() {
//		return count;
//	}
//};
//
//int BankAccount::count = 0;
//
//int main() {
//	BankAccount b1, b2, b3;
//	cout << BankAccount::getCount();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Member {
//public:
//	void member() { cout << "this is a member" << endl; }
//};
//class Book {
//public:
//	void book() {
//		cout << "this is a book" << endl;
//	}
//};
//class Library {
//private:
//	Member m1;
//	Book b1;
//public:
//	void lib() {
//		m1.member();
//		b1.book();
//	}
//};
//int main() {
//	Library library;
//	library.lib();
//	return 0;
//}














//T1





//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class SortedList {
//private:
//    double List[1000];
//    int n;
//public:
//    SortedList() {
//        n = 0;
//    }
//
//    ~SortedList() {
//        for (int i = 0; i < n; i++) {
//            cout << List[i] << " ";
//        }
//        cout << endl;
//    }
//
//    void insert(double x) {
//        int i = lower_bound(List, List + n, x) - List;
//        for (int j = n; j > i; j--) {
//            List[j] = List[j - 1];
//        }
//        List[i] = x;
//        n++;
//    }
//
//    int search(double x) {
//        int idx = lower_bound(List, List + n, x) - List;
//        if (idx < n && List[idx] == x) {
//            return idx;
//        }
//        return -1;
//    }
//
//    friend ostream& operator << (ostream& out, const SortedList& s1) {
//        for (int i = 0; i < s1.n; i++) {
//            out << s1.List[i] << " ";
//        }
//        return out;
//    }
//
//    bool operator == (const SortedList& other) {
//        if (n != other.n) return false;
//        for (int i = 0; i < n; i++) {
//            if (List[i] != other.List[i]) return false;
//        }
//        return true;
//    }
//
//    SortedList operator + (const SortedList& other) {
//        SortedList result;
//        merge(List, List + n, other.List, other.List + other.n, result.List);
//        result.n = n + other.n;
//        return result;
//    }
//};
//
//int main() {
//    SortedList L1, L2;
//    L1.insert(2.3);
//    L1.insert(1.2);
//    L1.insert(3.5);
//    L2.insert(1.7);
//    L2.insert(5.6);
//
//    cout << L1 << " - " << L2 << " - " << L1.search(1.7) << " - " << L2.search(1.7) << endl;
//
//    if (L1 == L2) cout << "Equal" << endl;
//    else cout << "Not Equal" << endl;
//
//    L2 = L1 + L2;
//    cout << L2 << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class HugeInt {
//private:
//    int number[50];  // برای ذخیره ارقام عدد
//    static const short int MaxDigits = 50; // حداکثر تعداد ارقام
//
//public:
//    // سازنده
//    HugeInt(const char* str = "") {
//        for (int i = 0; i < MaxDigits; i++) {
//            number[i] = 0; // در ابتدا همه ارقام صفر می‌شوند
//        }
//
//        int len = strlen(str);
//        for (int i = 0; i < len; i++) {
//            number[MaxDigits - len + i] = str[i] - '0';  // تبدیل هر کاراکتر به عدد
//        }
//    }
//
//    // تابع برای به دست آوردن تعداد ارقام
//    int Digit() const {
//        int count = 0;
//        for (int i = 0; i < MaxDigits; i++) {
//            if (number[i] != 0) {
//                count = MaxDigits - i;
//                break;
//            }
//        }
//        return count;
//    }
//
//    // اپراتور <<
//    friend ostream& operator<<(ostream& os, const HugeInt& num) {
//        bool leadingZero = true;
//        for (int i = 0; i < MaxDigits; i++) {
//            if (num.number[i] != 0) {
//                leadingZero = false;
//                os << num.number[i];
//            }
//            else if (!leadingZero) {
//                os << num.number[i];
//            }
//        }
//        return os;
//    }
//
//    // اپراتور ++ پسوندی
//    HugeInt operator++(int) {
//        HugeInt temp = *this;
//        int carry = 1;
//        for (int i = MaxDigits - 1; i >= 0; i--) {
//            number[i] += carry;
//            if (number[i] >= 10) {
//                number[i] -= 10;
//                carry = 1;
//            }
//            else {
//                carry = 0;
//                break;
//            }
//        }
//        return temp;
//    }
//
//    // اپراتور +
//    HugeInt operator+(const HugeInt& other) const {
//        HugeInt result;
//        int carry = 0;
//        for (int i = MaxDigits - 1; i >= 0; i--) {
//            result.number[i] = number[i] + other.number[i] + carry;
//            if (result.number[i] >= 10) {
//                result.number[i] -= 10;
//                carry = 1;
//            }
//            else {
//                carry = 0;
//            }
//        }
//        return result;
//    }
//
//    // مخرب
//    ~HugeInt() {
//        cout << "number is destructed!" << endl;
//    }
//
//    // تابع استاتیک برای حداکثر تعداد ارقام
//    static int MaxDigitsFunc() {
//        return MaxDigits;
//    }
//};
//
//int main() {
//    HugeInt num1("456360000"), num2("999999999"), num3;
//    num3 = num1 + num2;
//    cout << num1 << " - " << num2++ << " - " << num3 << endl;
//}





























//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    int balance;
//    int accountNumber;
//public:
//    BankAccount(int b, int a) {
//        balance = b;
//        accountNumber = a;
//    }
//    friend bool transferMoney(BankAccount acconce, BankAccount acctwo, double amount);
//};
//
//bool transferMoney(BankAccount acconce , BankAccount acctwo , double amount) {
//    if (amount < 0) {
//        cout << "er" << endl;
//        return false;
//    }
//    else if (acconce.balance < amount) {
//        cout << "er" << endl;
//        return false;
//    }
//    cout << acconce.balance << endl;
//    cout << acctwo.balance << endl;
//    cout << "done" << endl;
//    acconce.balance -= amount;
//    acctwo.balance += amount;
//    cout << acconce.balance << endl;
//    cout << acctwo.balance << endl;
//    return true;
//}
//
//int main() {
//    BankAccount acc1(10000, 1);
//    BankAccount acc2(3000, 2);
//    
//    transferMoney(acc1, acc2, 5000);
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//class BankAccount{
//private:
//	int balance;
//	int numberacc;
//public:
//	BankAccount(int b, int n) {
//		balance = b;
//		numberacc = n;
//	}
//	~BankAccount() {
//		cout << "acc delete" << endl;
//	}
//	bool operator == (const BankAccount& acc) const{
//		return numberacc == acc.numberacc;
//	}
//	BankAccount operator+(const BankAccount& acc) const {
//		return BankAccount(balance + acc.balance, numberacc);
//	}
//	void display() const {
//		cout << "Account Number: " << numberacc << ", Balance: " << balance << endl;
//	}
//};
//
//
//int main() {
//	BankAccount acc1(1000, 123456);
//	BankAccount acc2(500, 123456);
//	BankAccount acc3(2000, 789012);
//	cout << "Comparing acc1 and acc2 (same account number): " << (acc1 == acc2 ? "Equal" : "Not Equal") << endl;
//	cout << "Comparing acc1 and acc3 (different account number): " << (acc1 == acc3 ? "Equal" : "Not Equal") << endl;
//	return 0;
//}


#include <iostream>
using namespace std;



int main() {




	return 0;
}