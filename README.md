
# CPPFOLDER overview
[CPPFOLDER](https://github.com/tanghocle123/cppfolder) is the setup that I use when I'm starting a new project or just a small tinkering to do in C++.

## Index

- [About](#About)
- [Usage](#usage)
  - [Installation](#installation)
  - [Examples](#examples)
- [Development](#development)
  - [Pre-Requisites](#pre-requisites)
  - [Development Environment](#development-environment)
  - [File Structure](#file-structure)
  - [Build](#build) 
- [Community](#community)
  - [Contribution](#contribution)
- [Resources](#resources)
- [Gallery](#gallery)
- [Credit/Acknowledgment](#creditacknowledgment)
- [License](#license)

## About
Setting the same things up and typing them all over again can be quite terrifying.

I figure by having this template of a project like this, my workflow will be better and I don't have to bother setting up things again. I just have to follow the instructions in the folder

Linux supported and terminal based. Doesn't involve any IDE

## Usage
Use it to speed up your C++ project setup.

###   Installation

```
// Clone this github to your folder
cd /Your/Path/To/Folder
git clone https://github.com/tanghocle123/cppfolder.git
```

###   Examples

#### Start from the top directory - cppfolder/
```
make 
```
Result:
```

```
##  Development

###  Pre-Requisites
- [Googletest](https://github.com/google/googletest) and [***](***) for testing
- C++11 or newer for developing code
- A compiler.
- Text editor or IDE.

###  Development Environment
As long as you have a GCC or G++ compiler that supports C++11, you should be good.

###  File Structure
You can begin develop by having these file ready in this structure

```
├── XXX
│   ├── XXX.cpp
│   ├── XXX.h
│   └──main.cpp
└── XXX_tester
    ├── include_test.h
 	├── main.cpp
    └── Test_folder
```
###   Build
Include the header XXX.h in your .cpp file

``C++
#include bla bla bla
#include "XXX.h"
``

COMMAND LINE
Then use add this part to the end of your compiling instruction

``
-L/usr/local/lib -lXXX
``

Example:

``
g++ -O3 -std=c++14 -g -o main main.cpp -L/usr/local/lib -lXXX
``

## Community

This is open-source, you can use this library how ever you wish to use it.

 ###  Contribution

 Your contributions are always welcome and appreciated. The following are the things you can do to contribute to this project.

 1. **Report a bug** <br>
 If you think you have encountered a bug, and I should know about it, feel free to create an issue in this Github repo and I will take care of it.

 2. **Request a feature** <br>
 You can also request for a feature with an issue, and if it is viable, it will be picked for development.  

 3. **Code contribution** <br>
 Hit me up with an issue for
 - How to speed up the computation?
 - More operations ...



##  Resources
These are the resources I learned from to make this library come true.
### MAKEFILE


### Testing
[https://github.com/google/googletest/blob/master/googletest/docs/primer.md](https://github.com/google/googletest/blob/master/googletest/docs/primer.md)
### Utilities
[https://stackedit.io/](https://stackedit.io/) for online readme editing

[Mastering markdown](https://guides.github.com/features/mastering-markdown/)

[README template I use for most of my projects.](https://www.reddit.com/r/programming/comments/cfeu99/readme_template_i_use_for_most_of_my_projects/)


##  Gallery

## Credit/Acknowledgment

##  License
[MIT License](https://opensource.org/licenses/MIT) </b> </em>
