#include "TestRepoSTL.h"
#include <assert.h>

TestRepository::TestRepository()
{
	Prajitura s1(5 , "Ana", "Ciocolata" , 23);
    Prajitura s2(6 , "Maria", "Ciocolata" , 24);
    Prajitura s3(7 , "Miguela", "Ciocolata" , 25);
    Prajitura s4(8 , "Dorela", "Ciocolata" , 26);
    this->studentsIn.push_back(s1);
	this->studentsIn.push_back(s2);
	this->studentsIn.push_back(s3);
	this->studentsIn.push_back(s4);
}

void TestRepository::testAll()
{
	this->testLoadFromFile();
	this->testSaveToFile();
	this->testGetSize();
	this->testGetAll();
	this->testGetStudentAtPosition();
	this->testAddStudent();
	this->testUpdateStudent();
	this->testDeleteStudent();
}

void TestRepository::testLoadFromFile()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	assert(this->repoSTL.getSize() == 4);
	vector<Prajitura> studentsIn = this->repoSTL.getAll();
	for (int i = 0; i < this->repoSTL.getSize(); i++)
	{
		assert(studentsIn[i] == this->studentsIn[i]);
	}
}

//void TestRepository::testSaveToFile()
//{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
//	this->repoSTL.setFileNameOut(this->fileNameOut);
//	this->repoSTL.loadFromFile();
//	int initialLen = this->repoSTL.getSize();
//	Student newStudent("Radu", 40);
//	this->repoSTL.addStudent(newStudent);
//	this->repoSTL.saveToFile();
//	this->repoSTL.setFileNameIn(this->fileNameOut);
//	this->repoSTL.loadFromFile();
//	assert(this->repoSTL.getSize() == initialLen + 1);
//	vector<Student> studentsIn = this->repoSTL.getAll();
//	for (int i = 0; i < this->repoSTL.getSize() - 1; i++)
//	{
//		assert(studentsIn[i] == this->studentsIn[i]);
//	}
//	assert(studentsIn[initialLen] == newStudent);
//}

void TestRepository::testGetSize()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	assert(this->repoSTL.getSize() == 4);
}

void TestRepository::testGetAll()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	vector<Prajitura> studentsIn = this->repoSTL.getAll();
	for (int i = 0; i < this->repoSTL.getSize(); i++)
	{
		assert(studentsIn[i] == this->studentsIn[i]);
	}
}

void TestRepository::testGetStudentAtPosition()
{
    //	this->repoSTL.setFileName(this->fileNameIn);
	this->repoSTL.loadFromFile();
	for (int i = 0; i < this->repoSTL.getSize(); i++)
	{
//		assert(this->repoSTL.getStudentAtPosition(i) == this->studentsIn[i]);
	}
//	Student emptyStudent("", 0);
//	assert(this->repoSTL.getStudentAtPosition(-1) == emptyStudent);
//	assert(this->repoSTL.getStudentAtPosition(this->repoSTL.getSize()) == emptyStudent);
}

void TestRepository::testAddStudent()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	int initialLen = this->repoSTL.getSize();
	Prajitura s(5,"Silviu","macaroane", 40);
	this->repoSTL.addElement(s);
	assert(this->repoSTL.getSize() == initialLen + 1);
//	assert(this->repoSTL.getElementAtPosition(initialLen) == s);
}

void TestRepository::testUpdateStudent()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	Prajitura s(5 , "Silviu" , "Vanilie" , 40);
//	this->repoSTL.updateElement(s, s);
	for (int i = 0; i < this->repoSTL.getSize(); i++)
	{
		assert(studentsIn[i] == this->studentsIn[i]);
	}
//	this->repoSTL.updateStudent(this->studentsIn[1], s);
//	assert(this->repoSTL.getStudentAtPosition(1) == s);
}

void TestRepository::testDeleteStudent()
{
//	this->repoSTL.setFileNameIn(this->fileNameIn);
	this->repoSTL.loadFromFile();
	int initialLen = this->repoSTL.getSize();
	Prajitura s(6,"Silviu","Ciocolata", 40);
//	this->repoSTL.deleteElement(s);
	assert(this->repoSTL.getSize() == initialLen);
//	this->repoSTL.deleteStudent(this->studentsIn[2]);
	assert(this->repoSTL.getSize() == initialLen - 1);
}
