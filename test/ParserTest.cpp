#include <gtest/gtest.h>
#include "../../SR-Library/SRLib/include/Parser.h"

class ParserTest : public ::testing::Test
{
protected:

};

TEST_F(ParserTest, GetDataFromJSON)
{
	ASSERT_STREQ(SRLib::Parser::getStringFromJsonFile("../../test/renderConfig.json", "Renderer").c_str(), "Fur");
	ASSERT_EQ(SRLib::Parser::getIntFromJsonFile("../../test/renderConfig.json", "screenWidth"), 1280); 
}

