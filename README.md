# 🎓 JNAFAU B.Tech DTDP Practical Programs (Java + Computer Graphics)

This repository contains a curated set of **Java** and **Computer Graphics (C++)** programs structured according to the **JNAFAU CBCS 2017-18 syllabus**, specifically for **B.Tech DTDP (Design Tools & Product Development)** students.

Developed and tested for academic use and lab execution, the programs are organized in two primary folders:

- `JavaPrograms/` – Core to advanced Java programs
- `ComputerGraphics/` – C++ programs using `graphics.h` (BGI)

---

## 📁 Folder Structure

.
├── JavaPrograms/ # Java practicals from basics to networking
│ ├── 01_SimpleProgram.java
│ ├── 02_OOP_ClassExample.java
│ ├── ...
│ └── 15_ClientServerChat.java

├── ComputerGraphics/ # C++ graphics programs using BGI
│ ├── 01_SimpleLine.cpp
│ ├── 02_DifferentLines.cpp
│ ├── ...
│ └── 25_Tractor.cpp

└── README.md


---

## 🖥️ Computer Graphics Programs (C++)

All graphics programs use the classic **BGI `graphics.h`** library. These programs are ideal for Windows-based environments using:

- Turbo C++
- Dev-C++ with WinBGIm
- Code::Blocks with `graphics.h` support

### 🔹 Topics & Program List

| No. | Program File               | Description                                |
|-----|----------------------------|--------------------------------------------|
| 01  | 01_SimpleLine.cpp          | Simple line drawing                        |
| 02  | 02_DifferentLines.cpp      | Drawing different types of lines           |
| 03  | 03_DifferentPolygons.cpp   | Triangles and polygons                     |
| 04  | 04_DDA_Line.cpp            | DDA Line Drawing Algorithm                 |
| 05  | 05_BresenhamLine.cpp       | Bresenham’s Line Drawing Algorithm         |
| 06  | 06_PolygonColor.cpp        | Colored polygon rendering                  |
| 07  | 07_Curves.cpp              | Drawing curves (parametric/sinusoidal)     |
| 08  | 08_MidpointCircle.cpp      | Midpoint Circle Drawing Algorithm          |
| 09  | 09_MidpointEllipse.cpp     | Midpoint Ellipse Algorithm                 |
| 10  | 10_Viewing.cpp             | Viewport and transformations               |
| 11  | 11_Clipping.cpp            | Line clipping (basic implementation)       |
| 12  | 12_SurfaceDetection.cpp    | Bar3D surface rendering                    |
| 13  | 13_Animation.cpp           | Circle animation                           |
| 14  | 14_IndianFlag.cpp          | Drawing the Indian national flag          |
| 15  | 15_HumanFace.cpp           | Cartoon human face                         |
| 16  | 16_Kite.cpp                | Kite drawing using polygons                |
| 17  | 17_MovingCar.cpp           | Moving car animation                       |
| 18  | 18_House.cpp               | Drawing a house with door & roof           |
| 19  | 19_AndroidLogo.cpp         | Android robot face                         |
| 20  | 20_Bicycle.cpp             | Bicycle diagram with wheels                |
| 21  | 21_AudioEmbedding.cpp      | ⚠️ Placeholder (audio not supported)        |
| 22  | 22_VideoEmbedding.cpp      | ⚠️ Placeholder (video not supported)        |
| 23  | 23_CeilingFan.cpp          | Spinning fan using rotation logic          |
| 24  | 24_Keyboard.cpp            | Keyboard layout using rectangles           |
| 25  | 25_Tractor.cpp             | Basic tractor shape using primitives       |

---

## ☕ Java Programs

This set covers **fundamentals to advanced Java**, including GUI and networking.

### 💡 Execution
Use any JDK 8+ based setup (command line or IDE like IntelliJ/Eclipse).

```bash
javac FileName.java
java FileName
🔹 Topics & Program List
No.	Program File	Description
01	01_SimpleProgram.java	Hello World in Java
02	02_OOP_ClassExample.java	Classes and objects
03	03_ConstructorOverload.java	Constructor overloading
04	04_Inheritance.java	Inheritance & method overriding
05	05_InterfaceAbstract.java	Interfaces and abstract classes
06	06_ExceptionHandling.java	Try-catch-finally, custom exceptions
07	07_StringOperations.java	String methods, comparisons
08	08_Multithreading.java	Thread creation and synchronization
09	09_FileIO.java	File reading and writing
10	10_PackagesDemo.java	Creating and importing packages
11	11_AWTFrame.java	AWT GUI: Frame, buttons
12	12_SwingForm.java	Swing: JFrame, JTextField, JButton
13	13_AppletExample.java	Applet with init/start/paint
14	14_ClientSocket.java	Networking: Simple client program
15	15_ServerSocket.java	Networking: Simple server socket
You can combine Program 14 & 15 for basic client-server chat.
⚙️ Setup Instructions

✅ For Java:
JDK 8 or higher
Any IDE: VS Code, IntelliJ, Eclipse
✅ For Graphics (C++):
Turbo C++ (Windows): Pre-installed graphics.h
Dev-C++ / Code::Blocks:
Install WinBGIm graphics library
Add "C:\\Turboc3\\BGI" or your BGI path
Link: graphics.lib, bgi.cpp in project settings
 
🙋‍♀️ Author

Maintained by @nannapravalika

📧 Email: nannapravalika566@gmail.com
📍 Institute: JNAFAU, DTDP Dept.

💫 License

This project is intended for academic and educational use only.
