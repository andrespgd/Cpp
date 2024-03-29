# Simplest Code hello.cpp
```
#include <iostream>
int main(){
    std::cout<<"hi";
    return 0;
}
```

# Compile
```
g++ hello.cpp
g++ hello.cpp -o hello
g++ -std=c++11 hello.cpp -o hello
```

# VERSION
```
   std::cout << __cplusplus;
```
# Dictionary/Sets in C++11
```
std::unordered_map // Python Dictionary
std::unordered_set // Python Set
```

# NEW
You should use new when you wish an object to remain in existence until you delete it. If you do not use new then the object will be destroyed when it goes out of scope.

Some people will say that the use of new decides whether your object is on the heap or the stack, but that is only true of variables declared within functions.


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

# POINTERS

## Pointers and Arrays
```
#include <iostream>
int main() {
    int a[4] = {0, 10, 20, 30};
    std::cout << a[3] << " " << *(a + 3) << " " << *(3 + a) << " " << 3[a];
}
```
Will output:
```
30 30 30 30
```

## Raw Pointers Vs. Unique Pointers
* A raw pointer:
	* holds the memory address of an object
	* does NOT manage the lifetime of the object it points to
	* can be used to create memory leaks if not handled properly.

* A unique pointer
	* is a type of smart pointer that is designed to manage the lifetime of the object it points to
	* ensures that the object is properly deleted when the unique pointer goes out of scope
	* cannot be copied, ensuring that only one unique pointer is pointing to an object at a time

* Summary:
	* a raw pointer is a simple memory address and has no ownership of the object
	* while a unique pointer has ownership and manages the lifetime of the object it points to
```
#include <iostream>
#include <memory>

int main() {
    // Raw pointer example:
    int* raw_ptr = new int(5);
    std::cout << "Raw pointer value: " << *raw_ptr << std::endl;

    // Unique pointer example:
    std::unique_ptr<int> unique_ptr = std::make_unique<int>(10);
    std::cout << "Unique pointer value: " << *unique_ptr << std::endl;
}
```
Unique_ptr initialization ways for simple variable:
```
#include <iostream>
#include <memory>

int main()
{
    // common way to use it, declaring the variable in the same line
    std::unique_ptr<int> ptrToInt1(new int(5));
    std::cout << "Value stored in unique_ptr: " << *ptrToInt1 << std::endl;

    // declaring int variable before
    int val = 5;
    std::unique_ptr<int> ptrToInt2(new int(val));
    std::cout << "Value stored in unique_ptr: " << *ptrToInt2 << std::endl;

    return 0;
}
```

## Pointers and methods
```
// Raw pointer
myFish.swim()

// Unique pointer
pFish->swim()
```
## Pointer outside scope of program
The following code will cause a segmentation error: 0x403010 Segmentation fault (core dumped)
* because it tries to access a specified memory location
* this memory location is forbidden to me, because it is outside the scope of this program
```
#include<iostream>
void main() {
  int* p =(int*)0x403010;
  std::cout << p << *p;
}
```

# FSTREAM

FSTREAM use ONLY when need both R/W access

IFSTREAM input

OFSTREAM output


# FILESYSTEM (Works like Pathlib in Python)
* filesystem C++17
```
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <filesystem>
namespace fs = std::filesystem;
 
int main()
{
    fs::current_path(fs::temp_directory_path());
    fs::create_directories("sandbox/1/2/a");
    fs::create_directory("sandbox/1/2/b");
    fs::permissions("sandbox/1/2/b", fs::perms::others_all, fs::perm_options::remove);
    fs::create_directory("sandbox/1/2/c", "sandbox/1/2/b");
    std::system("ls -l sandbox/1/2");
    std::system("tree sandbox");
    fs::remove_all("sandbox");
}
```
* boost filesystem
can join paths with / , convert to string, etc
```
#include <boost/filesystem.hpp>
#include <boost/foreach.hpp>
int main()
{
	boost::filesystem::path targetDir( "C:\\MyStuff" ); 
	boost::filesystem::directory_iterator it( targetDir ), eod;
	BOOST_FOREACH( boost::filesystem::path const &p, std::make_pair( it, eod ) )   { 
		if( is_regular_file( p ) ){
			std::string filename = p.filename().string();
			std::cout << filename << std::endl;
		} 
	}
	return 0;
}
```

# ECLIPSE FOR LINUX

1-Install Java/C++/Boost/CMake
```
sudo apt install default-jre
sudo apt install build-essential
sudo apt install g++
g++ --version
sudo apt install cmake
sudo apt-get install libboost-dev
```

2-ECLIPSE 64bit

Find/Download latest Eclipse C++ file online

For example: eclipse-cpp-2022-12-R-linux-gtk-x86_64.tar.gz 

```
wget http://www.mirrorservice.org/sites/download.eclipse.org/eclipseMirror/technology/epp/downloads/release/2022-12/R/eclipse-cpp-2022-12-R-linux-gtk-x86_64.tar.gz
sudo tar xf eclipse-cpp-2022-12-R-linux-gtk-x86_64.tar.gz -C /opt
sudo ln -s /opt/eclipse/eclipse /usr/local/bin/
eclipse
```

# ECLIPSE FOR WINDOWS

1 download cygwin setupx8664.exe : Install needed packages and boost

2 add cygwin vin to path

3 install eclipse



# ECLIPSE SHORTCUT KEYS

-highlight text and use CTRL+SHIFT+F to auto-format

-CTRL+B Builds

-CTRL+F11 Builds+Runs


# 2D Vectors
https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/


# Windows - Setup VSCode with Cygwin

https://www.cs.odu.edu/~zeil/FAQs/Public/vscodeWithCygwin/


# Read - Watch "C++ arrays can be weird

https://www.youtube.com/shorts/JNfgtsiqd2M


