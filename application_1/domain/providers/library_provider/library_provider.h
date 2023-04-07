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
			println("Книга №" << i + 1);
			println("Назва: " << books[i].getTitle());
	        println("Автор: " << books[i].getAuthor());
			println("Рік: " << books[i].getYear());
			print("Доступність: ");
			if (books[i].getIsAvailable()) {
				Dialogs::access_message("Доступна");
			}
			else
			{
				Dialogs::error_message("Недоступна");
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