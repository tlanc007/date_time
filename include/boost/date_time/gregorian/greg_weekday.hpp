#ifndef GREG_WEEKDAY_HPP___
#define GREG_WEEKDAY_HPP___

/* Copyright (c) 2002,2003 CrystalClear Software, Inc.
 * Use, modification and distribution is subject to the 
 * Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
 * Author: Jeff Garland, Bart Garst
 * $Date$
 */


#include <boost/date_time/constrained_value.hpp>
#include <boost/date_time/date_defs.hpp>
#include <boost/date_time/compiler_config.hpp>
#include "boost/date_time/gregorian/greg_weekday.hpp"
#include "greg_names.hpp"
#include "greg_names_17.hpp"

#include <stdexcept>
#include <string>

namespace boost {
namespace gregorian {

  //bring enum values into the namespace
  using date_time::Sunday;
  using date_time::Monday;
  using date_time::Tuesday;
  using date_time::Wednesday;
  using date_time::Thursday;
  using date_time::Friday;
  using date_time::Saturday;
    
  //! Exception that flags that a weekday number is incorrect
  struct BOOST_SYMBOL_VISIBLE bad_weekday : public std::out_of_range
  {
    bad_weekday() : std::out_of_range(std::string("Weekday is out of range 0..6")) {}
  };
  typedef CV::simple_exception_policy<unsigned short, 0, 6, bad_weekday> greg_weekday_policies;
  typedef CV::constrained_value<greg_weekday_policies> greg_weekday_rep;


  //! Represent a day within a week (range 0==Sun to 6==Sat)
  class BOOST_DATE_TIME_DECL greg_weekday : public greg_weekday_rep {
  public:
    typedef boost::date_time::weekdays weekday_enum;
    greg_weekday(unsigned short day_of_week_num) :
      greg_weekday_rep(day_of_week_num)
    {}

    unsigned short as_number() const {return value_;}
      
#ifdef BOOST_NO_CXX17_INLINE_VARIABLES
      //! Return a 3 digit english string of the day of week (eg: Sun)
      const char* as_short_string() const {
          return greg_names::short_weekday_names[value_];
      }
      //! Return a point to a long english string representing day of week
      const char* as_long_string()  const {
          return greg_names::long_weekday_names[value_];
      }
#  ifndef BOOST_NO_STD_WSTRING
      //! Return a 3 digit english wchar_t string of the day of week (eg: Sun)
      const wchar_t* as_short_wstring() const {
          return greg_names::w_short_weekday_names[value_];
      }
      //! Return a point to a long english wchar_t string representing day of week
      const wchar_t* as_long_wstring()  const {
          return greg_names::w_long_weekday_names[value_];
      }
#  endif // BOOST_NO_STD_WSTRING
#else
      const char* as_short_string() const {
          return short_weekday_names[value_].data();
      }
      const char* as_long_string()  const {
          return long_weekday_names[value_].data();
      }
#  ifndef BOOST_NO_STD_WSTRING
      const wchar_t* as_short_wstring() const {
          return w_short_weekday_names[value_].data();
      }
      const wchar_t* as_long_wstring()  const {
          return w_long_weekday_names[value_].data();
      }
#  endif // BOOST_NO_STD_WSTRING
#endif // BOOST_NO_CXX17_INLINE_VARIABLES
    weekday_enum as_enum() const {return static_cast<weekday_enum>(value_);}


  };



} } //namespace gregorian



#endif
