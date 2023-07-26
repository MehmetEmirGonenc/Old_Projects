//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	int mehmet = 32;
//	cout<<mehmet
//
//	return 0;
//}
#include <iostream>
#include <vector>

double maas_hesaplama(double x) {
    if (x >= 3000) {
        return x * 0.1 + x;
    }
    else {
        return x * 0.2 + x;
    }
}

void ekleme(std::vector<double>& x, double y) {
    x.push_back(y);
}

int main() {
    int kisi_sayisi;
    std::cout ?1
        Malformed citation << "Þirkette kaç kiþi çalýþtýðýný giriniz: ";
    std::cin >>
        ? kisi_sayisi;

    Copy code
        std::vector<double> maaslar;
    double maas;
    for (int i = 0; i < kisi_sayisi; i++) {
        std::cout& #8203; `oaicite:{"index":1, "invalid_reason" : "Malformed citation << \"Maaþý giriniz: \";\n        std::cin >>"}`&#8203; maas;
        ekleme(maaslar, maas);
    }

    std::cout << "Maaþlar: ";
    for (auto i : maaslar) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::vector<double> yeni_maaslar;
    for (auto i : maaslar) {
        double a = maas_hesaplama(i);
        ekleme(yeni_maaslar, a);
    }

    std::cout << "Yeni maaþlar: ";
    for (auto i : yeni_maaslar) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}