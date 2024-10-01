while True:
    Nama = "Dimas Aji M"
    NIM = "2409116107"

 

    if Nama == "Dimas Aji M" and NIM == "2409116107":
        print("login berhasil selamat datang")
    else:
        print ("login gagal, username/password salah")

    print(f"halo {Nama}, selamat datang")

    gaji = float(input("silahkan masukkan gaji: "))
    jam = float(input("silahkan masukkan jam kerja:"))

    if jam > 160:
        Bonus = 0.1 * gaji 
        gaji += Bonus
        print(f"kamu mendapatkan bonus Rp.{Bonus}")
        print(f"Gaji yang kamu terima adalah Rp.{gaji}")
    else: 
        print("kamu tidak mendapatkan bonus")
    
    ulang = input("apakah kamu ingin menghitung ulang gaji anda ya/tidak ").lower()

    if ulang == "tidak": 
        print("Sekian Terima Kasih sudah menggunakan Program ini")
        break
