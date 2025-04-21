#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string get_opcode(string str)
{
    map <string, string> opcode;
	opcode.insert(pair <string , string> ("LDA", "00"));   // Load Accumulator
	opcode.insert(pair <string , string> ("AND", "40"));   // Logical AND with accumulator
	opcode.insert(pair <string , string> ("DIV", "24"));   // Divide accumulator by memory
	opcode.insert(pair <string , string> ("SUB", "1C"));   // Subtract memory from accumulator
	opcode.insert(pair <string , string> ("ADD", "18"));   // Add memory to accumulator
	opcode.insert(pair <string , string> ("LDL", "08"));   // Load Link Register
	opcode.insert(pair <string , string> ("RD", "D8"));    // Read from input device
	opcode.insert(pair <string , string> ("WD", "DC"));    // Write to output device
	opcode.insert(pair <string , string> ("LDCH", "50"));  // Load character from memory
	opcode.insert(pair <string , string> ("STX", "10"));   // Store Index Register
	opcode.insert(pair <string , string> ("JLT", "38"));   // Jump if Less Than
	opcode.insert(pair <string , string> ("TIX", "2C"));   // Increment Index Register and Compare
	opcode.insert(pair <string , string> ("TD", "E0"));    // Test Device
	opcode.insert(pair <string , string> ("STCH", "54"));  // Store Character to memory
	opcode.insert(pair <string , string> ("STL", "14"));   // Store Link Register
	opcode.insert(pair <string , string> ("LDX", "04"));   // Load Index Register
	opcode.insert(pair <string , string> ("RSUB", "4C"));  // Return from Subroutine
	opcode.insert(pair <string , string> ("STA", "0C"));   // Store Accumulator
	opcode.insert(pair <string , string> ("J", "3C"));     // Jump to Address
	opcode.insert(pair <string , string> ("JEQ", "30"));   // Jump if Equal
	opcode.insert(pair <string , string> ("COMP", "14"));  // Compare Accumulator with Memory
	opcode.insert(pair <string , string> ("JSUB", "48"));  // Jump to Subroutine
	opcode.insert(pair <string , string> ("JGT", "34"));   // Jump if Greater Than
	opcode.insert(pair <string , string> ("MUL", "20"));   // Multiply Accumulator
	opcode.insert(pair <string , string> ("OR", "44"));    // Logical OR with Accumulator
	opcode.insert(pair <string , string> ("STSW", "E8"));  // Store Status Word

	if(opcode.find(str) == opcode.end())
		return "-1";
	
	return opcode[str];
}
