#include<stdio.h>
#include<stdlib.h>
#include"funcao.c"
#include<gtest/gtest.h>

TEST(converte,unidades){
	EXPECT_EQ(1,converte_romano("I"));
	EXPECT_EQ(2,converte_romano("II"));
	EXPECT_EQ(3,converte_romano("III"));
	EXPECT_EQ(4,converte_romano("IV"));
	EXPECT_EQ(5,converte_romano("V"));
	EXPECT_EQ(6,converte_romano("VI"));
	EXPECT_EQ(7,converte_romano("VII"));
	EXPECT_EQ(8,converte_romano("VIII"));
	EXPECT_EQ(9,converte_romano("IX"));
}

TEST(converte,dezenas){
	EXPECT_EQ(10,converte_romano("X"));
	EXPECT_EQ(20,converte_romano("XX"));
	EXPECT_EQ(30,converte_romano("XXX"));
	EXPECT_EQ(40,converte_romano("XL"));
	EXPECT_EQ(50,converte_romano("L"));
	EXPECT_EQ(60,converte_romano("LX"));
	EXPECT_EQ(70,converte_romano("LXX"));
	EXPECT_EQ(80,converte_romano("LXXX"));
	EXPECT_EQ(90,converte_romano("XC"));
}

TEST(converte,centenas){
	EXPECT_EQ(100,converte_romano("C"));
	EXPECT_EQ(200,converte_romano("CC"));
	EXPECT_EQ(300,converte_romano("CCC"));
	EXPECT_EQ(400,converte_romano("CD"));
	EXPECT_EQ(500,converte_romano("D"));
	EXPECT_EQ(600,converte_romano("DC"));
	EXPECT_EQ(700,converte_romano("DCC"));
	EXPECT_EQ(800,converte_romano("DCCC"));
	EXPECT_EQ(900,converte_romano("CM"));
}

TEST(converte,milhares){
	EXPECT_EQ(1000,converte_romano("M"));
	EXPECT_EQ(2000,converte_romano("MM"));
	EXPECT_EQ(3000,converte_romano("MMM"));
}

TEST(converte,aleatorios){
	EXPECT_EQ(18,converte_romano("XVIII"));
	EXPECT_EQ(34,converte_romano("XXXIV"));
	EXPECT_EQ(41,converte_romano("XLI"));
	EXPECT_EQ(56,converte_romano("LVI"));
	EXPECT_EQ(97,converte_romano("XCVII"));
	EXPECT_EQ(132,converte_romano("CXXXII"));
	EXPECT_EQ(217,converte_romano("CCXVII"));
	EXPECT_EQ(324,converte_romano("CCCXXIV"));
	EXPECT_EQ(477,converte_romano("CDLXXVII"));
	EXPECT_EQ(531,converte_romano("DXXXI"));
	EXPECT_EQ(689,converte_romano("DCLXXXIX"));
	EXPECT_EQ(725,converte_romano("DCCXXV"));
	EXPECT_EQ(863,converte_romano("DCCCLXIII"));
	EXPECT_EQ(961,converte_romano("CMLXI"));
	EXPECT_EQ(1307,converte_romano("MCCCVII"));
	EXPECT_EQ(1422,converte_romano("MCDXXII"));
	EXPECT_EQ(1666,converte_romano("MDCLXVI"));
	EXPECT_EQ(1711,converte_romano("MDCCXI"));
	EXPECT_EQ(2313,converte_romano("MMCCCXIII"));
	EXPECT_EQ(2771,converte_romano("MMDCCLXXI"));	
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv); 
	return RUN_ALL_TESTS(); 
}
