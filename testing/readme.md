## HOW TO USE THE TESTING SYSTEM
Add your tests to the test_folder with the following format inside a .cpp file

```C++
TEST_CASE("test_case_name", "[situation]") {
	REQUIRE(expression);
	//Or CHECK(expression);
}
```
See test1.cpp inside the test_folder for more details