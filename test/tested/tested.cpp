#include <iostream>
#include "gtest/gtest.h"

// define simple add function 
//
int add_int(int a, int b){
	return a + b ; 
}

TEST(Addtest, PositiveNumbers){
	int a = 1 ; 
	int b = 2 ; 
	EXPECT_EQ(3, add_int(a,b)) ;
}





