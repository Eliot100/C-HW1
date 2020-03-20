
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>
using namespace std;

TEST_CASE("famous quotes") {
    string text1 = "The order of the phoenix";
	string parmotaitionOf_The[5] = { "the", "THE", "thE", "dhe", "Dhe"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text1, parmotaitionOf_The[i]) == string("The"));
	
	string parmotaitionOf_order[5] = { "order", "Order", "urder", "orter", "urtER"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text1, parmotaitionOf_order[i]) == string("order"));
    
	string parmotaitionOf_of[10] = { "of", "OF", "uF", "Ub", "UB", "ob", "OB", "op", "OP", "up"};
	for (int i = 0; i < 10; i++)
		CHECK(find(text1, parmotaitionOf_order[i]) == string("order"));
    
	string parmotaitionOf_phoenix[5] = { "phoenix", "PhoenYx", "Fhuenix", "bHOENIX", "bhuenyx"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text1, parmotaitionOf_phoenix[i]) == string("phoenix"));
    
	string text2 = "To be or not to be";
	string parmotaitionOf_To[10] = { "To", "TO", "Tu","TU", "to", "tO", "tu","tU", "Do","dO"};
	for (int i = 0; i < 10; i++)
		CHECK(find(text2, parmotaitionOf_To[i]) == string("To"));
    
	string parmotaitionOf_be[5] = { "be", "BE", "Fe", "fe", "PE"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text2, parmotaitionOf_be[i]) == string("be"));
    
	string parmotaitionOf_or[5] = { "or", "OR", "ur", "Ur", "uR"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text2, parmotaitionOf_or[i]) == string("or"));
    
	string parmotaitionOf_not[5] = { "or", "OR", "ur", "Ur", "uR"};
	for (int i = 0; i < 5; i++)
		CHECK(find(text2, parmotaitionOf_or[i]) == string("or"));
    
}
