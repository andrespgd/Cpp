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




# FSTREAM

FSTREAM use ONLY when need both R/W access

IFSTREAM input

OFSTREAM output


# FILESYSTEM
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

