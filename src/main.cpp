#include <gtest/gtest.h>

class Test : public ::testing::Test {
  public:
    virtual void SetUp() {
        x = 0;
    }

    virtual void TearDown() {
    }
  protected:
    int  x;
};

TEST_F( Test, hello ){
  ASSERT_EQ(0, x);
}

