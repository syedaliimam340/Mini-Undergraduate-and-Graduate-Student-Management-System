# 🎓 EduTrack-Cpp: Student Management System

## 📌 Overview
EduTrack-Cpp is a **C++ Student Management System** designed to demonstrate **Object-Oriented Programming (OOP)** principles.  
It efficiently manages **Undergraduate** and **Graduate** students, evaluates academic progress, and tracks scholarship eligibility.


## ✨ Features
### 🧑‍🎓 Base Class: Curstudent
- Stores student ID and name
- Uses a static counter to assign unique student numbers

### 🎓 Undergraduate Class: ug
- Tracks semester (1–8) and GPA (0–4)
- Validates input for semester and GPA
- Determines **scholarship eligibility** (GPA ≥ 3.5)
- Identifies **final year students** (semester ≥ 6)
- Maintains static counters for scholarship and final year totals

### 📚 Graduate Class: Graduate
- Stores thesis title, supervisor name, chapters completed, and conference details
- Calculates **thesis progress percentage**
- Displays supervisor and conference information


## 🛠️ Concepts Demonstrated
- **Inheritance** (Base → Undergraduate & Graduate)
- **Static Members** (student count, scholarship count, final year count)
- **Encapsulation** (private data with public methods)
- **Validation Logic** (ensuring correct GPA and semester input)
- **Constructor Usage** (Graduate class input handling)





   
