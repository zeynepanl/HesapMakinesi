#include<iostream>
using namespace std;
int main()
{
	double sayi1, sayi2, sonuc;
	char islem;

	while (1) {
		cout << "Yapmak istediginiz islemi giriniz:";
		cin >> sayi1 >> islem >> sayi2;

		if ((islem == '+') || (islem == '-') || (islem == '*') || (islem == '/')) {

			switch (islem) {
			case '+': sonuc = sayi1 + sayi2; break;
			case '-': sonuc = sayi1 - sayi2; break;
			case '*': sonuc = sayi1 * sayi2; break;
			case '/': {
				if (sayi2 != 0) {
					sonuc = sayi1 / sayi2;
				}
				else {
					cout << "Sayi sifira bolunemez." << endl;
					return 1;
				}
				break;
			}
			default: {
				cout << "Hatali islem." << endl;
				return 1;
			}
			}
			cout << sayi1 << ' ' << islem << ' ' << sayi2 << " = " << sonuc << endl;
			cout << "Programdan cikmak icin CTRL + C tuslarina basiniz." << endl;
		}
		else {
			cout << "Gecersiz veri girisi." << endl;
			return 1;
		}
	}
	return 0;
}
