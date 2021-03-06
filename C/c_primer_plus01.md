## 第1章 概览  

### 在本章中您将学习下列内容：
- C的历史和特性。  
- 编写程序所需步骤。  
- 关于编译器和链接器的一些知识。  
- C的标准。  


### 程序清单：
[101CcodeExample.c](C_Primer_Plus_code/101CcodeExample/main.c)  
[102Concrete.c](C_Primer_Plus_code/102Concrete/main.c)  


### 知识点：
- C语言的起源


### 总结
C是一种强大、简洁的编程语言。之所以流行是因为它提供了有用的编程工具和对硬件良好的控制，还因为C程序在一个系统向另一个系统移植方面比大多数程序更容易。  

C是一种需要编译的语言。C编译器和链接器是将C语言源代码转换为可执行代码的程序。  

用C编程可能很费力、困难并让你感到灰心，但这一工作也可能让你着迷、兴奋和感到满意。希望你也能像我们一样，沉醉于用C进行编程。


### 复习题
1、就编程而言，可移植性表示什么？
   <details>
     <summary>答：</summary>

	一个程序的可移植性好，就是指它的源代码不经修改就可以在多种不同的计算机系统上编译成可以成功运行的程序。
 </details>  
<br/>  

2、 解释源代码文件、目标代码文件和可执行文件之间的区别？
<details>
     <summary>答：</summary>

	源代码文件中包含着程序员使用计算机编程语言编写的代码。目标代码文件包含着机器语言代码。可执行文件包含着组成可执行程序的全部机器语言代码。
 </details>
<br/>  

3、编程的7个主要步骤是什么？
   <details>
     <summary>答：</summary>

	A．定义程序目标。  
	B．设计程序。  
	C．编写程序代码。  
	D．编译程序。  
	E．运行程序。  
	F．测试和调试程序。  
	G．维护和修改程序。  
 </details>
 <br/>  
 
4、编译器的任务是什么？
<details>
     <summary>答：</summary>

	编译器把源代码转换成机器语言代码，也称对象代码。
 </details>
 <br/>  
 
5、链接器的任务是什么？
<details>
     <summary>答：</summary>

	链接器把多个来源（例如：已编译的源代码、库代码、和启动代码）的目标代码连接成一个单独的可执行程序。
 </details>
 <br/>  

### 编程练习
1.您刚刚被MacroMuscle有限公司聘用。该公司要进入欧洲市场，需要一个英寸转换为厘米的程序（1英寸=2.54CM）.他们希望建立的该程序可提示用户输入英寸值。你的工作是定义程序目标并设计程序（编程过程的第1步与第2步）。  
[答题代码(1001)](C_Primer_Plus_code/1001InchConversionCM/main.c)