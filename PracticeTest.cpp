/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_simple_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome4)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, is_simple_palindrome3)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}



TEST(PracticeTest, arrangeDecending)
 {
     Practice obj;
     int t1 = 10; 
     int t2 = 20; 
     int t3 = 30; 
     bool actual = obj.sortDescending(t1 , t2 , t3);
    if (t1>t2 && t2>t3){
        ASSERT_TRUE(actual);
    }
    else {
        ASSERT_FALSE(actual);
    }
 }

TEST(PracticeTest, sortinDecending1)
 {
     Practice obj;
     int t1 = 10; 
     int t2 = 20; 
     int t3 = 30; 
     bool actual = obj.sortDescending(t1 , t2 , t3);
    if (t1>t2 && t2>t3){
        ASSERT_TRUE(actual);
    }
    else {
        ASSERT_FALSE(actual);
    }
 }

TEST(PracticeTest, sortinDecending2)
 {
     Practice obj;
     int t1 = -10; 
     int t2 = -20; 
     int t3 = -30; 
     bool actual = obj.sortDescending(t1 , t2 , t3);
    if (t1>t2 && t2>t3){
        ASSERT_TRUE(actual);
    }
    else {
        ASSERT_FALSE(actual);
    }
 }

TEST(PracticeTest, sortinDecending3)
 {
     Practice obj;
     int t1 = -10; 
     int t2 = 20; 
     int t3 = -30; 
     bool actual = obj.sortDescending(t1 , t2 , t3);
    if (t1>t2 && t2>t3){
        ASSERT_TRUE(actual);
    }
    else {
        ASSERT_FALSE(actual);
    }
 }


TEST(PracticeTest, sortinDecending)
 {
     Practice obj;
     int t1 = -10; 
     int t2 = 20; 
     int t3 = -30; 
     bool actual = obj.sortDescending(t1 , t2 , t3);
    if (t1>t2 && t2>t3){
        ASSERT_TRUE(actual);
    }
    else {
        ASSERT_FALSE(actual);
    }
 }

