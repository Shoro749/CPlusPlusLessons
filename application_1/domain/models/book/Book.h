#include "../../../internal/library.h"

class Book
{
private:
	string title;
	string author;
	int year;
	bool isAvailable;
public:
	//setters
	void setTitle(string title);
	void setAuthor(string author);
	void setYear(int year);
	void setIsAvailable(bool isAvailable);
	//getters
	string getTitle();
	string getAuthor();
	int getYear();
	bool getIsAvailable();
	//constructors
	Book();
	Book(string title);
	Book(string title, string author);
	Book(string title, string author, int year);
	Book(string title, string author, int year, bool isAvailable);

	Book(const Book& book);
	//destructor
	~Book();
};
