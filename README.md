xlUnitTest
==========

xlUnitTest is a unittest framework, which is very simple to use.
If you don't need so many feature, and be tied with other heavy frameworks, try it.

Sample Code

``` C++

// This is a test case with a name.
XL_NAMED_TEST_CASE(TestCaseWithName)
{
	// Inside a case, you can write test asserts.
	// Just as you guessed, XL_TEST_ASSERT is implemented exactly by CRT assert.
	XL_TEST_ASSERT(1 + 1 == 2);
}

// Also, you could write test cases in anynoumas form.
XL_TEST_CASE()
{
	XL_TEST_ASSERT(1 + 1 == 2);
}


// At last, we need the main function.
// Test cases run before main.
// Do NOT use xlUnitTest to test something related with global variable initializtion.
// Only use xlUnitTest to do UNIT test.
int main()
{
	return 0;
}

```
