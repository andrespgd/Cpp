The following code will cause a segmentation error: 0x403010 Segmentation fault (core dumped)
-because it tries to access a specified memory location
-this memory location is forbidden to me, because it is outside the scope of this program
```
#include<iostream>
void main() {
  int* p =(int*)0x403010;
  std::cout << p << *p;
}
```




# ARGs
```
#include <iostream>
void main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
        }
}
```
Running it with ./test a1 b2 c3 will output:
```
Have 4 arguments:
./test
a1
b2
c3
```




ECLIPSE FOR LINUX
-----------------


1-Install Java/C++/Boost
```
sudo apt install default-jre
sudo apt install build-essential
g++ --version
sudo apt-get install libboost-dev
```

2-ECLIPSE 64bit
```
sudo tar xf eclipse-cpp-2019-12-R-linux-gtk-x86_64.tar.gz -C /opt
sudo ln -s /opt/eclipse/eclipse /usr/local/bin/
eclipse
```
</br>

FSTREAM use ONLY when need both R/W access</br>
IFSTREAM input</br>
OFSTREAM output</br>



</br></br></br></br>


ECLIPSE FOR WINDOWS
--------------------

1 download cygwin setupx8664.exe
Install needed packages and boost

2 add cygwin vin to path

3 install eclipse




Eclipse
-------
-highlight text and use CTRL+SHIFT+F to auto-format</br> 
-CTRL+B Builds</br>
-CTRL+F11 Builds+Runs</br>


C++ 2D Vectors
https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/

