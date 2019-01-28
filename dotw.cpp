/*
Brandon Reed Gotcher
Programming 1
February 1 2019
Day of the week
This program asks the user for a date and responds with the corresponding day of the week
*/

#include <iostream>
using namespace std;

int main() {
  int month, day, year, t, te, dotw;
  cout << "Enter a date: MM DD YYYY" << endl;
  cin >> month >> day >> year;

  //get number from the table provided in instructions
  switch (month) {
    case 1:
      te = 1;
      break;
    case 2:
      te = 4;
      break;
    case 3:
      te = 4;
      break;
    case 4:
      te = 0;
      break;
    case 5:
      te = 2;
      break;
    case 6:
      te = 5;
      break;
    case 7:
      te = 0;
      break;
    case 8:
      te = 3;
      break;
    case 9:
      te = 6;
      break;
    case 10:
      te = 1;
      break;
    case 11:
      te = 4;
      break;
    case 12:
      te = 6;
      break;

  }//end month switch statement

  t = te + day + year + 6;
  t = t + year / 4 - year / 100 + year / 400;

  //account for leap years
  if ((year % 400 == 0) && (month <= 2)) t = t - 1;
  else if (year % 100 == 0) {}
  else if ((year % 4 == 0) && (month <= 2)) t = t - 1;


  dotw = t % 7;
  //translate dotw from number to name of day
  switch (dotw) {
    case 1:
      cout << "Sunday";
      break;
    case 2:
      cout << "Monday";
      break;
    case 3:
      cout << "Tuesday";
      break;
    case 4:
      cout << "Wednesday";
      break;
    case 5:
      cout << "Thursday";
      break;
    case 6:
      cout << "Friday";
      break;
    case 7:
      cout << "Saturday";
      break;
  }//end dotw switch statement

}//end main method
