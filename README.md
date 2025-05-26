
# 💳 Bank Management System - Console-Based in C++

##  النسخة العربية

يُعتبر هذا المشروع تطبيقًا عمليًا متكاملًا لنظام بنك مبني باستخدام لغة C++ فقط، دون استخدام أي واجهات رسومية (GUI)، وإنما من خلال شاشة الكونسول. تم تنفيذ المشروع وفق مبدأ البرمجة الكائنية (OOP) وتنظيم الكود ضمن ملفات رأسية ومصدرية متعددة.

### 🏗️ تفاصيل المشروع

- 📁 تم تقسيم المشروع إلى مكتبات متعددة لزيادة القابلية لإعادة الاستخدام والتنظيم:
  - مكتبة الأدوات (Utility Library)
  - مكتبة الإدخال والتحقق من الصحة (Input & Validation Library)
- 🧾 قاعدة البيانات تعتمد على ملفات نصية (`.txt`) لتخزين بيانات العملاء والمستخدمين، مع دعم التشفير لكلمات المرور.
- 🔐 نظام الدخول والصلاحيات تم بناؤه باستخدام التمثيل الثنائي (Bitwise Permissions) للتحكم الدقيق في المهام المتاحة لكل مستخدم.
- 🧑‍💼 يشمل النظام إدارة العملاء، إجراء المعاملات البنكية، إدارة المستخدمين، وتسجيل العمليات في ملفات سجلات.

### 🧠 الوظائف الأساسية

#### 👤 إدارة العملاء:
- إضافة / تحديث / حذف عميل
- البحث عن عميل
- عرض قائمة العملاء

#### 💰 المعاملات البنكية:
- الإيداع
- السحب
- تحويل الأموال بين العملاء
- عرض إجمالي الأرصدة

#### 🛡️ إدارة المستخدمين:
- تسجيل الدخول وتطبيق الصلاحيات
- إضافة / تحديث / حذف / البحث عن مستخدم
- إظهار سجلات تسجيل الدخول
- قفل النظام بعد 3 محاولات فاشلة

#### 🔐 أمان البيانات:
- تخزين مشفر لكلمات المرور
- سجلات مفصلة لعمليات الدخول والتحويلات

---

##  English Version

This is a fully functional console-based **Bank System** developed in C++ using Object-Oriented Programming principles. No GUI libraries were used; the system operates entirely through the console.

### 🏗️ Project Structure

- 📚 Modular design with reusable components:
  - Utility Library
  - Input & Validation Library
- 📁 Data is persisted using `.txt` files as flat-file databases.
- 🔐 Role and access management implemented using **bitwise permissions** for flexible and efficient control.
- 🧑‍💼 The system supports client management, banking transactions, user control, and logging.

### 🧠 Core Features

#### 👤 Client Management:
- Add / Update / Delete Client
- Find Specific Client
- List All Clients

#### 💰 Transactions:
- Deposit Funds
- Withdraw Funds
- Transfer Between Clients
- Display Total Bank Balance

#### 🛡️ User Management:
- Login System with Permissions
- Add / Update / Delete / Find Users
- Login Logs and Security Controls
- System Lock after 3 Failed Login Attempts

#### 🔐 Security:
- Passwords are stored securely with encryption.
- Login and Transfer logs are stored in text files for tracking purposes.

---

📂 **This project is ideal for learning practical C++ programming, file handling, modular design, and system-level architecture in a real-world application.**
