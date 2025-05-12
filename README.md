# 🧠 Memory Leak Detection in C++

A simple and effective implementation of **memory leak detection techniques** in C++, aimed at helping developers identify and fix memory mismanagement in native applications. This project is ideal for learning how dynamic memory works and how to avoid leaks in real-time systems like games and engines.

---

## 🔍 What’s Included

- 🧹 **Leak Detection System**: Tracks allocations and deallocations using operator overloading.
- 📊 **Memory Report Logging**: Outputs unfreed memory locations at program end.
- 🛠️ **RAII Concepts**: Demonstrates how to use smart pointers to avoid leaks.
- 🧪 **Test Cases**: Simulates intentional leaks to validate the system.

---

## 🛠️ Technologies Used

- **C++17**
- Custom memory tracking
- `new` / `delete` operator overloading
- File I/O for logging
- Basic use of **smart pointers** (`std::unique_ptr`, `std::shared_ptr`)

---

## 📁 Project Structure

```plaintext
/MemoryLeakDetection/
│
├── LeakTracker.hpp       # Custom allocator and tracker logic
├── MemoryLogger.cpp      # Logs leaks to console/file
├── TestLeak.cpp          # Simulates intentional memory leaks
├── RAIIExample.cpp       # Uses smart pointers to avoid leaks
├── README.md
