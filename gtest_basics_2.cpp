TEST_F(MyUutTest, AssertExamples) {
  ASSERT_EQ(1U, 0U); // Fails immediately
  EXPECT_EQ(1U, 0U); // Marks test as failed but continues
  
  // Use these when you're checking a boolean value
  ASSERT_TRUE(uut.isTrue());
  ASSERT_FALSE(uut.isFalse());
  
  // Use these when you are comparing two objects
  ASSERT_EQ(1, uut.getInt());
  ASSERT_NE(1, uut.getInt());
  ASSERT_LT(1, uut.getInt());
  ASSERT_LE(1, uut.getInt());
  ASSERT_GT(1, uut.getInt());
  ASSERT_GE(1, uut.getInt());
}
