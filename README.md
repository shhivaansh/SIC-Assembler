# 🛠️ SIC Assembler (C++ Implementation)

This is a **two-pass assembler** for the **Simplified Instructional Computer (SIC)** architecture, written in **C++**.  
It translates SIC assembly language programs into **object code** and generates an **assembly listing**.

---

## ✨ Features

✅ Translate mnemonic operation codes to machine language equivalents.  
✅ Assign machine addresses to symbolic labels.  
✅ Generate object program and assembly listing.  
✅ Handle standard assembler directives.  

---

## 📜 Assembler Directives

Assembler directives are **pseudo instructions** for the assembler itself.  
They do **not** generate machine code.

| Directive | Description |
|-----------|-------------|
| `START`  | Specify program name and starting address. |
| `END`    | Mark end of the source program and specify the first execution instruction. |
| `BYTE`   | Define byte constant(s). |
| `WORD`   | Define word constant (3 bytes). |
| `RESB`   | Reserve byte(s) of memory. |
| `RESW`   | Reserve word(s) of memory. |

---

## 🏗️ Implementation Overview

The assembler uses **two passes**:

### 🔹 Pass 1: Address Assignment
- Scans the source program.
- Assigns addresses to all labels.
- Builds the **symbol table**.

### 🔹 Pass 2: Object Code Generation
- Translates mnemonics to machine code.
- Resolves symbol references.
- Generates:
  - **Object Program**
  - **Assembly Listing**

---

## 📝 Object Program Format

- **End of Record** → `00` (null character).
- **End of File** → Zero-length record.

---

## 📂 Outputs

- `.obj` – Object program (machine code).
- `.lst` – Assembly listing with addresses and object codes.

---

## 🚀 How to Run

```bash
# Compile the assembler
g++ -o sic_assembler main.cpp

# Run the assembler with your source file
./sic_assembler source.asm
