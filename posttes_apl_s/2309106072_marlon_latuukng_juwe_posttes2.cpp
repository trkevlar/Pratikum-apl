#include <iostream>
#include <string>

using namespace std;

int main(){

    const int max_aircraft=100
    struct mesin_pesawat{
        string name;
        string tipe;
    }

    void tampilkan_menu(){
        cout <<" pilih menu:\n";
        cout <<" 1. tambah data mesin pesawat\n"
        cout <<" 2. tampilkan data mesin pesawat/n"
        cout <<" 3. ubah data mesin pesawar\n"
        cout <<" 4. hapus data mesin pesawat\n"
        cout <<" 5. keluar\n"
    }

    void tambah_data(mesin_pesawat pesawat[], int &jumlah_pesawat){
        if(jumlahpesawat < max_aircrafr){
            cout << "masukan nama mesin pesawat:";
            cin >> pesawat[jumlahpesawat].nama;
            cout << "masukan tipe mesin pesawat;"
            cin >> pesawat[jumlahpesawat].tipe;
            jumlahpesawat++;
            cout << "data berhasil ditambahkan.\n";
        }else {
            cout << "kuota data mesin pesawat sudah penuh.\n";
        }
        
    }
    void tampilkan_data(const mesin_pesawat pesawat[], int jumlah_pesawat) {
        if (jumlah_pesawat > 0) {
            cout << "data mesin pesawatsudah penuh.\n";
            for (int i = 0; i < jumlah_pesawat; ++i) {
                cout << "nama: " << pesawat[i].nama << ",tipe:" << pesawat[i].tipe << endl;
            }
        }else{
            cout << "belum ada data mesin pesawat.\n";
        }
    }
    void ubah_Data(Mesin_Pesawat pesawat[], int jumlah_Pesawat) {
    if (jumlah_Pesawat > 0) {
        string input_nama;
        cout << "Masukkan Nama Mesin Pesawat yang akan diubah: ";
        cin >> input_nama;

        for (int i = 0; i < jumlah_Pesawat; ++i) {
            if (pesawat[i].nama == input_Nama) {
                cout << "Data saat ini:\n";
                cout << "Nama: " << pesawat[i].nama << ", Tipe: " << pesawat[i].tipe << endl;

                cout << "Masukkan Nama Baru: ";
                cin >> pesawat[i].nama;
                cout << "Masukkan Tipe Baru: ";
                cin >> pesawat[i].tipe;
                
                cout << "Data berhasil diubah.\n";
                return;
            }
        }

        cout << "Nama Mesin Pesawat tidak ditemukan.\n";
    } else {
        cout << "Belum ada data mesin pesawat.\n";
    }
    void hapusData(MesinPesawat pesawat[], int &jumlahPesawat) {
    if (jumlahPesawat > 0) {
        string inputNama;
        cout << "Masukkan Nama Mesin Pesawat yang akan dihapus: ";
        cin >> inputNama;

        for (int i = 0; i < jumlahPesawat; ++i) {
            if (pesawat[i].nama == inputNama) {
                // Memindahkan data terakhir ke posisi yang akan dihapus
                pesawat[i] = pesawat[jumlahPesawat - 1];
                jumlahPesawat--;
                cout << "Data berhasil dihapus.\n";
                return;
            }
        }

        cout << "Nama Mesin Pesawat tidak ditemukan.\n";
    } else {
        cout << "Belum ada data mesin pesawat.\n";
    }
}
        
}

int main() {
    mesin_pesawat data_pesawat[max_aircraft];
    int jumlah_pesawat = 0
    string input_nama, input_tipe;


    for (int i = 0; i < 3; ++i) {
        cout << "login\n";
        cout << "masukkan nama: ";
        cin >> imput_nama;
        cout << "masukkan tipe: ";
        cin >> input_Tipe;


        if (input_nama == "user" && imput_tipe == "12345") {
            cout << "login berhasil\n";
            break;
        } else {
            cout << "login gagal. silahkan coba lagi.\n";
            if(i == 2){
                cout << "anda sudah 3 kali salah login. program berhenti.\n";
                return 0;
            }
        }
    }

    int pilihan;
    do{
        tampilan_menu();
        cout << "masukkan pilihan:";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            tambah_data ( data_pesawat, jumlah_pesawat);
            break;
            case 2:
            tampilkan_data (data_pesawat, jumlah_pesawat);
            break;
            case 3;
            ubah_data (data_pesawat, jumlah_pesawat)
            break;
            case 4:
            hapus_data (data_pesawat, jumblah_pesawat)
            break;
            case 5:
            cout << "Program berhenti. Terima kasih!\n";
            break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
        while (pilihan != 5);
    } return 0;
}

        
    
