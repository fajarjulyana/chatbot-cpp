#include <iostream>
#include <string>

// Fungsi untuk merespon input dari pengguna
std::string respond(const std::string& input) {
    // Bot dapat memberikan respons berdasarkan input
    if (input == "Halo") {
        return "Halo! Apa kabar?";
    } else if (input == "Siapa namamu?") {
        return "Saya adalah ChatBot.";
    } else if (input == "Selamat tinggal") {
        return "Selamat tinggal! Sampai jumpa lagi.";
    } else {
        return "Maaf, saya tidak mengerti pertanyaan Anda.";
    }
}

int main() {
    std::string user_input;

    std::cout << "Selamat datang! Silakan mulai percakapan. (Ketik 'Keluar' untuk berhenti)\n";

    // Loop percakapan antara pengguna dan bot
    while (true) {
        std::cout << "Anda: ";
        std::getline(std::cin, user_input);

        // Mengakhiri loop jika pengguna mengetik 'Keluar'
        if (user_input == "Keluar") {
            std::cout << "Bot: Sampai jumpa!";
            break;
        }

        // Menampilkan respons dari bot
        std::cout << "Bot: " << respond(user_input) << std::endl;
    }

    return 0;
}
