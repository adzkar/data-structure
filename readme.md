# Data Structure Dalam C++


## Compile c++ using g++ compiler

 Install terlebih dahulu compiler untuk c++ nya, jika anda menggunakan linux biasanya sudah terinstall. Namun untuk windows anda dapat mengikuti instruksi seperti pada link [Disini](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html "Tutorial Instalasi di Windows") 

 ```bash
    //untuk windows
    g++  namafile.cpp -o namafile.exe
    //untuk linux
    g++  namafile.cpp -o namafile
 ``` 

 secara default g++ mencompile dengan standar 98 jika anda ingin mengcompile menggunakan standar  yang baru anda dapat menambahkan flag -std sebagai berikut :

 ```bash
    g++ -std=c++11 namafile.cpp -o namafile.exe
 ```
 standar yang tersedia adalah c++11 c++14 c++17  c++0x

adapun untuk mengcompile beberapa file menjadi satu anda dapat melakukan hal berikut : 

```bash
    g++ file1.cpp file2.cpp fileN.cpp -o output.exe
    //atau
    g++ -std=c++11 file1.cpp file2.cpp fileN.cpp -o output.exe
```

---------------------------------------------------------------------------

# List of Practical Data Strucutre

* [x] Singgle Linked List
* [x] Double Linked List
* [ ] Circular Linked List
* [ ] Multi Linked List
* [ ] Stack
    * [x] Stack List Version
    * [ ] Stack Array Version
* [ ] Queue
* [x] Tree
* [ ] Graph