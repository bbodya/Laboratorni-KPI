#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	printf("Âàñèëiâ Áîãäàí, IÑ-01, çàâäàííÿ ¹ 31\n");
	
	float a, b, c;// çíà÷åííÿ çàäàíèõ ä³éñíèõ ÷èñåë
	cout << "Ââåäiòü ÷èñëî a:"; cin >> a;// ââ³ä ÷èñëà à
	cout << "Ââåäiòü ÷èñëî b:"; cin >> b;// ââ³ä ÷èñëà b
	cout << "Ââåäiòü ÷èñëî c:"; cin >> c;// ââ³ä ÷èñëà ñ
	
	if ((a == b) || (a == c) || (b == c))// ïåðåâ³ðêà óìîâè ÷è º ïàðà ð³âíèõ ÷èñåë
		cout <<"Iñíóº ïàðà ÷èñåë ðiâíèõ ìiæ ñîáîþ\n";// âèâ³ä ðåçóëüòàòó ïðè âèêîíàíí³ óìîâè

	else// ÿêùî óìîâà íå âèêîíóºòüñÿ
		cout << "Íåìàº  ðiâíèõ ìiæ ñîáîþ ÷èñåë\n";// âèâ³ä ðåçóëüòàòó êîëè óìîâà íå âèêîíóºòüñÿ
	system("pause");
}
