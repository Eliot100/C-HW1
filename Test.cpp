
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>
using namespace std;

TEST_CASE("first case") {
    string text = "The order of the Phoenix";
    CHECK(find(text, "Order") == string("order"));
    CHECK(find(text, "urder") == string("order"));
    CHECK(find(text, "orter") == string("order"));
    CHECK(find(text, "urtER") == string("order"));
}
