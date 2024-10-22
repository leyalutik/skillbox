#include<string>
#include<iostream>
#include<map>


bool is_anagram(const std::string& word1, const std::string& word2);

int main(int32_t argc, char *argv[])
{
	std::cout << "Input 2 words:\n";
	std::string word1, word2;

	if(std::cin >> word1 >> word2)
	{
		std::cout << "Is " << (is_anagram(word1,word2) ? "" : "not ") << "a anagram.\n";
	}
	else
	{
		std::cout << "Wrong input.\n";
	}


	return 0;
}


bool is_anagram(const std::string& word1, const std::string& word2)
{
	std::map<char,int32_t> m1,m2;
	for(const auto& w:word1)
	{
		++m1[w];
	}

	for(const auto& w:word2)
	{
		++m2[w];
	}

	return (m1 == m2);

}
