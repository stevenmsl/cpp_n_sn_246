#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm>
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>
using namespace sol246;
using namespace std;

/*takeaways
  - given a number 916
    - after you flipped each digit, the number becomes 619
    - after you reversed the number it becomes 619
  - so we can check if the counterpart of each digit
    when reversing a string is the flipped digit of
    each other
    - 916
      - the counterpart of digit 9 when you are reversing the number
        is 6
      - we flip 9 upside down and it turns into 6 which is a match
*/

bool Solution::isValid(string N)
{
  /* digits that can be flipped upside down and is
     still a valid digit
  */
  auto map = unordered_map<char, char>{
      {'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};

  const int size = N.size();

  for (auto i = 0; i < size / 2; i++)
  {
    auto f = N[i], r = N[size - i - 1];
    /* can't produce a valid digit after you flipped it upside down */
    if (map.count(f) == 0 || map.count(r) == 0)
      return false;
    /* flip it but the result is not the same as your counterpart when
       reversing a string
    */
    if (map[f] != r)
      return false;
  }

  return true;
}