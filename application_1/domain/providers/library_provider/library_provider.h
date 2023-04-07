#include "../../models/book_library/book_library.h"
#include "../../../presentation/dialogs/console_dilogs.h"


class LibraryProvider
{
private:
	BookLibrary* bookLibrary;
public:
	void SetBookLibrary(Book* book, int size)
	{
		bookLibrary = new BookLibrary(book, size, 10);
	}
	void showLibrary()
	{
		Book * books = bookLibrary->getBooks();
		for (size_t i = 0; i < bookLibrary->getBooksCount(); i++)
		{
			println("����� �" << i + 1);
			println("�����: " << books[i].getTitle());
	        println("�����: " << books[i].getAuthor());
			println("г�: " << books[i].getYear());
			print("����������: ");
			if (books[i].getIsAvailable()) {
				Dialogs::access_message("��������");
			}
			else
			{
				Dialogs::error_message("����������");
			}
			next_line;
			next_line;
		}
	}
	~LibraryProvider()
	{
		delete bookLibrary;
	}
};