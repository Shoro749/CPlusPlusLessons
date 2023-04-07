#include "../presentation/screens/screens.h"
#include "../domain/models/book_library/book_library.h"

int BookLibrary::Menu() {
	int select, year;
	string title, author;
	bool isAvailable;

	cout << "1) Add book\n" << "2) Remove book\n" << "3) Set Availability\n" <<
		"4) Display Available Books\n" << "5) Search book\n" << "6) Exit\n" << endl;
	cin >> select;

	if (select == 6) {
		return -1;
	}

	if (select == 1) {
		cout << "Enter title: ";
		cin >> title;
		cout << "Enter author: ";
		cin >> author;
		cout << "Enter year: ";
		cin >> year;
		cout << "Enter isAvailable: ";
		cin >> isAvailable;

		Book::Book(title, author, year, isAvailable);
	}

	if (select == 2) {
		cout << "Enter title: ";
		cin >> title;
		BookLibrary::removeBook(title);
	}

	if (select == 3) {
		cout << "Enter title: ";
		cin >> title;
		BookLibrary::setAvailability(title);
	}

	if (select == 4) {
		cout << "Enter title: ";
		cin >> title;
		BookLibrary::setAvailability(title);
	}

	if (select == 5) {
		cout << "Enter title: ";
		cin >> title;
		BookLibrary::searchBook(title);
	}

	return Menu();
}

int main() {
	Screens::Home();

	return 0;
}