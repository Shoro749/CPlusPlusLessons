#include "../screens.h"

void Screens::Home()
{
	ukr_lang;
	int booksCount = 10;
	Book * book = new Book[booksCount];
	book[0] = Book("Книга 1", "Автор 1", 2000, true);
	book[1] = Book("Книга 2", "Автор 2", 2001, true);
	book[2] = Book("Книга 3", "Автор 3", 2002, true);
	book[3] = Book("Книга 4", "Автор 4", 2003, false);
	book[4] = Book("", "Автор 5", 2004, true);
	book[5] = Book("Книга 6", "Автор 6", 2005, false);
	book[6] = Book("Книга 7", "", 2006, true);
	book[7] = Book("Книга 8", "Автор 8", 2007, false);
	book[8] = Book("", "Автор 9", 2008, true);
	book[9] = Book("Книга 10", "Автор 10", 2009, false);


	LibraryProvider libraryProvider;
	libraryProvider.SetBookLibrary(book, booksCount);
	libraryProvider.showLibrary();
}
