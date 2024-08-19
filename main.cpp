#include<iostream>
#include<fstream>
#include<string>
#include<cassert>



int32_t find(const std::string& filename, const std::string& word_to_find);
void test();


int main()
{
	//	test();

	const std::string filename = "words.txt";

	std::cout << "Enter the word:\n";
	std::string word;
	std::cin >> word;

	std::cout << "\nFinding the word \"" << word << "\" in the file.\n";
	std::cout << "The number of repetitions of \"" << word << "\" - " << find(filename,word) << ".\n";;

	return 0;
}





//---------------------------------------------------------------------
int32_t find(const std::string& filename, const std::string& word_to_find)
{

	int counter = 0;
	std::string word;
	std::ifstream inf(filename.c_str(), std::ios::in);

	while(inf >> word)
	{
		if(word_to_find == word)
		{
			++counter;
		}
	}
	inf.close();

	return counter;
}
void test()
{
	std::string testname = "testfile.txt";

	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f << "word";
		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(1 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}

	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f << "word ";
		f << "word";
		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(2 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}
	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(0 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}

	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f << '\n';
		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(0 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}


	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f << "word1";
		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(0 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}


	{
		std::fstream f(testname.c_str(), std::ios::out | std::ios::trunc);
		assert(f.is_open());
		std::string word = "word";

		f << "word";
		f << '\n';
		f.close();
		f.open(testname, std::ios::in);
		assert(f.is_open());
		assert(1 == find(testname,"word"));
		f.close();
		f.open(testname.c_str(),std::ios::out | std::ios::trunc);
		assert(f.is_open());
		f.close();
	}

}

