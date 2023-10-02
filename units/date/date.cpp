/**
Name: date.cpp
Description: A simple date class
Author: Pranav Hundekari
*/

#include "date.hpp"

using namespace pranavh;

date::date() : y(1900), m(1), d(1) {}

date::date(int year) : y(year), m(12), d(31) {
  if (!checkDate(year, 12, 31))
    throw "Wrong Date";
}

date::date(const date &dt) : y(dt.y), m(dt.m), d(dt.d) {}

date::date(int year, int month) : y(year), m(month), d(1) {
  if (!checkDate(year, month, 1))
    throw "Wrong Date";
}

date::date(int year, int month, int day) : y(year), m(month), d(day) {
  if (!checkDate(year, month, day))
    throw "Wrong Date";
}

date &date::operator=(const date &dt) {
  y = dt.y;
  m = dt.m;
  d = dt.d;
  return *this;
}

date date::operator+(int n) {
  date tmp = *this;
  void (date::*incrFunc)();
  if (n > 0)
    incrFunc = &date::addDay;
  else
    incrFunc = &date::subDay;
  n = abs(n);
  while (n--)
    (tmp.*incrFunc)();
  return tmp;
}

date date::operator-(int n) { return (*this) + (-n); }

date &date::operator++() {
  addDay();
  return *this;
}

date &date::operator--() {
  subDay();
  return *this;
}

bool date::operator!=(const date &dt) const { return !(*this == dt); }

bool date::operator==(const date &dt) const {
  return (date_ymd_in() == dt.date_ymd_in());
}

bool date::operator>(const date &dt) const {
  return (date_ymd_in() > dt.date_ymd_in());
}

bool date::operator<(const date &dt) const { return (dt > *this); }

bool date::operator<=(const date &dt) const { return !(*this > dt); }

bool date::operator>=(const date &dt) const { return !(*this < dt); }

void date::addDay() {
  int d1 = d, m1 = m, y1 = y;
  d1++;
  if (!checkDate(y1, m1, d1)) {
    d1 = 1;
    m1++;
    if (!checkDate(y1, m1, d1)) {
      m1 = 1;
      y1++;
      if (!checkDate(y1, m1, d1))
        throw "upper limit reached";
    }
  }
  y = y1;
  m = m1;
  d = d1;
}

void date::subDay() {
  int d1 = d, m1 = m, y1 = y;
  d1--;
  if (!checkDate(y1, m1, d1)) {
    d1 = 31;
    m1--;
    if (!checkDate(y1, m1, d1)) {
      d1 = 30;
      if (!checkDate(y1, m1, d1)) {
        d1 = 29;
        if (!checkDate(y1, m1, d1)) {
          d1 = 28;
          if (!checkDate(y1, m1, d1)) {
            d1 = 31;
            m1 = 12;
            y1--;
            if (!checkDate(y1, m1, d1))
              throw "lower limit reached";
          }
        }
      }
    }
  }
  y = y1;
  m = m1;
  d = d1;
}

bool date::checkDate(int year, int month, int day) const {
  if (year >= 1900 && year <= 9999) {
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      if (day < 1 || day > 31)
        return false;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      if (day < 0 || day > 30)
        return false;
      break;
    case 2:
      if (year % 4 != 0) {
        if (day < 1 || day > 28)
          return false;
      } else {
        if ((year % 100 == 0) && (year % 400 != 0))
          if (day < 1 || day > 28)
            return false;

        if (day < 1 || day > 29)
          return false;
      }
      break;
    default:
      return false;
    }
  } else {
    return false;
  }
  return true;
}

int date::date_ymd_in() const { return (y * 10000 + m * 100 + d); }

namespace pranavh {
std::ostream &operator<<(std::ostream &dt_ss, const date &dt) {
  dt_ss << std::setfill('0') << std::setw(4) << dt.y << '-';
  dt_ss << std::setfill('0') << std::setw(2) << dt.m << '-';
  dt_ss << std::setfill('0') << std::setw(2) << dt.d;
  return dt_ss;
}
} // namespace pranavh
