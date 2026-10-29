#pragma once
class IntArray
{
public:
	IntArray(int size);
	~IntArray();
	int Size();
	IntArray(const IntArray& other);
	void operator=(const IntArray& other);

public:
	int Get(int i);
	void Set(int i, int value);

private:
	void CheckIndex(int i);

private:
	int* m_array;
	int m_size;
};