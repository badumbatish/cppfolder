## HOW TO USE THE TESTING SYSTEM
Add your tests to the test_folder with the following format inside a .cpp file
See test1.cpp inside the test_folder for more details
```C++
TEST_CASE("test_case_name", "[situation]") {
	REQUIRE(expression);
	//Or CHECK(expression);
}
```
Then from the cpp_folder/testing, run
```
make
make run
```

for validation from the test cases