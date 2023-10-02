/**
Name: date.hpp
Description: A simple date class
Author: Pranav Hundekari
*/

#pragma once

#include <iomanip>
#include <ostream>
#include <string>
namespace pranavh {
class date {
  int y, m, d;
  bool checkDate(int, int, int) const;
  int date_ymd_in() const;
  void addDay();
  void subDay();

public:
  date();
  date(int);
  date(const date &);
  date(int, int);
  date(int, int, int);

  date &operator=(const date &);
  date operator+(int);
  date operator-(int);
  date &operator++();
  date &operator--();
  bool operator!=(const date &) const;
  bool operator==(const date &) const;
  bool operator>(const date &) const;
  bool operator<(const date &) const;
  bool operator<=(const date &) const;
  bool operator>=(const date &) const;

  int year() const { return y; }
  int month() const { return m; }
  int day() const { return d; }

  friend std::ostream &operator<<(std::ostream &, const date &);
};
} // namespace pranavh
