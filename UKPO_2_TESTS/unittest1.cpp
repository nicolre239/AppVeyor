#include "stdafx.h"
#include "CppUnitTest.h"
#include <string>
#include "TextParser.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UKPO_tests_2
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(BaseCheck_B)
        {
           std::string findString = "igla";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 39;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(InMiddleD_B)
        {
           std::string findString = "ig.a";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   
		   int expected = 5;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(InMiddleP_W)
        {
           std::string findString = "ig+a";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 5;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(TestMethod4)
        {
           std::string findString = "iga";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = -1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(CombineD_Middle_W)
        {
           std::string findString = "ig.stog";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 28;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(CombineM_W)
        {
           std::string findString = "ig*stog";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 5;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(CombineM2_W)
        {
           std::string findString = "stog*ig";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(CombineP_W)
        {
           std::string findString = "stog+ig";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(CombineD_W)
        {
           std::string findString = "stog.ig";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 13;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(InStartD_B)
        {
           std::string findString = ".tog";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 2;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
        TEST_METHOD(InStartD2_W)
        {
           std::string findString = ".gra";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = -1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(EmptyText_B)
        {
           std::string findString = ".gra";
		   std::string textString = "";
		   int expected = -1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(EmptyRE_W)
        {
           std::string findString = "";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = -1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(Fail_B)
        {
           std::string findString = "superFail";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = -1;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(MAtEnd_B)
        {
           std::string findString = "igla*";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 39;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(DAtEnd_W)
        {
           std::string findString = "igla.";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 39;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(PAtEnd_W)
        {
           std::string findString = "igla+";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo";
		   int expected = 39;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
		TEST_METHOD(MixInRE_W)
        {
           std::string findString = "sto.igra.togstog.igst.gstog.glstogs.ogigl.asto.igla.tog.kpo1";
		   std::string textString = "stogigrastogstogaigstogstogiglstogstogiglastogiglastogukpostogigrastogstogaigstogstogiglstogstogiglastogiglastogukpo1";
		   int expected = 58;

		   TextParser* test = new TextParser(findString, textString);
		   test -> cutString();
		   int real = test -> answer;

		   Assert::AreEqual(expected, real);
        }
    };
}