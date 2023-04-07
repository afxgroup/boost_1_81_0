//  (C) Copyright John Maddock 2002. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

#define BOOST_PLATFORM "AmigaOS"

#undef __GLIBC__

// make sure we have __GLIBC_PREREQ if available at all
#ifdef __cplusplus
#include <cstdlib>
#else
#include <stdlib.h>
#endif

#define BOOST_HAS_STDINT_H
#define BOOST_HAS_GETTIMEOFDAY
#define BOOST_ASIO_DISABLE_LOCAL_SOCKETS
#define BOOST_ASIO_DISABLE_EVENTFD

// boilerplate code:
#define BOOST_HAS_UNISTD_H
#include <boost/config/detail/posix_features.hpp>
