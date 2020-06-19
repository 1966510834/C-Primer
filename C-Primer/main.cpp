#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>
#include "Sales_item.h"
#include "Sales_data.h"
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::begin;
using std::end;
using std::pair;

//3.36:
//bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
//{
//	if ((pe1 - pb1) != (pe2 - pb2)) //判断长度相等
//		return  false;
//	else
//	{
//		for (int* i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j) //判断内容相等
//			if (*i != *j)
//				return false;
//	}
//	return true;
//}

//5.17:
/*bool is_prefix(vector<int> const& lhs, vector<int> const& rhs)
{
	if (lhs.size() > rhs.size())
		return is_prefix(rhs, lhs);
	for (unsigned i = 0; i != lhs.size(); ++i)
		if (lhs[i] != rhs[i]) return false;
	return true;
}*/

int main() {
	//1.3:
	//cout << "Hello,World。" << endl;

	//1.4:
	//int a = 2, b = 2;
	//cout << a * b << endl;

	//1.9:
	//int sum = 0;
	//int a = 50;
	//while (a <= 100)
	//	sum += a++;
	//cout << sum << endl;

	//1.10:
	//int a = 10;
	//while (a >= 0)
	//	cout << a-- << endl;

	//1.11:
	//cout << "Enter two number" << endl;
	//int a, b;
	//cin >> a >> b;
	//int temp;
	//if (a > b)
	//{
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//while (a <= b)
	//	cout << a++ << endl;

	//1.13:
	//int sum = 0;
	//for (int val = 1; val <= 10; val++)
	//	sum += val;
	//cout << sum << endl;

	//1.16:
	//int sum = 0, val = 0;
	//while (cin >> val)
	//	sum += val;
	//cout << sum << endl;

	//1.17:
	//int currVal = 0, val = 0;
	//if (cin >> currVal)
	//{
	//	int cnt = 1;
	//	while (cin >> val)
	//	{
	//		if (val == currVal)
	//			++cnt;
	//		else {
	//			cout << currVal << " occurs " << cnt << " times " << endl;
	//			currVal = val;
	//			cnt = 1;
	//		}
	//	}
	//	cout << currVal << " occurs " << cnt << " times " << endl;
	//} 

	//1.20
	//Sales_item item1, item2;
	//cin >> item1, item2;
	//if (item1.isbn() != item2.isbn())
	//	cerr << " Different ISBN" << endl;
	//else
	//	cout << item1 + item2 << endl;

	//1.23
	//Sales_item currItem, valItem;
	//if (cin >> currItem)
	//{
	//	int cnt = 1;
	//	while (cin >> valItem)
	//	{
	//		if (valItem.isbn() == currItem.isbn())
	//			cnt++;
	//		else
	//		{
	//			cout << currItem << " occurs " << cnt << " times " << endl;
	//			currItem = valItem;
	//			cnt = 1;
	//		}
	//	}
	//	cout << currItem << " occurs " << cnt << " times " << endl;
	//}

	//2.3
	//unsigned int a = 10, b = 20;
	//cout << a - b << endl;
	//cout << b - a << endl;

	//int i = 10, i2 = 42;
	//cout << i2 - 1 << endl;
	//cout << i - i2 << endl;
	//cout << i - a << endl;
	//cout << a - i << endl;

	//2.18
	//int a = 10,b = 20, * p;
	//p = &a;
	//*p = 20;
	//p = &b;
	//cout << a << " " << b << endl;

	//3.2:
	//string s;
	//while (getline(cin, s))
	//	cout << s << endl;

	//3.4:
		//1.
	//string a, b;
	//cin >> a >> b;
	//if (a == b)
	//	cout << "Two string equal" << endl;
	//else
	//	cout << "The larger string is" << ((a > b) ? a : b) << endl;
		//2.
	//string a, b;
	//cin >> a >> b;
	//if (a == b)
	//	cout << "Two strings equal" << endl;
	//else
	//	if (a.size() > b.size())
	//		cout << a << endl;
	//	else
	//		cout << b << endl;

	//3.5:
	//string resultString, valString;
	//for (valString; cin >> valString; resultString += valString)
	//	cout << resultString << endl;

	//3.6
	//string s = "abc   defg";
	//for (auto& a : s)
	//	if (!isspace(a))
	//		a = 'X';
	//cout << s << endl;

	//3.7
	//string s = "abc  def";
	//for (char& a : s)
	//	if (!isspace(a))
	//		a = 'X';
	//	cout << s << endl;

	//3.8
	//string s("abc  def"), & a = s;
	//decltype(s.size()) i = 0;
	//while (i < s.size())
	//	s[i++] = 'X';
	//cout << s << endl;

	//3.10
	//cout << "Enter a string of characters includeing punctuation" << endl;
	//for (string s; getline(cin, s); cout << endl)
	//	for (auto i : s)
	//		if (!ispunct(i))
	//			cout << i;

	//3.14
	//vector<string> val;
	//for (string i; cin >> i; val.push_back(i));

	//3.16
	//vector<int> val(10,1);
	//int i = 0;
	//for (auto& a : val)
	//{
	//	cout << a << endl;
	//	i++;
	//}
	//cout << "The Counts is:" << i << endl;

	//3.17
	//vector<string> val;
	//for (string a;cin >> a;val.push_back(a));
	//for (auto& b : val)
	//{
	//	for (auto& c : b)
	//	{
	//			c = toupper(c);
	//	}
	//}
	//		
	//for (string::size_type i = 0; i != val.size(); ++i)
	//{
	//	if (i != 0 && i % 8 == 0)
	//		cout << endl;
	//	cout << val[i] << " ";
	//}
	//	
	//cout << endl;

	//3.20
	//vector<int> val;
	//for (int i = 0; cin >> i; val.push_back(i));
//
	//if (val.empty())
	//{
	//	cerr << "Input at least two intrger." << endl;
	//	return -1;
	//}
//
	//if (val.size() == 1)
	//{
	//	cerr << "Only one interger." << val[0] << ",it doesn't have any adjacent elements," << endl;
	//}
//
	//for (vector<int>::size_type i = 0; i != val.size() - 1; i++)
	//{
	//	cout << val[i] + val[i + 1] << endl;
	//}
	//cout << endl;

	//3.21:
	//vector<int> val;
	//int a = 0;
	//if (val.begin() != val.end())
	//	for (auto it = val.begin(); it != val.end(); ++it)
	//	{
	//		cout << *it;
	//		a++;
	//	}
	//cout << "" << endl;
	//cout << a << endl;

	//3.22:
	//vector<string> text;
	//for (string line; cin >> line; text.push_back(line));
	//for (auto& word : text)
	//{
	//	for (auto& ch : word)
	//		if (isalpha(ch))
	//			ch = toupper(ch);
	//	cout << word << "";
	//}

	//3.23:
	//vector<int> a(10,1);
	//for (auto it = a.begin(); it != a.end(); ++it)
	//	cout << *it * 2 << endl;

	//基于迭代器的二分搜索
	//int sought = 8;
	//vector<int> a; //必须是有序的
	//for (int b; cin >> b; a.push_back(b));
	//auto beg = a.begin(), end = a.end();
	//auto mid = a.begin() + (end - beg) / 2;
	//while (mid != end && *mid != sought)
	//{
	//	if (sought < *mid)
	//		end = mid;
	//	else
	//		beg = mid + 1;
	//	mid = beg + (end - beg)/2;
	//}
	//cout << *mid << endl;

	//3.24:
	//vector<int> a;
	//for (int b; cin >> b; a.push_back(b));
	//for (auto it = a.begin(); it != a.end() -1; ++it)
	//{
	//	int sum = 0;
	//	sum = *it + *(it + 1);
	//	cout << sum << endl;
	//}

	//3.25:
	//vector<unsigned> socres(11, 0);
	//for (unsigned grade; cin >> grade;)
	//	if (grade <= 100)
	//		++* (socres.begin() + grade / 10);
	//for (auto s : socres)
	//	cout << s << " ";
	//cout << endl;

	//数组操作
	//unsigned scores[11] = {};
	//unsigned grade;
	//while (cin >> grade)
	//{
	//	if (grade <= 100)
	//		++scores[grade / 10];
	//}
	//for (auto i : scores)
	//	cout << i << " ";
	//cout << endl;

	//3.31:
	//constexpr size_t array_size = 10;
	//unsigned a[array_size];
	//for (size_t i = 0; i < array_size; i++)
	//	a[i] = i;
	//for (auto i : a)
	//	cout << i << " ";
	//cout << endl;

	//3.32:
	//array
	//constexpr size_t array_size = 10;
	//unsigned a[array_size];
	//for (size_t i = 0; i < array_size; ++i)
	//	a[i] = i;
	//for (auto i : a)
	//	cout << a[i] << " ";
	//cout << endl;
	//unsigned b[array_size];
	//for (size_t i = 0; i < array_size; ++i)
	//	b[i] = a[i];
	//for (auto i : b)
	//	cout << b[i] << " ";
	//cout << endl;
	//
	//vector
	//vector<int> c(10);
	//for (int i = 0; i < 10; ++i)
	//	c[i] = a[i];
	//for (auto i : c)
	//	cout << c[i] << " ";
	//cout << endl;
	//vector<int> v2(c);
	//for (auto i : v2)
	//	cout << i << " ";
	//cout << endl;

	// 3.35:
	//int ia[] = { 1,2,3,4,5,6 };
	//int* beg = std::begin(ia), * end = std::end(ia);
	//while (beg != end)
	//{
	//	*beg = 0;
	//	beg++;
	//}
//
	//for (auto i : ia)
	//	cout << i << " ";
	//cout << endl;

	//3.36:
	//int a[] = { 1,2,3,4,5,6,7,8,9 };
	//int b[] = { 1,2,3,4,5,6,7,8,9 };
	//if (compare(std::begin(a), std::end(a), std::begin(b), std::end(b)))
	//	cout << "The two arrays are equal." << endl;
	//else
	//	cout << "The two arrays are not equal." << endl;
	//cout << "===============" << endl;
//
	//vector<int> vec1 = { 0,1,2 };
	//vector<int> vec2 = { 0,1,2 };
//
	//if (vec1 == vec2)
	//	cout << "The two vector are equal." << endl;
	//else
	//	cout << "The two vector are not equal." << endl;

	//3.39:
	//string s1("Mooophy"), s2("Pezy");
	//if (s1 == s2)
	//	cout << "Same string" << endl;
	//else if (s1 > s2)
	//	cout << "Mooophy > Pezy" << endl;
	//else 
	//	cout << "Pezy > Mooophy" << endl;
	//cout << "===============" << endl;
//
	//const char* cs1 = "Wangyue";
	//const char* cs2 = "Pezy";
	//auto result = strcmp(cs1, cs2);
	//if (result == 0)
	//	cout << "Same string" << endl;
	//else if (result < 0)
	//	cout << "Wangyue < Pezy" << endl;
	//else
	//	cout << "Pezy < Wangyue" << endl;

	//3.40:(bug)
	//const char* a = "Hello";
	//const char* b = "World";
	//const size_t new_size = strlen(a) + strlen(" ") + strlen(b) + 1;
	//int new_Size = strlen(a) + strlen(" ") + strlen(b) + 1;
	//char *c = new char[new_Size];
	//strcpy(c, a);
	//strcat(c," ");
	//strcat(c, b);

	//3.41:
	//int int_arr[] = {0,1,2,3,4,5,6};
	//vector<int> ivec(begin(int_arr), end(int_arr));
	//for (auto i : ivec)
	//	cout << i << " ";
	//cout << endl;

	//3.42
	//int int_arr[10];
	//vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
	//for (size_t i = 0; i != ivec.size(); ++i)
	//	int_arr[i] = ivec[i];
	//for (auto i : int_arr)
	//	cout << i << " ";
	//cout << endl;

	//3.43：
	//int ia[3][4] =
	//{
	//	{0,1,2,3},
	//	{4,5,6,7},
	//	{8,9,10,11}
	//};

	//for迭代
	//for (const int(&row)[4] : ia)
	//	for (int col : row)
	//		cout << col << " ";
	//cout << endl;
	//cout << "===================" << endl;

	//下标
	//for (size_t i = 0; i != 3; ++i)
	//	for (size_t j = 0; j != 4; ++j)
	//		cout << ia[i][j] << " ";
	//cout << endl;
	//cout << "==================" << endl;

	//指针
	//for (int(*row)[4] = ia; row != ia + 3; ++row)
	//	for (int* col = *row; col != *row + 4; ++col)
	//		cout << *col << " ";
	//cout << endl;
	//cout << "=================" << endl;

	//3.44:类型别名
	//using int_array = int[4];
	//for (int_array& p : ia)
	//	for (int q : p)
	//		cout << q << " ";
	//cout << endl;
	//cout << "====================" << endl;

	//4.10:
	//int val;
	//while (cin >> val && val != 42)
	//{
	//	cout << val << endl;
	//	cout << endl;
	//}

	//4.11:
	//int a, b, c, d;
	//a > b && b > c && c > d;

	//4.21:
	//vector<int> s{1,2,3,4,5,6,7,8,9,10};
	//for (auto i : s)
	//	cout << ((i % 2 == 0) ? i * 2 : i) << " ";
	//cout << endl;

	//4.22:
	//int grade;
	//cin >> grade;
	//cout << ((grade > 90) ? "high pass" : ((grade > 75) ? "low pass" : ((grade > 60) ? "pass" : "fail")));

	//4.29
	//int x[10];
	//int* p = x;
	//cout << sizeof(x) / sizeof(*x) << endl;
	//cout << sizeof(p) / sizeof(*p) << endl;

	//4.32:ptr and ix have the same function. 
		//The former use a pointer, and the latter use the index of array. 
		//we use the loop to through the array.(just choose one from ptr and ix)
	//constexpr int size = 5;
	//int ia[size] = {1,2,3,4,5};
	//for (int* ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
	//{
	//	cout << *ptr << endl;
		//or
	//	cout << ix << endl;
	//}

	//4.36:
	//int i = 1;
	//double d = 10.10;
	//int a = (i *= static_cast<int> (d));
	//cout << a << endl;

	//5.5:
	//vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	//for (int g; cin >> g;)
	//{
	//	string letter;
	//	if (g < 60)
	//	{
	//		letter = scores[0];
	//	}
	//	else
	//	{
	//		letter = scores[(g - 50) / 10];
	//		if (g != 100)
	//			letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
	//	}
	//	cout << letter << endl;
	//}

	//5.6:
	//vector<string> score = {"F","D","C","B","A","A++"};
	//int g;
	//while (cin >> g)
	//{
	//	string letter = g < 60 ? score[0] : score[(g - 50) / 10];
	//	letter += (g == 100 || g < 60) ? "" : (g % 10 > 7) ? "+" : (g % 10 < 3) ? "-" : "";
	//	cout << letter << endl;
	//}

	//5.9:
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//char ch;
	//while (cin >> ch) {
	//	if (ch == 'a')
	//		++aCnt;
	//	if (ch == 'e')
	//		++eCnt;
	//	if (ch == 'i')
	//		++iCnt;
	//	if (ch == 'o')
	//		++oCnt;
	//	if (ch == 'u')
	//		++uCnt;
	//}
//
	//cout << "Number of vowel a: \t" << aCnt << '\n'
	//	<< "Number of vowel e: \t" << eCnt << '\n'
	//	<< "Number of vowel i: \t" << iCnt << '\n'
	//	<< "Number of vowel o: \t" << oCnt << '\n'
	//	<< "Number of vowel u: \t" << uCnt << endl;

	//5.10:
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//char ch;
	//while (cin >> ch) {
	//	switch (ch)
	//	{
	//	case 'a':
	//	case 'A':
	//		++aCnt;
	//		break;
	//	case 'e':
	//	case 'E':
	//		++eCnt;
	//		break;
	//	case 'i':
	//	case 'I':
	//		++iCnt;
	//		break;
	//	case 'o':
	//	case 'O':
	//		++oCnt;
	//		break;
	//	case 'u':
	//	case 'U':
	//		++uCnt;
	//		break;
	//	default:
	//		break;
	//	}
	//}
//
	//cout << "Number of vowel a: \t" << aCnt << '\n'
	//	<< "Number of vowel e: \t" << eCnt << '\n'
	//	<< "Number of vowel i: \t" << iCnt << '\n'
	//	<< "Number of vowel o: \t" << oCnt << '\n'
	//	<< "Number of vowel u: \t" << uCnt << endl;

	//5.11:
	//unsigned sapceCnt = 0, tabCnt = 0, newLineCnt = 0;
	//char ch;
	//while (cin >> std::noskipws >> ch) //启用格式输入
	//{
	//	switch (ch)
	//	{
	//	case ' ':
	//		++sapceCnt;
	//		break;
	//	case '\t':
	//		++tabCnt;
	//		break;
	//	case '\n':
	//		++newLineCnt;
	//		break;
	//	default:
	//		break;
	//	}
	//}
//
	//cout << "Number of vowel sacpe \t" << sapceCnt << '\n'
	//	 << "Number of vowel tab \t" << tabCnt << '\n'
	//	 << "Number of vowel newLine \t" << newLineCnt << endl;


	//5.14:
	/*pair<string, int> max_duplicated; //pair是将2个数据组合成一个数据，当需要这样的需求时就可以使用pair
	int count = 0;
	for (string str, prestr; cin >> str; prestr = str)
	{
		if (str == prestr) ++count;
		else count = 0;
		if (count > max_duplicated.second) max_duplicated = { prestr, count };
	}

	if (max_duplicated.first.empty()) cout << "There's no duplicated string." << endl;
	else cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times. " << endl;*/

	//5.17:
	/*vector<int> v1{ 0,1,1,2 }, v2{0,1,1,2,3,5,8};
	cout << (is_prefix(v1, v2) ? "Yes\n" : "No\n") << endl;*/


	return 0;
}