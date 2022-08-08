# oh-modern-cpp
Code example of Microsoft modern C + + vs2022 translation

---
---
title: ModernC++/C++语言参考
date: 2022-08-07 21:19:30
tags: C++, Modern_C++
---

**前言赘叙**
本系列文档是对于微软文档《Modern C++ vs2022》进行翻译并插入一定的个人见解。个人之力翻译可能并不标准，还望海涵，也请多多指点。敝人也尝试通过这次机会向大家分享，也希望个人也能在代码造诣上得到提高。为了能够帮助理解，本人也创建了一个仓库，会在接下来使用代码的地方进行插入，当然也欢迎直接阅读示例demo

点击此处可浏览仓库 [CvRain/oh-modern-cpp](https://github.com/CvRain/oh-modern-cpp)
点击此处可浏览原文 [C++ Language Reference | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-170)

---


# C++语言参考
*C++ Language Reference*

本参考说明了在 Microsoft C++ 编译器中实现的 C++ 编程语言。该组织基于 Margaret Ellis 和 Bjarne Stroustrup 的 The Annotated C++ Reference Manual 以及 ANSI/ISO C++ 国际标准 (ISO/IEC FDIS 14882)。包括 Microsoft 特定的 [^1]C++ 语言功能实现。
有关现代 C++ 编程实践的概述，请参阅《[Welcome Back to C++](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170)》
请参阅下表以快速找到关键字或运算符：
-   [C++ Keywords](https://docs.microsoft.com/en-us/cpp/cpp/keywords-cpp?view=msvc-170) （C++关键字）
-   [C++ Operators](https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170)（C++操作符）

# 在这个部分
[Lexical Conventions](https://docs.microsoft.com/en-us/cpp/cpp/lexical-conventions?view=msvc-170)  词汇约定
C++程序的基本词法元素：预定义字符（标记）、注释、操作符、关键字、标点符号、字符串。此外还有：文件转译（文件操作）、运算符优先级/关联性。
> Fundamental lexical elements of a C++ program: tokens, comments, operators, keywords, punctuators, literals. Also, file translation, operator precedence/associativity.

---
[Basic Concepts](https://docs.microsoft.com/en-us/cpp/cpp/basic-concepts-cpp?view=msvc-170)  基本概念
范围、链接、程序的启动和终止、存储类和类型。
> Scope, linkage, program startup and termination, storage classes, and types.

---
[Built-in types](https://docs.microsoft.com/en-us/cpp/cpp/fundamental-types-cpp?view=msvc-170) 内置类型
C++编译器中内置的基本类型及其取值范围。
> The fundamental types that are built into the C++ compiler and their value ranges.

---
[Standard Conversions](https://docs.microsoft.com/en-us/cpp/cpp/standard-conversions?view=msvc-170)  标准转换
内置类型之间的类型转换。此外，指针、引用和指向成员的类型之间的算术转换和转换。
> Type conversions between built-in types. Also, arithmetic conversions and conversions among pointer, reference, and pointer-to-member types.

---
[Declarations and definitions](https://docs.microsoft.com/en-us/cpp/cpp/declarations-and-definitions-cpp?view=msvc-170) 声明和定义
声明和定义变量、类型和函数。
> Declaring and defining variables, types and functions.

---
[Operators, Precedence and Associativity](https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170)  
运算符、优先级和关联性
C++中的运算符。
> The operators in C++.

---
[Expressions](https://docs.microsoft.com/en-us/cpp/cpp/expressions-cpp?view=msvc-170)  表达式
表达式的类型、表达式的语义、运算符的参考主题、强制转换和强制转换运算符、运行时类型信息。
> Types of expressions, semantics of expressions, reference topics on operators, casting and casting operators, run-time type information.

---
[Lambda Expressions](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170)  Lambda表达式
一种隐式定义函数对象类并构造该类类型的函数对象的编程技术。
> A programming technique that implicitly defines a function object class and constructs a function object of that class type.

---
[Statements](https://docs.microsoft.com/en-us/cpp/cpp/statements-cpp?view=msvc-170)  语句
表达式、null空值、复合语句、选择、迭代、跳转和声明语句。
> Expression, null, compound, selection, iteration, jump, and declaration statements.

---
[Classes and structs](https://docs.microsoft.com/en-us/cpp/cpp/classes-and-structs-cpp?view=msvc-170)  类和结构体
对于类、结构体和共用体的介绍。此外也有，成员函数、特殊成员函数、数据成员、位字段、this指针，嵌套类。
> Introduction to classes, structures, and unions. Also, member functions, special member functions, data members, bit fields, **`this`** pointer, nested classes.

---
[Unions](https://docs.microsoft.com/en-us/cpp/cpp/unions?view=msvc-170)  联合体
用户定义类型，其中所有成员共享同一内存位置。
> User-defined types in which all members share the same memory location.

---
[Derived Classes](https://docs.microsoft.com/en-us/cpp/cpp/inheritance-cpp?view=msvc-170)  派生类
单个和多个继承、虚函数、多继承、抽象类、范围规则。 此外，还有__super和__interface关键字。
> Single and multiple inheritance, **`virtual`** functions, multiple base classes, **abstract** classes, scope rules. Also, the **`__super`** and **`__interface`** keywords.

---
[Member-Access Control](https://docs.microsoft.com/en-us/cpp/cpp/member-access-control-cpp?view=msvc-170)  成员访问控制
控制对类成员的访问： public、 private关键字和 protected 关键字。 友元函数和友元类。
> Controlling access to class members: **`public`**, **`private`**, and **`protected`** keywords. Friend functions and classes.

---
[Overloading](https://docs.microsoft.com/en-us/cpp/cpp/operator-overloading?view=msvc-170)  重载
重载运算符，对运算符重载的规则。
> Overloaded operators, rules for operator overloading.

---
[Exception Handling](https://docs.microsoft.com/en-us/cpp/cpp/exception-handling-in-visual-cpp?view=msvc-170)  异常处理
C++ 异常处理、结构化异常处理 (SEH)、用于编写异常处理语句的关键字。
> C++ exception handling, structured exception handling (SEH), keywords used in writing exception handling statements.

---
[Assertion and User-Supplied Messages](https://docs.microsoft.com/en-us/cpp/cpp/assertion-and-user-supplied-messages-cpp?view=msvc-170)  断言和User-Supplied消息
\#error 指令， static_assert 关键字， assert 宏。
> `#error` directive, the **`static_assert`** keyword, the `assert` macro.

---
[Templates](https://docs.microsoft.com/en-us/cpp/cpp/templates-cpp?view=msvc-170)  模板
模板规范、函数模板、类模板、typename 关键字、模板对比于宏定义、模板和智能指针。
> Template specifications, function templates, class templates, **`typename`** keyword, templates vs. macros, templates and smart pointers.

---
[Event Handling](https://docs.microsoft.com/en-us/cpp/cpp/event-handling?view=msvc-170)  事件处理
定义事件和事件处理程序
> Declaring events and event handlers.

---
[Microsoft-Specific Modifiers](https://docs.microsoft.com/en-us/cpp/cpp/microsoft-specific-modifiers?view=msvc-170)  独属于微软(msvc)的修饰符
Microsoft C++ 专用修饰符。 内存寻址、调用约定、naked函数、扩展存储类属性 (\_\_declspec) 。 \_\_w64
> Modifiers specific to Microsoft C++. Memory addressing, calling conventions, **`naked`** functions, extended storage-class attributes (**`__declspec`**), **`__w64`**.

---
[Inline Assembler](https://docs.microsoft.com/en-us/cpp/assembler/inline/inline-assembler?view=msvc-170)  内联汇编程序
在\_\_asm块中使用汇编语言和C++。
> Using assembly language and C++ in **`__asm`** blocks.

---
[Compiler COM Support](https://docs.microsoft.com/en-us/cpp/cpp/compiler-com-support?view=msvc-170)  编译器对COM的支持[^2]
有关用于支持 COM 类型的 Microsoft 专用类和全局函数的参考。
> A reference to Microsoft-specific classes and global functions used to support COM types.

---
[Microsoft Extensions](https://docs.microsoft.com/en-us/cpp/cpp/microsoft-extensions?view=msvc-170)  Microsoft的拓展[^3]
Microsoft微软对C++进行的扩展
> Microsoft extensions to C++.

---
[Nonstandard Behavior](https://docs.microsoft.com/en-us/cpp/cpp/nonstandard-behavior?view=msvc-170)  非标准行为
有关Microsoft C++编译器的非标准行为的信息。
Information about nonstandard behavior of the Microsoft C++ compiler.

---
[Welcome Back to C++](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170)  欢迎回到C++
一篇现代C + +编程实践概述，指引编写安全、正确、高效的程序。
> An overview of modern C++ programming practices for writing safe, correct and efficient programs.


---
 [^1]: 因为由微软实现，所以部分代码有着其平台的独占性，也可以理解为部分函数的特性通过msvc会获得不同的效果
 [^2]: Microsoft C++ 编译器可以直接读取组件对象模型 (COM) 类型库，并将内容转换为可包含在编译中的 C++ 源代码。 语言扩展可用于促进桌面应用的客户端上的 COM 编程。
 [^3]: 微软对C++制定了许多扩展以及好用的库和框架例如，WIN_API, MFC, Win32等