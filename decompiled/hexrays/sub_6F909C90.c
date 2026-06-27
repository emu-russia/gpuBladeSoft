int __thiscall sub_6F909C90(int *this, char a2)
{
  int *v2; // ebx@1
  int v3; // edi@1
  int result; // eax@4

  v2 = this;
  v3 = *(_DWORD *)(*this - 12);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(*this - 8) || *(_DWORD *)(*this - 4) > 0 )
    sub_6F909A00(this, v3 + 1);
  *(_BYTE *)(*v2 + *(_DWORD *)(*v2 - 12)) = a2;
  result = *v2;
  *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(result - 12) = v3 + 1;
  *(_BYTE *)(result + v3 + 1) = 0;
  return result;
}
