namespace zoox {
 
class MyTest : public ::testing::Test {
public:
  MyTest() : uut() {}
 
protected:
  virtual void SetUp();
  virtual void TearDown();
 
  MyUut uut;
};
 
void MyTest::SetUp() {}
 
void MyTest::TearDown() {}
 
TEST_F(MyTest, CheckOneThing) {
  // ...
}
 
} // namespace zoox
