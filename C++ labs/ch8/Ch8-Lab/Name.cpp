/*
Author: Rishit Patel
Date: May 8, 2019
Description: Chapter 8 lab
*/
class Name
{
   private:
      string first;
      string middle;
      string last;
  public:
      Name(string, string, string);
      void displayFullName();
};
Name::Name(string first, string middle, string last)
{
   this->first = first;
   this->middle = middle;
   this->last = last;
}
void Name::displayFullName()
{
   cout << first << " " << middle <<
      " " << last << endl;
}