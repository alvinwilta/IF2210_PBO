// file FooMem.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 7
    Tanggal: 10/02/2021
    Topik: Latihan 2
*/

#include <iostream>
#include "FooMem.hpp"

using namespace std;

int Maks = 10;

FooMem::FooMem():Max(Maks) 
{
    this->Size = Max;
    Mem = new int[this->Size];
    this->Left = -1;
    this->Right = this->Size;
}

FooMem::FooMem(int _s):Max(Maks) 
{
    if (_s <= Max) 
    {
        this->Size = _s;
        Mem = new int[_s];
        this->Left = -1;
        this->Right = this->Size;
    }
    else
    {
        this->Size = Max;
        Mem = new int[this->Size];
        this->Left = -1;
        this->Right = this->Size;
    }
}

FooMem::FooMem(FooMem& F):Max(F.Max) 
{
    this->Size = F.Size;
    Mem = new int[this->Size];
    for (int i=0;i<this->Size;i++) 
    {
        this->Mem[i] = F.Mem[i];
    }
    this->Left = F.Left;
    this->Right = F.Right;
}

FooMem::~FooMem() {
    delete[] this->Mem;
}

FooMem& FooMem::operator=(FooMem& F)
{
    this->Size = F.Size;
    Mem = new int[this->Size];
    for (int i=0;i<this->Size;i++) 
    {
        this->Mem[i] = F.Mem[i];
    }
    this->Left = F.Left;
    this->Right = F.Right;
    return *this;
}

int FooMem::GetLeft() 
{
    return this->Left;
}

int FooMem::GetRight()
{
    return this->Right;
}

bool FooMem::IsEmpty() const
{
    return (this->Left == -1 && this->Right == this->Size) ? true : false; 
}

bool FooMem::IsFull() const
{
    return (this->Left == this->Right-1) ? true : false;
}

void FooMem::Add(int x) 
{
    if (!FooMem::IsFull())
    {
        if (this->Left > this->Right) 
        {
            this->Right--;
            this->Mem[this->Right] = x;
        }
        else
        {
            this->Left++;
            this->Mem[this->Left] = x;
        }
    }
}

int FooMem::Del()
{
    if (!FooMem::IsEmpty()) 
    {
        if (this->Left > this->Right)
        {
            this->Mem[this->Right] = 0;
            this->Right++;
        }
        else
        {
            this->Mem[this->Left] = 0;
            this->Left--;
        }
    }
}