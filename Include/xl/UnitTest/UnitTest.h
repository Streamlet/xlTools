//------------------------------------------------------------------------------
//
//    Copyright (C) Streamlet. All rights reserved.
//
//    File Name:   UnitTest.h
//    Author:      Streamlet
//    Create Time: 2010-08-08
//    Description: 
//
//------------------------------------------------------------------------------

#ifndef __UNITTEST_H_D6074214_D6DB_4590_9EF3_B25B76DB713D_INCLUDED__
#define __UNITTEST_H_D6074214_D6DB_4590_9EF3_B25B76DB713D_INCLUDED__


#include <assert.h>

#define XL_TEST_CONN_(s, t)  s##t
#define XL_TEST_CONN(s, t)   XL_TEST_CONN_(s, t)

#define XL_TEST_CLASS_NAME(name)            XL_TEST_CONN(xlTestCase_, name)
#define XL_TEST_CLASS_INSTANCE_NAME(name)   XL_TEST_CONN(xlTestCaseInstance_, name)

#define XL_NAMED_TEST_CASE(name)                            \
                                                            \
namespace _xl                                               \
{                                                           \
    class XL_TEST_CLASS_NAME(name)                          \
    {                                                       \
    public:                                                 \
        XL_TEST_CLASS_NAME(name)();                         \
                                                            \
    } XL_TEST_CLASS_INSTANCE_NAME(name);                    \
}                                                           \
_xl::XL_TEST_CLASS_NAME(name)::XL_TEST_CLASS_NAME(name)()

#define XL_TEST_CASE()  XL_NAMED_TEST_CASE(__LINE__)

#define XL_TEST_ASSERT(expr)    assert(expr)


#endif // #ifndef __UNITTEST_H_D6074214_D6DB_4590_9EF3_B25B76DB713D_INCLUDED__
