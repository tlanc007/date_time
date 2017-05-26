/* Copyright (c) 2002-2004 CrystalClear Software, Inc.
 * Use, modification and distribution is subject to the 
 * Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
 * Author: Jeff Garland, Bart Garst
 * $Date$
 */


// For C++17 support

#ifndef DATE_TIME_SRC_GREG_NAMES_17_HPP___
#define DATE_TIME_SRC_GREG_NAMES_17_HPP___

// Todo: temp hack, need to remove
#if 0  // ifndef BOOST_NO_CXX17_CONST_INLINE
#include <array>
#include <string_view>

#include "boost/date_time/special_defs.hpp"
namespace boost {
namespace gregorian {
    
    static constexpr inline std::string_view short_month_names[date_time::NumMonths] {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec", "NAM"};
    static constexpr std::string_view  long_month_names[date_time::NumMonths]={"January","February","March","April","May","June","July","August","September","October","November","December","NotAMonth"};
    static constexpr inline std::string_view special_value_names[date_time::NumSpecialValues]={"not-a-date-time","-infinity","+infinity","min_date_time","max_date_time","not_special"};


    static constexpr inline std::string_view short_weekday_names[]={"Sun", "Mon", "Tue",
                                           "Wed", "Thu", "Fri", "Sat"};
    static constexpr inline std::string_view long_weekday_names[]= {"Sunday","Monday","Tuesday",
                                           "Wednesday", "Thursday",
                                           "Friday", "Saturday"};


#ifndef BOOST_NO_STD_WSTRING
    static constexpr inline std::wstring_view w_short_month_names[date_time::NumMonths]={L"Jan",L"Feb",L"Mar",L"Apr",L"May",L"Jun",L"Jul",L"Aug",L"Sep",L"Oct",L"Nov",L"Dec",L"NAM"};
    static constexpr inline std::wstring_view w_long_month_names[date_time::NumMonths]={L"January",L"February",L"March",L"April",L"May",L"June",L"July",L"August",L"September",L"October",L"November",L"December",L"NotAMonth"};
    static constexpr inline std::wstring_view w_special_value_names[date_time::NumSpecialValues]={L"not-a-date-time",L"-infinity",L"+infinity",L"min_date_time",L"max_date_time",L"not_special"};

    static constexpr inline std::wstring_view w_short_weekday_names[]={L"Sun", L"Mon", L"Tue",
                                           L"Wed", L"Thu", L"Fri", L"Sat"};
    static constexpr inline std::wstring_view w_long_weekday_names[]= {L"Sunday",L"Monday",L"Tuesday",
                                           L"Wednesday", L"Thursday",
                                           L"Friday", L"Saturday"};
#endif // BOOST_NO_STD_WSTRING
    
} } // boost::gregorian

#endif // BOOST_NO_CXX17_CONST_INLINE
#endif // DATE_TIME_SRC_GREG_NAMES_17_HPP___
