#include "../screens.h"

void Screens::Home()
{
	ukr_lang;
	int booksCount = 10;
	Book * book = new Book[booksCount];
	book[0] = Book("����� 1", "����� 1", 2000, true);
	book[1] = Book("����� 2", "����� 2", 2001, true);
	book[2] = Book("����� 3", "����� 3", 2002, true);
	book[3] = Book("����� 4", "����� 4", 2003, false);
	book[4] = Book("", "����� 5", 2004, true);
	book[5] = Book("����� 6", "����� 6", 2005, false);
	book[6] = Book("����� 7", "", 2006, true);
	book[7] = Book("����� 8", "����� 8", 2007, false);
	book[8] = Book("", "����� 9", 2008, true);
	book[9] = Book("����� 10", "����� 10", 2009, false);


	LibraryProvider libraryProvider;
	libraryProvider.SetBookLibrary(book, booksCount);
	libraryProvider.showLibrary();
}
