#include <iostream>
using namespace std;

int main()

{
	int x = 0, y = 0;
	char ch;

	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	while (cin >> ch) {
		switch (ch) 
		case'a':case'i':case 'e': case'o':case 'u':
			x++;
			break;
		case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':case'L':case'M':case'N':case'O':
		case'P':case'Q':case'R':case'S':case'T':case'U':case'V':case'W':case'X':case'Y':case'Z':
			cout << "Check to a alphabet" << endl;
			break;

		default:
			y++;
			break;
		}
	}
	cout << "모음: " << x << endl;
	cout << "자음: " << y << endl;

	return 0;
}