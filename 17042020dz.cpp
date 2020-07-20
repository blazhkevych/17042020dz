/*
Модуль 8. Рядки
Домашня робота №1
Дана рядок символів.Замінити всі пропуски на табуляції.
#include <iostream>
#include <Windows.h>
#include <algorithm>
using namespace std;
//Дано рядок символів. Замінити всі пропуски на табуляції.
void main() {
	string str("456 dfh vbnvbn ");
	cout << str << endl;
	replace(str.begin(), str.end(), ' ', '\t');
	cout << str << endl;
}

Дана рядок символів.Визначити кількість букв, цифр і інших символів, присутніх в рядку.
#include <iostream>
#include <Windows.h>
#include <algorithm>
using namespace std;
void main() {
	string str("456 dfh vbnvbn.$#");
	cout << str << endl;
	int
		a = count_if(str.begin(), str.end(), isdigit),
		b = count_if(str.begin(), str.end(), isalpha),
		c = count_if(str.begin(), str.end(), [](char c) { return !(isalpha(c) || isdigit(c)); });
	cout << "\nnumber of digits = " << a << "\nnumber of letters = " << b << "\nnumber of other characters = " << c << endl;
}

Дана рядок символів.Необхідно перевірити чи є цей рядок паліндромом.
#include <iostream>
#include <Windows.h>
using namespace std;
void Funct(string& str)
{
	string buf = str;
	reverse(buf.begin(), buf.end());
	cout << (str == buf ? "true" : "false") << endl;
}
void main() {
	string str("45654");
	cout << str << endl;
	Funct(str);
}


Користувач вводить рядок, символ для пошуку і символ для заміни.Програма замінює все входження символу пошуку на символ заміни.
#include <iostream>
#include <Windows.h>
using namespace std;
void main() {
	cout << "Enter string: ";
	string Text;
	cin >> Text;
	cout << "Enter symbol for search: ";
	string ToReplace;
	cin >> ToReplace;
	cout << "Enter symbol to replace: ";
	string ReplaceWith;
	cin >> ReplaceWith;
	cout << "Original string: \t" << Text << endl;
	Text.replace(Text.find(ToReplace), ToReplace.length(), ReplaceWith);
	cout << "After replacing: \t" << Text << endl << endl;
	system("pause");
}

Написати функцію, яка приймає рядок символів і перевіряє чи правильно розставлені дужки «(» та «)»в ній.
#include <iostream>
#include <Windows.h>
using namespace std;
void Function(string& str)
{
	int n = 0;
	for (auto a : str) {
		if (a == '(') ++n;
		else if (a == ')') --n;
		if (n < 0) break;
	}
	cout << (n ? "fail" : "true") << endl;
}
void main() {
	string str("(456 dfh vbnvbn.$#)");
	cout << str << endl;
	Function(str);
	string str2("(456 dfh vbnvbn.$#");
	cout << str2 << endl;
	Function(str2);
}
*/

