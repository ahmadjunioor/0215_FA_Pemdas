#include <iostream>
using namespace std;

class MasukUniversitas {
private:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }

    virtual void namaJalurMasuk() {
        cout << "Pilih Jalur Masuk: ";

        return;
    }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }
    float getTotalbiaya() {
        return totalBiaya;
    }
};

class SNBT : public MasukUniversitas {
public:
    void pesan() {
        cout << "SNBT" << endl;
    }
};

class SNBP : public MasukUniversitas {
public:
    void pesan() {
        cout << "SNBP" << endl;
    }
};

int main() {
    
}