#include "Book.h"

void Book::setTitle(string title){
	if (title.empty())
	{
		this->title = "NULL";
	}
	else
	{
		this->title = title;
	}
	
}
void Book::setAuthor(string author){
	if (author.empty())
	{
		this->author = "NULL";
	}
	else
	{
		this->author = author;
	}
	
}
void Book::setYear(int year){
	this->year = year;
}
void Book::setIsAvailable(bool isAvailable) {
	this->isAvailable = isAvailable;
}


string Book::getTitle() {
	return this->title;
}
string Book::getAuthor(){
	return this->author;
}
int Book::getYear(){
	return this->year;
}
bool Book::getIsAvailable(){
	return this->isAvailable;
}

Book::Book() 
{
	setIsAvailable(true);
	setTitle("");
	setAuthor("");
	setYear(0);
	
}
Book::Book(string title) : Book()
{
	setTitle(title);
}
Book::Book(string title, string author) :Book(title)
{
	setAuthor(author);
}
Book::Book(string title, string author, int year) :Book(title, author)
{
	setYear(year);
}
Book::Book(string title, string author, int year, bool isAvailable) :Book(title, author, year)
{
	setIsAvailable(isAvailable);
	if (title.empty())
	{
		this->setIsAvailable(false);
	}
}
Book::Book(const Book& book) {
	setTitle(book.title);
	setAuthor(book.author);
	setYear(book.year);
	setIsAvailable(book.isAvailable);
}
Book::~Book() {
	this->title.clear();
	this->author.clear();
}