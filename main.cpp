#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol246;

/*
 Input:  "69"
 Output: true
*/

tuple<string, bool>
testFixture1()
{
  return make_tuple(string("69"), true);
}

/*
 Input:  "88"
 Output: true
*/

tuple<string, bool>
testFixture2()
{
  return make_tuple(string("88"), true);
}

/*
 Input:  "962"
 Output: false
*/
tuple<string, bool>
testFixture3()
{
  return make_tuple(string("962"), false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - exepct to see " << get<1>(f) << endl;
  auto result = Solution::isValid(get<0>(f));
  cout << "result: " << result << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}