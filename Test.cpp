
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>

/*
Letters that can be switchd:
	v, w
	b, f, p
	g, j
	c, k, q
	s, z
	d, t
	o, u
	i, y
	
And all letter can be capital and small.
*/

TEST_CASE("famous quotes") {
	string text0 = "Very good famous quotes"; 
	string parmotaitionOf_Very[5] = { "Wery","wERI","Veri","veri","veRY"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text0, parmotaitionOf_Very[i]) == string("Very"));
    
	string parmotaitionOf_good[5] = { "Gout","gOUT","JooD","juud","gOOd"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text0, parmotaitionOf_good[i]) == string("good"));
    
	string parmotaitionOf_famous[6] = { "bamuus","BamooS","FAMOUs","famouz",	
										"PamuuZ","pamuoz"};
	for (int i = 0; i < 6; i++)
		CHECK(phonetic::find(text0, parmotaitionOf_famous[i]) == string("famous"));
    
	string parmotaitionOf_quotes[10] = { "qootes","COODEZ","kuuTeS","CUotez","cuotez",
										 "Koodes","Quotez","cuotes","qoutes","quotes"};
	for (int i = 0; i < 10; i++)
		CHECK(phonetic::find(text0, parmotaitionOf_quotes[i]) == string("quotes"));
	
    string text1 = "The order of the phoenix"; 
	string parmotaitionOf_The[5] = { "the", "THE", "thE", "dhe", "Dhe"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text1, parmotaitionOf_The[i]) == string("The"));
	
	string parmotaitionOf_order[5] = { "order", "Order", "urder", "orter", "urtER"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::findfind(text1, parmotaitionOf_order[i]) == string("order"));
    
	string parmotaitionOf_of[10] = { "of", "OF", "uF", "Ub", "UB",
									 "ob", "OB", "op", "OP", "up"};
	for (int i = 0; i < 10; i++)
		CHECK(phonetic::find(text1, parmotaitionOf_order[i]) == string("order"));
    
	string parmotaitionOf_phoenix[5] = { "phoenix", "PhoenYx", "Fhuenix",
										 "bHOENIX", "bhuenyx"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text1, parmotaitionOf_phoenix[i]) == string("phoenix"));
    
	string text2 = "To be or not to be";
	string parmotaitionOf_To[10] = { "To", "TO", "Tu","TU", "to",
									 "tO", "tu","tU", "Do","dO"};
	for (int i = 0; i < 10; i++)
		CHECK(phonetic::find(text2, parmotaitionOf_To[i]) == string("To"));
    
	string parmotaitionOf_be[5] = { "be", "BE", "Fe", "fe", "PE"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text2, parmotaitionOf_be[i]) == string("be"));
    
	string parmotaitionOf_or[5] = { "or", "OR", "ur", "Ur", "uR"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text2, parmotaitionOf_or[i]) == string("or"));
    
	string parmotaitionOf_not[5] = { "Not", "nUt", "nud", "NUT", "nuD"};
	for (int i = 0; i < 5; i++)
		CHECK(phonetic::find(text2, parmotaitionOf_or[i]) == string("not"));
    
}
