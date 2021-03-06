namespace zoox {

// Use TEST_F for classes and functions with side effects ================
  
class MyUut {
  // ...
};
  
class MyUutTest : public ::testing::Test {
public:
  MyUutTest() : obj(), uut(obj) {}
 
protected:
  virtual void SetUp();
  virtual void TearDown();
  
  MockObject obj;
  MyUut uut;
};
 
void MyUutTest::SetUp() {}
 
void MyUutTest::TearDown() {}
 
TEST_F(MyUutTest, CheckOneCase) {
  // ...
}

// Use TEST for pure functions ==========================================
  
float mySqr(float a) {
  return a * a;
}

TEST(mySqrTest, CheckOneCase) {
  // ...
}
 
} // namespace zoox
