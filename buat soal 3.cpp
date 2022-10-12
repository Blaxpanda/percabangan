#include<iostream>
using namespace std;

int main()
{
    cout<<"Program BMI"<<endl;
    float berat, tinggi, bmi;

    int pin = 38111, enterpin, pinerror = 0;
    do {
        cout << "Enter Pin: ";
        cin >> enterpin;
        pinerror++;
    } while (pinerror < 3 && enterpin != pin);

    if (pinerror < 3) {
        cout<<"Note: Satuan berat badan yang digunakan adalah kilogram dan tinggi badan menggunakan meter. "<<endl;
        cout <<"Masukkan Berat Badan : ";
        cin >> berat;
        cout <<"Masukkan Tinggi Badan : ";
        cin >> tinggi;
        if(tinggi < 3 && tinggi > 0){
            bmi = berat/(tinggi*tinggi);
            if(bmi < 17){
                cout<<" BMI : "<<bmi<<endl;
                cout<<" Kamu termasuk dalam kategori sangat kurus ";
            }
            else if(bmi >17 && bmi < 18.5){
                cout<<"BMI: "<<bmi<<endl;
                cout<<"Kamu termasuk dalam kategori kurus";
            }
            else if(bmi >= 18.5 && bmi <= 24.9){
                cout<<"BMI: "<<bmi<<endl;
                cout<<"Kamu termasuk dalam kategori normal";
            }
            else if(bmi >= 25 && bmi <= 29.9){
                cout<<"BMI: "<<bmi<<endl;
                cout<<"Kamu termasuk dalam kategori gemuk";
            }
            else if(bmi > 30){
                cout<<"BMI: "<<bmi<<endl;
                cout<<"Kamu termasuk dalam kategori obesitas";
            }
        }
        else{
            cout<<"Tinggi harus menggunakan satuan Meter. Memulai ulang program."<<endl<<endl;
            main();
        }
    }
    else {
        cout << "Error.";
    }
    return 0;
}
