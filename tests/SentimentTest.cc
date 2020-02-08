#include <gtest/gtest.h>
#include <Sentiment.h>

TEST(sentimentTest, positiveDifferentFromNegative) {
	ASSERT_NE(Sentiment::positive, Sentiment::negative);
}

TEST(sentimentTest, positiveEqualsToPositive) {
	ASSERT_EQ(Sentiment::positive, Sentiment::positive);
}

TEST(sentimentTest, positiveEqualsToNegative) {
	ASSERT_EQ(Sentiment::negative, Sentiment::negative);
}
